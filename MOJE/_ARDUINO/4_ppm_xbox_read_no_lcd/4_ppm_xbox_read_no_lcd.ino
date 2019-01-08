////////////////////// PPM CONFIGURATION ///////////////////////////////
#define CHANNELS_NUMBER       8           // set the number of chanels
#define DEFAULT_SERVO_VALUE   1500        // set the default servo value
#define PPM_FRAME_LENGTH      22500       // set the PPM frame length in microseconds (1ms = 1000µs) (2.5ms * (NUM_CHANNELS + 1)
#define PPM_PULSE_LENGTH      300         // set the pulse length
#define POLARITY              1           // set polarity of the pulses: 1 is positive, 0 is negative
#define SIGNAL_PIN            2           // set PPM signal output pin on the arduino
#define LED_PIN               3           // set PIN of LED
///////////////////////////////////////////////////////////////////////

#include <Wire.h>

////////////////////// GLOBAL VARIABLES ///////////////////////////////
const unsigned int MAX_INPUT = 20;
int defaultPpmValues[CHANNELS_NUMBER] = {1500, 1500, 1100, 1500, 1100, 1100, 1100, 1100};
int ppm[CHANNELS_NUMBER] = {1500, 1500, 1100, 1500, 1100, 1100, 1100, 1100};
unsigned long lastReceivedPing = 0;
bool connected = false;
///////////////////////////////////////////////////////////////////////

void startTimer() {
  cli();
  TCCR1A = 0;                             // set entire TCCR1 register to 0
  TCCR1B = 0;

  OCR1A = 100;                            // compare match register, change this
  TCCR1B |= (1 << WGM12);                 // turn on CTC mode
  TCCR1B |= (1 << CS11);                  // 8 prescaler: 0,5 microseconds at 16mhz
  TIMSK1 |= (1 << OCIE1A);                // enable timer compare interrupt
  sei();

  digitalWrite(LED_PIN, HIGH);
}

void stopTimer() {
  TCCR1B = 0;
  TIMSK1 |= (0 << OCIE1A);

  digitalWrite(LED_PIN, LOW);
}

void setup() {
  Serial.begin(115200);

  pinMode(SIGNAL_PIN, OUTPUT);
  digitalWrite(SIGNAL_PIN, !POLARITY);    // set the PPM signal pin to the default state (off)
}

void processIncomingByte(const byte inByte) {
  static unsigned int input_pos = 0;
  static bool started = false;
  static char numChannel[1] = {0};
  static char channelValue[4];
  static bool channelValueStarted = false;
  int numChannelInt = 0;

  switch (inByte) {
    case 'z':
      break;

    case '^':                                   // begin data packet
      input_pos = 0;
      memset(channelValue, 0, 4);
      started = true;
      break;

    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      if (started) {
        numChannel[0] = inByte;
        started = false;
      } else if (channelValueStarted) {
        channelValue[input_pos++] = inByte;
      }

    case '#':
      channelValueStarted = true;
      break;

    case '$':                                   // end data packet
      input_pos = 0;
      numChannelInt = atoi(numChannel);
      ppm[numChannelInt] = atoi(channelValue);
      channelValueStarted = false;
      break;

    case 'p':                                   // ping
      lastReceivedPing = millis();              // pong
      Serial.write("p");
      break;

    case 'h':
      lastReceivedPing = millis();
      Serial.write("h");
      connected = true;
      break;

    case 'n':
      startTimer();
      break;

    case 'f':
      stopTimer();
      break;
  }
}

void loop() {
  while (Serial.available() > 0)
    processIncomingByte(Serial.read());

  if (millis() - lastReceivedPing > 500) {
    stopTimer();
    connected = false;
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
