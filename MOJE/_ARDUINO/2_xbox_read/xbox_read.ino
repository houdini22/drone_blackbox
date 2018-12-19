#include "LiquidCrystal_I2C.h"
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);
const unsigned int MAX_INPUT = 50;

void setup() {
    Serial.begin(115200);
    
    lcd.begin();
    lcd.backlight();
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("---");

    lcd.setCursor(0, 1);
    lcd.print("---");

    lcd.setCursor(0, 2);
    lcd.print("---");

    lcd.setCursor(0, 3);
    lcd.print("---");

    Serial.write("r");
}

void processData(const char *data) {
    String str(data);

    int index1 = str.indexOf(' ');
    int index2 = str.indexOf(' ', index1 + 1);
    int index3 = str.indexOf(' ', index2 + 1);

    int firstValue = str.substring(0, index1).toInt();
    int secondValue = str.substring(index1 + 1, index2).toInt();
    int thirdValue = str.substring(index2 + 1, index3).toInt();
    int fourthValue = str.substring(index3 + 1, str.length()).toInt();

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print(firstValue);

    lcd.setCursor(0, 1);
    lcd.print(secondValue);

    lcd.setCursor(0, 2);
    lcd.print(thirdValue);

    lcd.setCursor(0, 3);
    lcd.print(fourthValue);
}

void processIncomingByte(const byte inByte) {
    static char input_line[MAX_INPUT];
    static unsigned int input_pos = 0;
    static bool started = false;

    switch (inByte) {
        case '^': // begin data packet
            input_pos = 0;
            memset(input_line, 0, MAX_INPUT);
            started = true;
            break;

        case '$': // end data packet
            input_line[input_pos] = 0;
            input_pos = 0;
            if (started) { // make sure if full packet
                processData(input_line);
                started = false;
            }            
            break;

        case 'p': // ping
          Serial.write("p"); // pong
          break;

        default: // append to data packet
            if (started && input_pos < (MAX_INPUT - 1))
                input_line[input_pos++] = inByte;
            break;
    }
}

void loop() {
  while (Serial.available() > 0)
    processIncomingByte(Serial.read());

  delay(10);
}

