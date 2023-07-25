/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 * 
 * Renzo Mischianti - Electronic, 3D printing and embedded programming
 * IMAGES TO BYTE ARRAY ONLINE CONVERTER (CPP, ARDUINO)
 * https://mischianti.org/images-to-byte-array-online-converter-cpp-arduino/
 *
 * This bitmap from the file 'voxelab-500.png'
 */
#pragma once
#include <Wire.h>

// #define CUSTOM_BOOTSCREEN_ANIMATED     // only Voxelab supported
#define CUSTOM_BOOTSCREEN_FRAME_TIME 500  // (ms)

#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT  64

#if !defined(CUSTOM_BOOTSCREEN_ANIMATED)
//*/ if machine is Voxelab Aquila add ( / ) to first in line and remove ( / ) from next block
const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000001,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00011111,B11111110,B00000000,B00011100,B00000011,B10000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B11100000,B00000000,
  B00000000,B00111111,B11111111,B10000000,B00011100,B00000011,B10000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B11100000,B00000000,
  B00000000,B11111111,B11111111,B11100000,B00011110,B00000111,B10000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B11100000,B00000000,
  B00000000,B11111111,B11111111,B11100000,B00001110,B00000111,B10000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B11100000,B00000000,
  B00000000,B00111111,B11111111,B10000000,B00001110,B00000111,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B11100000,B00000000,
  B00000000,B00001111,B11111110,B00000000,B00001111,B00001111,B00001111,B11000001,B11100011,B11000001,B11110000,B00011100,B00001111,B11111000,B11111111,B10000000,
  B00000000,B00001111,B11111110,B00000000,B00000111,B00001111,B00011111,B11110000,B11100011,B10000111,B11111100,B00011100,B00111111,B11111000,B11111111,B11100000,
  B00000001,B00000111,B11111100,B00010000,B00000111,B00001110,B00111111,B11111000,B01110111,B00001111,B11111110,B00011100,B00111111,B11111000,B11111111,B11100000,
  B00000001,B00000111,B11111100,B00110000,B00000111,B10011110,B00111000,B00111000,B01111111,B00001110,B00001110,B00011100,B01110000,B01111000,B11110000,B01110000,
  B00000001,B10000011,B11111000,B00110000,B00000011,B10011100,B00110000,B00011100,B00111110,B00011110,B00001110,B00011100,B01110000,B00111000,B11100000,B01110000,
  B00000001,B10000011,B11111000,B01110000,B00000011,B10011100,B01110000,B00011100,B00011110,B00011111,B11111111,B00011100,B01100000,B00111000,B11100000,B00111000,
  B00000001,B11000001,B11110000,B01110000,B00000011,B11111100,B01110000,B00011100,B00111110,B00011111,B11111111,B00011100,B01100000,B00111000,B11100000,B00110000,
  B00000001,B11000001,B11110000,B01110000,B00000001,B11111000,B00110000,B00011100,B00111110,B00011110,B00000000,B00011100,B01110000,B00111000,B11100000,B01110000,
  B00000001,B11100000,B11100000,B11110000,B00000001,B11111000,B00111000,B00111000,B01111111,B00001110,B00000000,B00011100,B01111000,B01111000,B11110000,B11110000,
  B00000001,B11100000,B11100000,B11110000,B00000001,B11111000,B00111111,B11110000,B11110111,B10001111,B11111100,B00011100,B00111111,B11111000,B11111111,B11100000,
  B00000001,B11110000,B11000001,B11110000,B00000000,B11110000,B00011111,B11110000,B11100011,B11000111,B11111100,B00011100,B00011111,B11111000,B11111111,B11100000,
  B00000000,B11110000,B01000001,B11100000,B00000000,B11110000,B00000111,B11000001,B11000001,B11000001,B11110000,B00011100,B00001111,B10111000,B11101111,B10000000,
  B00000000,B00111000,B00000011,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00011000,B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};
//*/
// ----------------------------------------------------------------
/*/ if machine is Ender add ( / ) to first in line and remove ( / ) from previous block
const unsigned char custom_start_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0x1e,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x01,0x87,0xff,0xff,0xfc,0x22,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x01,0x00,0x7f,0x81,0xff,0xfe,0x11,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x01,0x82,0x30,0x03,0xff,0xff,0x08,0x80,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x71,0xf9,0xff,0xff,0xff,0x84,0x40,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x3f,0xff,0xff,0xff,0xff,0x82,0x20,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0xfe,0x01,0xff,0xff,0xc1,0x18,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xfc,0xe0,0x8c,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xfe,0x70,0x7e,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xff,0xff,0x7c,0x06,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x03,0xff,0xff,0x0f,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x1f,0xf0,0x00,0x3f,0xff,0xff,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x01,0xfc,0x00,0x00,0x3f,0xff,0xff,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xf8,0x3f,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xf8,0x1f,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xf8,0x0e,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xf8,0x06,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x06,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x06,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x40,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x81,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x71,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xff,0xff,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x7f,0xff,0x80,0x00,0x00,0x1f,0x80,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x3c,0x03,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x3c,0x03,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x78,0x02,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xf0,0x18,0x0c,0xf0,0x03,0xdc,0x03,0xc0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xf0,0x10,0x7f,0xf8,0x0f,0xfc,0x0f,0xe1,0xff,0x80,0x00,0x00,
  0x00,0x00,0x00,0x01,0xe0,0x30,0x7e,0x78,0x38,0x78,0x38,0xf3,0xff,0x80,0x00,0x00,
  0x00,0x00,0x00,0x01,0xff,0xe0,0x38,0x38,0x70,0x38,0x60,0xf0,0xf3,0x00,0x00,0x00,
  0x00,0x00,0x00,0x01,0xff,0xe0,0x78,0x70,0xe0,0x70,0xe0,0xf0,0xe0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0xc0,0x60,0x70,0x70,0xe0,0x71,0xff,0xe1,0xc0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0x80,0xc0,0xf0,0xe1,0xc0,0xe1,0xc0,0x01,0xc0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x07,0x80,0x00,0xe0,0xe3,0xc0,0xe3,0x80,0x03,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x07,0x00,0x00,0xe1,0xe3,0x81,0xe3,0x80,0x03,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0f,0x00,0x31,0xc1,0xc3,0x81,0xc3,0x80,0x47,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0f,0x00,0x61,0xc3,0xc7,0x83,0xc7,0x81,0x87,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x1e,0x00,0xc3,0x83,0x87,0x83,0x87,0xc3,0x0e,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x1e,0x07,0xc7,0x87,0x87,0xef,0xe7,0xfe,0x0e,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0xff,0xff,0x9f,0xdf,0xc3,0xff,0x83,0xf8,0x7f,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xe0,0x01,0xe0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
//*/
// ----------------------------------------------------------------

#else

const unsigned char custom_start_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x01,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,0x00,0x00,
  0x00,0x03,0xFF,0xE0,0x0E,0x03,0x80,0x00,0x00,0x00,0x01,0xC0,0x00,0x38,0x00,0x00,
  0x00,0x0F,0xFF,0xF8,0x0F,0x07,0x80,0x00,0x00,0x00,0x01,0xC0,0x00,0x38,0x00,0x00,
  0x00,0x0F,0xFF,0xF8,0x07,0x07,0x80,0x00,0x00,0x00,0x01,0xC0,0x00,0x38,0x00,0x00,
  0x00,0x07,0xFF,0xF0,0x07,0x07,0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x38,0x00,0x00,
  0x00,0x01,0xFF,0xC0,0x07,0x8F,0x0F,0xC3,0x03,0x0F,0x81,0xC1,0xFC,0x3F,0xE0,0x00,
  0x00,0x10,0xFF,0x84,0x03,0x8E,0x1F,0xE3,0x87,0x3F,0xE1,0xC3,0xFE,0x3F,0xF0,0x00,
  0x00,0x10,0xFF,0x84,0x03,0x8E,0x3C,0xF1,0xCE,0x3C,0xE1,0xC7,0x9E,0x3E,0x78,0x00,
  0x00,0x18,0x7F,0x0C,0x03,0xDE,0x38,0x70,0xFC,0x70,0x71,0xC7,0x0E,0x3C,0x3C,0x00,
  0x00,0x18,0x7F,0x0C,0x01,0xDC,0x70,0x38,0x78,0x78,0x71,0xCE,0x06,0x38,0x1C,0x00,
  0x00,0x1C,0x3E,0x1C,0x01,0xDC,0x70,0x38,0x30,0x7F,0xF1,0xCE,0x06,0x38,0x1C,0x00,
  0x00,0x1C,0x3E,0x1C,0x01,0xFC,0x70,0x38,0x78,0x7F,0xF1,0xCE,0x06,0x38,0x1C,0x00,
  0x00,0x1E,0x1C,0x3C,0x00,0xF8,0x38,0x70,0xFC,0x70,0x01,0xC7,0x0E,0x3C,0x3C,0x00,
  0x00,0x1E,0x1C,0x3C,0x00,0xF8,0x3C,0xF1,0xCE,0x38,0xE1,0xC7,0x9E,0x3E,0x78,0x00,
  0x00,0x1F,0x08,0x7C,0x00,0x70,0x1F,0xE3,0x87,0x3F,0xE1,0xC3,0xFE,0x3F,0xF0,0x00,
  0x00,0x0F,0x00,0x78,0x00,0x70,0x0F,0xC3,0x03,0x0F,0x81,0xC1,0xE6,0x3F,0xE0,0x00,
  0x00,0x07,0x80,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x01,0x80,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

// ----------------------------------------------------------------

const unsigned char custom_start_bmp1[] PROGMEM = {
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xe3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xfe,0x00,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x3f,0xff,0xff,0xff,0xff,
  0xff,0xfc,0x00,0x1f,0xf1,0xfc,0x7f,0xff,0xff,0xff,0xfe,0x3f,0xff,0xc7,0xff,0xff,
  0xff,0xf0,0x00,0x07,0xf0,0xf8,0x7f,0xff,0xff,0xff,0xfe,0x3f,0xff,0xc7,0xff,0xff,
  0xff,0xf0,0x00,0x07,0xf8,0xf8,0x7f,0xff,0xff,0xff,0xfe,0x3f,0xff,0xc7,0xff,0xff,
  0xff,0xf8,0x00,0x0f,0xf8,0xf8,0xff,0xff,0xff,0xff,0xfe,0x3f,0xff,0xc7,0xff,0xff,
  0xff,0xfe,0x00,0x3f,0xf8,0x70,0xf0,0x3c,0xfc,0xf0,0x7e,0x3e,0x03,0xc0,0x1f,0xff,
  0xff,0xef,0x00,0x7b,0xfc,0x71,0xe0,0x1c,0x78,0xc0,0x1e,0x3c,0x01,0xc0,0x0f,0xff,
  0xff,0xef,0x00,0x7b,0xfc,0x71,0xc3,0x0e,0x31,0xc3,0x1e,0x38,0x61,0xc1,0x87,0xff,
  0xff,0xe7,0x80,0xf3,0xfc,0x21,0xc7,0x8f,0x03,0x8f,0x8e,0x38,0xf1,0xc3,0xc3,0xff,
  0xff,0xe7,0x80,0xf3,0xfe,0x23,0x8f,0xc7,0x87,0x87,0x8e,0x31,0xf9,0xc7,0xe3,0xff,
  0xff,0xe3,0xc1,0xe3,0xfe,0x23,0x8f,0xc7,0xcf,0x80,0x0e,0x31,0xf9,0xc7,0xe3,0xff,
  0xff,0xe3,0xc1,0xe3,0xfe,0x03,0x8f,0xc7,0x87,0x80,0x0e,0x31,0xf9,0xc7,0xe3,0xff,
  0xff,0xe1,0xe3,0xc3,0xff,0x07,0xc7,0x8f,0x03,0x8f,0xfe,0x38,0xf1,0xc3,0xc3,0xff,
  0xff,0xe1,0xe3,0xc3,0xff,0x07,0xc3,0x0e,0x31,0xc7,0x1e,0x38,0x61,0xc1,0x87,0xff,
  0xff,0xe0,0xf7,0x83,0xff,0x8f,0xe0,0x1c,0x78,0xc0,0x1e,0x3c,0x01,0xc0,0x0f,0xff,
  0xff,0xf0,0xff,0x87,0xff,0x8f,0xf0,0x3c,0xfc,0xf0,0x7e,0x3e,0x19,0xc0,0x1f,0xff,
  0xff,0xf8,0x7f,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xfe,0x7f,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
};

// ----------------------------------------------------------------

const unsigned char custom_start_bmp2[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x01,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,0x00,0x00,
  0x00,0x03,0xFF,0xE0,0x0E,0x03,0x80,0x00,0x00,0x00,0x01,0xC0,0x00,0x38,0x00,0x00,
  0x00,0x0F,0xFF,0xF8,0x0F,0x07,0x80,0x00,0x00,0x00,0x01,0xC0,0x00,0x38,0x00,0x00,
  0x00,0x0F,0xFF,0xF8,0x07,0x07,0x80,0x00,0x00,0x00,0x01,0xC0,0x00,0x38,0x00,0x00,
  0x00,0x07,0xFF,0xF0,0x07,0x07,0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x38,0x00,0x00,
  0x00,0x01,0xFF,0xC0,0x07,0x8F,0x0F,0xC3,0x03,0x0F,0x81,0xC1,0xFC,0x3F,0xE0,0x00,
  0x00,0x10,0xFF,0x84,0x03,0x8E,0x1F,0xE3,0x87,0x3F,0xE1,0xC3,0xFE,0x3F,0xF0,0x00,
  0x00,0x10,0xFF,0x84,0x03,0x8E,0x3C,0xF1,0xCE,0x3C,0xE1,0xC7,0x9E,0x3E,0x78,0x00,
  0x00,0x18,0x7F,0x0C,0x03,0xDE,0x38,0x70,0xFC,0x70,0x71,0xC7,0x0E,0x3C,0x3C,0x00,
  0x00,0x18,0x7F,0x0C,0x01,0xDC,0x70,0x38,0x78,0x78,0x71,0xCE,0x06,0x38,0x1C,0x00,
  0x00,0x1C,0x3E,0x1C,0x01,0xDC,0x70,0x38,0x30,0x7F,0xF1,0xCE,0x06,0x38,0x1C,0x00,
  0x00,0x1C,0x3E,0x1C,0x01,0xFC,0x70,0x38,0x78,0x7F,0xF1,0xCE,0x06,0x38,0x1C,0x00,
  0x00,0x1E,0x1C,0x3C,0x00,0xF8,0x38,0x70,0xFC,0x70,0x01,0xC7,0x0E,0x3C,0x3C,0x00,
  0x00,0x1E,0x1C,0x3C,0x00,0xF8,0x3C,0xF1,0xCE,0x38,0xE1,0xC7,0x9E,0x3E,0x78,0x00,
  0x00,0x1F,0x08,0x7C,0x00,0x70,0x1F,0xE3,0x87,0x3F,0xE1,0xC3,0xFE,0x3F,0xF0,0x00,
  0x00,0x0F,0x00,0x78,0x00,0x70,0x0F,0xC3,0x03,0x0F,0x81,0xC1,0xE6,0x3F,0xE0,0x00,
  0x00,0x07,0x80,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x01,0x80,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

// ----------------------------------------------------------------

const unsigned char * const custom_bootscreen_animation[] PROGMEM = {
  custom_start_bmp, custom_start_bmp1, custom_start_bmp2 //, custom_start_bmp3, custom_start_bmp4, custom_start_bmp5, custom_start_bmp6, custom_start_bmp7, custom_start_bmp8, custom_start_bmp9, custom_start_bmp10, custom_start_bmp11, custom_start_bmp12, custom_start_bmp13, custom_start_bmp14
};

#endif