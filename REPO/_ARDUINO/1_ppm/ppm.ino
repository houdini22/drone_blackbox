//////////////////////CONFIGURATION///////////////////////////////
#define CHANNELS_NUMBER       8           // set the number of chanels
#define DEFAULT_SERVO_VALUE   1700        // set the default servo value
#define PPM_FRAME_LENGTH      32500       // set the PPM frame length in microseconds (1ms = 1000µs)
#define PPM_PULSE_LENGTH      300         // set the pulse length
#define POLARITY              1           // set polarity of the pulses: 1 is positive, 0 is negative
#define SIGNAL_PIN            2           // set PPM signal output pin on the arduino
//////////////////////////////////////////////////////////////////

int ppm[CHANNELS_NUMBER];
unsigned long timeStart = 0;

void setup() {
  // Serial.begin(115200);

  // initiallize default ppm values
  for (int i = 0; i < CHANNELS_NUMBER; i++) {
    ppm[i] = DEFAULT_SERVO_VALUE;
  }

  pinMode(SIGNAL_PIN, OUTPUT);
  digitalWrite(SIGNAL_PIN, !POLARITY);  //set the PPM signal pin to the default state (off)

  cli();
  TCCR1A = 0; // set entire TCCR1 register to 0
  TCCR1B = 0;

  OCR1A = 100;  // compare match register, change this
  TCCR1B |= (1 << WGM12);  // turn on CTC mode
  TCCR1B |= (1 << CS11);  // 8 prescaler: 0,5 microseconds at 16mhz
  TIMSK1 |= (1 << OCIE1A); // enable timer compare interrupt
  sei();
}

void loop() {
  delay(10);
}

ISR(TIMER1_COMPA_vect) {
  static boolean state = true;
  static byte current_channel_number;
  static unsigned int calc_rest;
  
  TCNT1 = 0;

  if (state) {                                        // start pulse
    digitalWrite(SIGNAL_PIN, POLARITY);
    OCR1A = PPM_PULSE_LENGTH * 2;
    state = false;
  } else {                                            // end pulse and calculate when to start the next pulse
    digitalWrite(SIGNAL_PIN, !POLARITY);
    state = true;

    if (current_channel_number >= CHANNELS_NUMBER) {
      current_channel_number = 0;
      calc_rest = calc_rest + PPM_PULSE_LENGTH;
      OCR1A = (PPM_FRAME_LENGTH - calc_rest) * 2;
      calc_rest = 0;
    } else {
      OCR1A = (ppm[current_channel_number] - PPM_PULSE_LENGTH) * 2;
      calc_rest = calc_rest + ppm[current_channel_number];
      current_channel_number++;
    }
  }
}
