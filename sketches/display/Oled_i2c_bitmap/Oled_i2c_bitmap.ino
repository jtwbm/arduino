// OLED I2C - Adruino UNO
// GND      - GND
// VCC      - 5V
// SCL      - A5
// SDA      - A4

// https://github.com/jlegas/OLED_I2C
#include "OLED_I2C.h"

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

OLED  myOLED(SDA, SCL, 8);

// #include "bg.c"
// const unsigned char* bgFrames[8] = {
// 	bg001,
// 	bg002,
// 	bg003,
// 	bg004,
// 	bg005,
// 	bg006,
// 	bg007,
// 	bg008
// };

#include "car_animation.c"
const unsigned char* carFrames[10] = {
	car001,
	car002,
	car003,
	car004,
	car005,
	car006,
	car007,
	car008,
  car009,
  car010
};

void setup() {
  myOLED.begin();
}

void loop() {
  // myOLED.invert(true);

  // for (int i = 0; i < 8; i++) {
  //   myOLED.clrScr();
  //   myOLED.drawBitmap(0, 0, bgFrames[i], 128, 64);
  //   myOLED.update();
  //   delay(50);
  // }

  for (int i = 0; i < 10; i++) {
    myOLED.clrScr();
    myOLED.drawBitmap(0, 0, carFrames[i], 128, 64);
    myOLED.update();
    delay(50);
  }
}
