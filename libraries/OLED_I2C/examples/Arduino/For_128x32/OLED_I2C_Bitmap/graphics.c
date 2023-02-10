#include <avr/pgmspace.h>

const uint8_t logo[] PROGMEM={
0x00, 0x80, 0x80, 0x80, 0xF8, 0x88, 0x88, 0x88, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x08, 0x08, 0xF8,   // 0x0010 (16) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xFF, 0xFF, 0x63, 0x21, 0x61, 0xE3,   // 0x0020 (32) pixels
0x9E, 0x1E, 0x00, 0x00, 0x00, 0x10, 0xF7, 0xF3, 0x00, 0x00, 0x00, 0x10, 0xF8, 0xF0, 0x10, 0x10,   // 0x0030 (48) pixels
0x18, 0xF0, 0xE0, 0x00, 0x00, 0x01, 0x03, 0xFF, 0x80, 0x80, 0xD0, 0x30, 0x10, 0x10, 0x00, 0x20,   // 0x0040 (64) pixels
0xF0, 0xF0, 0x00, 0x00, 0xF0, 0x30, 0x00, 0x80, 0x80, 0xC0, 0x80, 0x01, 0x03, 0xFF, 0xFF, 0x01,   // 0x0050 (80) pixels
0x01, 0x01, 0x01, 0x06, 0xFE, 0xF8, 0x60, 0x00, 0x00, 0x10, 0xF7, 0xF3, 0x00, 0x00, 0x00, 0x10,   // 0x0060 (96) pixels
0xF8, 0xF0, 0x10, 0x10, 0x18, 0xF0, 0xE0, 0x00, 0x00, 0x01, 0x03, 0xFF, 0x80, 0x80, 0xD0, 0x30,   // 0x0070 (112) pixels
0x10, 0x10, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x08, 0x08, 0x88,   // 0x0080 (128) pixels
0x68, 0x1F, 0x68, 0x88, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08,   // 0x0090 (144) pixels
0x00, 0x03, 0x0F, 0x0E, 0x0C, 0x04, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00, 0x08, 0x0F, 0x0F,   // 0x00A0 (160) pixels
0x00, 0x00, 0x08, 0x0F, 0x0D, 0x08, 0x00, 0x08, 0x0C, 0x0F, 0x09, 0x09, 0x0B, 0x0E, 0x0C, 0x08,   // 0x00B0 (176) pixels
0x00, 0xC0, 0x80, 0xC7, 0x3C, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0C, 0x0F,   // 0x00C0 (192) pixels
0x0F, 0x08, 0x08, 0x08, 0x08, 0x0C, 0x07, 0x03, 0x00, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00,   // 0x00D0 (208) pixels
0x00, 0x08, 0x0F, 0x0F, 0x00, 0x00, 0x08, 0x0F, 0x0D, 0x08, 0x00, 0x08, 0x0C, 0x0F, 0x09, 0x09,   // 0x00E0 (224) pixels
0x0B, 0x0E, 0x0C, 0x08, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x38,   // 0x00F0 (240) pixels
0x26, 0x21, 0x20, 0xE0, 0x20, 0x21, 0x26, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18,   // 0x0100 (256) pixels
0xF8, 0xF8, 0x18, 0x08, 0xC8, 0x08, 0x38, 0xF8, 0x00, 0x00, 0x18, 0xF8, 0x38, 0x00, 0x00, 0x80,   // 0x0110 (272) pixels
0xC0, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0xC0, 0xC0,   // 0x0120 (288) pixels
0xF0, 0xC0, 0xC0, 0x01, 0x01, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,   // 0x0130 (304) pixels
0xC0, 0x80, 0x80, 0x00, 0x00, 0x80, 0xC0, 0x80, 0x80, 0x80, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00,   // 0x0140 (320) pixels
0x80, 0xB8, 0x98, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x40,   // 0x0150 (336) pixels
0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x1F, 0x11, 0x11, 0x11, 0x10, 0x10,   // 0x0160 (352) pixels
0xF0, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0170 (368) pixels
0x40, 0x60, 0x7F, 0x7F, 0x41, 0x43, 0x47, 0x40, 0x60, 0x78, 0x08, 0x00, 0x40, 0x7F, 0x7F, 0x40,   // 0x0180 (384) pixels
0x0E, 0x3F, 0x64, 0x44, 0x44, 0x67, 0x37, 0x00, 0x00, 0x3E, 0x7F, 0x40, 0xC0, 0x47, 0x77, 0x20,   // 0x0190 (400) pixels
0x00, 0x3E, 0xFF, 0x40, 0x40, 0x30, 0x00, 0x61, 0x7F, 0x41, 0x01, 0x01, 0x01, 0x00, 0x00, 0x1E,   // 0x01A0 (416) pixels
0x3F, 0x41, 0x40, 0x40, 0x61, 0x3F, 0x0E, 0x40, 0x7F, 0x7F, 0x00, 0x00, 0x40, 0x7F, 0x6F, 0x40,   // 0x01B0 (432) pixels
0x00, 0x00, 0x40, 0x7F, 0x7F, 0x40, 0x00, 0x3E, 0x7F, 0x40, 0xC0, 0x47, 0x77, 0x20, 0x00, 0xF7,   // 0x01C0 (448) pixels
0x46, 0x8C, 0x8C, 0x5D, 0x38, 0x00, 0x00, 0x00, 
};

const uint8_t mice[] PROGMEM={
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x0F, 0x07, 0x03, 0x03, 0x03, 0x03,   // 0x0010 (16) pixels
0x07, 0x07, 0x0F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0020 (32) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xF3, 0xFB, 0xFB, 0xF7, 0xCF, 0x7F,   // 0x0030 (48) pixels
0xFF, 0x3F, 0x5F, 0xA7, 0xD7, 0xFB, 0xFB, 0x1B, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0040 (64) pixels
0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3F, 0x7F, 0xFC, 0xF8, 0x70, 0x10, 0x00, 0x00, 0x00,   // 0x0050 (80) pixels
0x00, 0x00, 0xE0, 0xF4, 0xF7, 0xFF, 0xEF, 0x9F, 0xBF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0060 (96) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x01, 0x00, 0x00, 0x00, 0x7C, 0x7F, 0x3F, 0xBF, 0xDF, 0x5D, 0x40,   // 0x0070 (112) pixels
0x9E, 0x00, 0x1B, 0xFD, 0x3F, 0x7F, 0x7C, 0x01, 0x01, 0x01, 0x03, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0080 (128) pixels
0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0xE0, 0xE0, 0xE0, 0x60,   // 0x0090 (144) pixels
0x60, 0x60, 0xCF, 0xFF, 0xFF, 0xFF, 0xE0, 0xDC, 0xE7, 0xD9, 0xE0, 0x87, 0x03, 0x01, 0x81, 0xFF,   // 0x00A0 (160) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0x02, 0x80, 0xC0, 0x7F, 0xFF, 0xFF, 0xF0, 0x06,   // 0x00B0 (176) pixels
0x0B, 0x06, 0x00, 0xFF, 0x7F, 0x60, 0xE0, 0x04, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x00C0 (192) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFC, 0xFB, 0xF7, 0xF7, 0xFF,   // 0x00D0 (208) pixels
0xED, 0xEF, 0xE7, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xFF, 0xF7, 0xFB, 0xFE, 0xFF, 0xFF,   // 0x00E0 (224) pixels
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFD, 0xFB, 0xFA, 0xF5, 0xE9, 0xE3, 0xCB,   // 0x00F0 (240) pixels
0xCB, 0xEB, 0xE9, 0xF6, 0xF7, 0xFB, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0100 (256) pixels
};

