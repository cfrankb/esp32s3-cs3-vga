#ifndef __COLORS_H
#define __COLORS_H
#include <stdint.h>
uint8_t rgb888torgb332(const uint8_t red, const uint8_t green, const uint8_t blue);
#define rgb332 rgb888torgb332

#define RED rgb332(0xff, 0x00, 0x00)
#define GREEN rgb332(0xff 0xff, 0x00)
#define BLUE rgb332(0x00, 0x00, 0xff)
#define BLACK 0
#define WHITE 0xff
#define GRAY rgb332(0x77, 0x77, 0x77)
#define YELLOW rgb332(0xff, 0xff, 0x00)
#define CYAN rgb332(0x00, 0xff, 0xff)
#define PURPLE rgb332(0xff, 0x00, 0xff)
#define LIME rgb332(0x40, 0xff, 0xff)
#define LIGHTGRAY rgb332(0xa9, 0xa9, 0xa9)
#endif