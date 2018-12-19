////////////////////// PPM CONFIGURATION ///////////////////////////////
#define CHANNELS_NUMBER       4           // set the number of chanels
#define DEFAULT_SERVO_VALUE   1500        // set the default servo value
#define PPM_FRAME_LENGTH      12500       // set the PPM frame length in microseconds (1ms = 1000µs) (2.5ms * (NUM_CHANNELS + 1)
#define PPM_PULSE_LENGTH      300         // set the pulse length
#define POLARITY              1           // set polarity of the pulses: 1 is positive, 0 is negative
#define SIGNAL_PIN            2           // set PPM signal output pin on the arduino
///////////////////////////////////////////////////////////////////////

#include <Wire.h>

////////////////////// GLOBAL VARIABLES ///////////////////////////////
const unsigned int MAX_INPUT = 50;
int defaultPpmValues[CHANNELS_NUMBER] = {1500, 1500, 1100, 1500};
int ppm[CHANNELS_NUMBER] = {1500, 1500, 1100, 1500};
unsigned long lastReceivedPing = 0;
///////////////////////////////////////////////////////////////////////

void setup() {
  Serial.begin(115200);

  pinMode(SIGNAL_PIN, OUTPUT);
  digitalWrite(SIGNAL_PIN, !POLARITY);    // set the PPM signal pin to the default state (off)

  cli();
  TCCR1A = 0;                             // set entire TCCR1 register to 0
  TCCR1B = 0;

  OCR1A = 100;                            // compare match register, change this
  TCCR1B |= (1 << WGM12);                 // turn on CTC mode
  TCCR1B |= (1 << CS11);                  // 8 prescaler: 0,5 microseconds at 16mhz
  TIMSK1 |= (1 << OCIE1A);                // enable timer compare interrupt
  sei();

  Serial.write("r");
}

void processData(const char *data) {
  String str(data);

  int index1 = str.indexOf(' ');
  int index2 = str.indexOf(' ', index1 + 1);
  int index3 = str.indexOf(' ', index2 + 1);

  int ch1 = str.substring(0, index1).toInt();
  int ch2 = str.substring(index1 + 1, index2).toInt();
  int ch3 = str.substring(index2 + 1, index3).toInt();
  int ch4 = str.substring(index3 + 1, str.length()).toInt();

  ppm[0] = ch3;
  ppm[1] = ch4;
  ppm[2] = ch2;
  ppm[3] = ch1;
}

void processIncomingByte(const byte inByte) {
  static char input_line[MAX_INPUT];
  static unsigned int input_pos = 0;
  static bool started = false;

  switch (inByte) {
    case '^':                                   // begin data packet
      input_pos = 0;
      memset(input_line, 0, MAX_INPUT);
      started = true;
      break;

    case '$':                                   // end data packet
      input_line[input_pos] = 0;
      input_pos = 0;
      if (started) {                            // make sure if full packet
          processData(input_line);
          started = false;
      }            
      break;

    case 'p':                                   // ping
      lastReceivedPing = millis();              // pong
      Serial.write("p");
      break;

    default:                                    // append to data packet
      if (started && input_pos < (MAX_INPUT - 1))
          input_line[input_pos++] = inByte;
      break;
  }
}

void loop() {
  while (Serial.available() > 0)
    processIncomingByte(Serial.read());

  if (millis() - lastReceivedPing > 100) {
    ppm[0] = defaultPpmValues[0];
    ppm[1] = defaultPpmValues[1];
    ppm[2] = defaultPpmValues[2];
    ppm[3] = defaultPpmValues[3];
  }
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
