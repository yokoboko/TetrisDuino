#ifndef BITMAPS_H
#define BITMAPS_H

// 29x14 - pos 10 x 30
#define SPLASH_WIDTH 29
#define SPLASH_HEIGHT 14

const byte SPLASH[] PROGMEM = {0x7D,0xFF,0xFB,0xF0,0x82,0x0,0x4,0x8,0xB8,0xE3,0xF0,0xE8,0xBD,0xE7,0xF8,0xE8,0x9F,0xC7,0xF8,0xE8,0x8F,0x87,0x38,0xE8,0x47,0x7,0x38,0xE8,0x27,0x17,0x38,0xE8,0x17,0x37,0xF8,0x8,0x17,0x37,0xF8,0xE8,0x17,0x33,0xF0,0xE8,0x10,0x30,0x0,0x8,0x10,0x28,0x4,0x8,0xF,0xC7,0xFB,0xF0,};

// 1 is 2x5px; All the other are 3x5px
const byte N0[] PROGMEM = {0x0,0x40,0x40,0x40,0x0,};
const byte N1[] PROGMEM = {0x0,0x80,0x80,0x80,0x80,};
const byte N2[] PROGMEM = {0x0,0xC0,0x0,0x60,0x0,};
const byte N3[] PROGMEM = {0x0,0xC0,0x0,0xC0,0x0,};
const byte N4[] PROGMEM = {0x40,0x40,0x0,0xC0,0xC0,};
const byte N5[] PROGMEM = {0x0,0x60,0x0,0xC0,0x0,};
const byte N6[] PROGMEM = {0x0,0x60,0x0,0x40,0x0,};
const byte N7[] PROGMEM = {0x0,0xC0,0xC0,0xC0,0xC0,};
const byte N8[] PROGMEM = {0x0,0x40,0x0,0x40,0x0,};
const byte N9[] PROGMEM = {0x0,0x40,0x0,0xC0,0x0,};

// 48x84
const byte GAME_BG[] PROGMEM = {0x7F,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE6,0x6C,0xC7,0xFF,0xFF,0xFF,0xDD,0xD5,0x5F,0xFF,0xFF,0xFF,0xED,0xD4,0x47,0xFF,0xFF,0xFF,0xF5,0xD4,0xDF,0xFF,0xFF,0xFF,0xCE,0x6D,0x47,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDC,0x54,0x67,0xFF,0xFF,0xFF,0xDE,0xC5,0xDF,0xFF,0xFF,0xFF,0xDE,0xC4,0x6F,0xFF,0xFF,0xFF,0xDE,0xC5,0xF7,0xFF,0xFF,0xFF,0xC4,0x54,0x4F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x0,0x0,0x0,0x20,0x1,0xBF,0xFF,0xFF,0xFF,0xDF,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5B,0x57,0xA0,0x0,0x0,0x0,0x5B,0x57,0xA0,0x0,0x0,0x0,0x5B,0x57,0xA0,0x0,0x0,0x0,0x59,0xB3,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xA0,0x0,0x0,0x0,0x5F,0xFF,0xBF,0xFF,0xFF,0xFF,0xDF,0xFF,0xC0,0x0,0x0,0x0,0x3F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFE,};

// 6x12
const byte I[] PROGMEM = {0xE0,0xE8,0xE0,0xE0,0xE8,0xE0,0xE0,0xE8,0xE0,0xE0,0xE8,0xE0,};
// 8x9
const byte J[] PROGMEM = {0xF8,0xFA,0xF8,0xF8,0xFA,0xF8,0xC0,0xD2,0xC0,};
// 8x9
const byte L[] PROGMEM = {0xC7,0xD7,0xC7,0xC7,0xD7,0xC7,0xC0,0xD2,0xC0,};
// 8x6
const byte O[] PROGMEM = {0xC0,0xD2,0xC0,0xC0,0xD2,0xC0,};
// 9x6
const byte S[] PROGMEM = {0xE0,0x0,0xE9,0x0,0xE0,0x0,0x3,0x80,0x4B,0x80,0x3,0x80,};
// 9x6
const byte T[] PROGMEM = {0xE3,0x80,0xEB,0x80,0xE3,0x80,0x0,0x0,0x49,0x0,0x0,0x0,};
// 9x6
const byte Z[] PROGMEM = {0x3,0x80,0x4B,0x80,0x3,0x80,0xE0,0x0,0xE9,0x0,0xE0,0x0,};
// 3x3
const byte MINO[] PROGMEM = {0xE0,0xA0,0xE0,};
// 32x62
const byte GAME_OVER[] PROGMEM = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x0,0x0,0xFF,0xFD,0xFF,0xFF,0x7F,0xFB,0xFF,0xFF,0xBF,0xFB,0x9B,0x51,0xBF,0xFB,0x75,0x17,0xBF,0xFB,0x51,0x53,0xBF,0xFB,0x55,0x57,0xBF,0xFB,0xB5,0x51,0xBF,0xFB,0xFF,0xFF,0xBF,0xFB,0xB5,0x13,0xBF,0xFB,0x55,0x75,0xBF,0xFB,0x55,0x31,0xBF,0xFB,0x5B,0x73,0xBF,0xFB,0xBB,0x15,0xBF,0xFB,0xFF,0xFF,0xBF,0xFD,0xFF,0xFF,0x7F,0xFE,0x0,0x0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xF2,0x7F,0xFF,0xFF,0xE6,0xBF,0xFF,0xFF,0xC4,0x9F,0xFF,0xFF,0x89,0xF,0xFF,0xFF,0x19,0x27,0xFF,0xFE,0x32,0x33,0xFF,0xFC,0x62,0x19,0xF7,0xF8,0xE6,0x1C,0xE3,0xF9,0xE6,0x1E,0x41,0xF1,0xC6,0xE,0x41,0xF3,0x86,0xF,0x23,0xF3,0x8F,0xF,0x37,0xF3,0x8F,0x8F,0x37,0xF3,0x8F,0xC7,0x37,0xD3,0x8F,0xC7,0x77,0xD9,0xC7,0xC6,0xF7,0xD9,0xC7,0xC6,0xF7,0xD6,0xE3,0xCD,0xE3,0x82,0x71,0xEB,0x41,};
// 30x11
const byte GAME_PAUSE[] PROGMEM = {0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFC,0xFC,0xED,0x64,0x7C,0xFD,0x55,0x5D,0xFC,0xFC,0xC5,0x6C,0xFC,0xFD,0xD5,0x75,0xFC,0xFD,0xD4,0x4C,0x7C,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFC,};
// 48x84
const byte HOME[] PROGMEM = {0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x4,0x20,0x40,0x90,0x3F,0xFE,0x4,0x20,0x40,0x90,0x3F,0xFF,0x9C,0xF9,0xCC,0x91,0xFF,0xFF,0x9C,0x79,0xCC,0x90,0x3F,0xFF,0x9C,0xF9,0xC1,0x9E,0x3F,0xFF,0x9C,0x39,0xC0,0x90,0x3F,0xFF,0x9C,0x39,0xCC,0x90,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,0x3F,0xFF,0xFF,0xFF,0xFF,0xF0,0x3F,0xFF,0xFF,0xFF,0xFF,0xF0,0x3F,0xFF,0xFF,0xFF,0xFF,0xF0,0x3F,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xEF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xEF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xF2,0x3F,0xFF,0xFF,0xFF,0xFF,0xE2,0x9F,0xFF,0xFF,0xFF,0xFF,0xC6,0xCF,0xFF,0xFF,0xFF,0xFF,0x84,0xC7,0xFF,0xFF,0xFF,0xFF,0xC,0xC3,0xF7,0xFF,0xFF,0xFE,0x19,0x89,0xE3,0xFF,0xFF,0xFC,0x39,0x8C,0xF7,0xFF,0xFF,0xF8,0x71,0x8E,0x7F,0xFF,0xFF,0xF0,0xE3,0xF,0x3F,0xFF,0xFF,0xE1,0xE3,0x7,0x9F,0xE7,0xFF,0xC3,0xC3,0x7,0xCF,0xC3,0xFF,0x87,0xC7,0x7,0xE7,0xC3,0xFF,0x8F,0x87,0x7,0xF7,0x81,0xFF,0x1F,0xF,0x7,0xF3,0x81,0xFF,0x1F,0xF,0x3,0xFB,0x81,0xFE,0x3E,0xF,0x3,0xF9,0xC3,0xF6,0x3E,0x1F,0x1,0xF9,0xE7,0xFE,0x3E,0x1F,0x81,0xF9,0xE7,0xFE,0x3E,0x1F,0xC1,0xF9,0xE7,0xFE,0x3E,0x1F,0xC0,0xF9,0xE7,0xF6,0x3E,0x1F,0xE0,0xF9,0xE7,0xEB,0x3E,0x1F,0xE0,0xFB,0xE7,0xF7,0x3E,0x1F,0xE0,0xF3,0xE7,0xF7,0x9F,0xF,0xF0,0xF6,0xC3,0xF7,0x8F,0x7,0xF0,0xE4,0x43,0x63,0xC7,0x87,0xF1,0xCE,0x81,0x63,0x67,0xC3,0xF1,0x92,0x0,0x22,0x33,0xE1,0xF9,0x32,0x0,};

#endif