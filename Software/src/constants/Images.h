#ifndef OSSM_SOFTWARE_IMAGES_H
#define OSSM_SOFTWARE_IMAGES_H

#include <EEPROM.h>

namespace Images {
    // PROGMEM LOGO
    const unsigned char RDLogo[] PROGMEM = {
        0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x07, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xfe, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00,
        0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
        0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x80,
        0xff, 0xff, 0x7f, 0x00, 0x00, 0xfc, 0xff, 0x87, 0xff, 0xff, 0xff, 0x00,
        0x00, 0xfc, 0xff, 0x87, 0xff, 0xff, 0xff, 0x01, 0x00, 0xfc, 0xff, 0x87,
        0xff, 0xff, 0xff, 0x01, 0x00, 0xfc, 0xff, 0x87, 0xff, 0xff, 0xff, 0x01,
        0x00, 0xfc, 0xff, 0x83, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xc0,
        0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x00,
        0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x7f, 0x00, 0x20, 0xfc, 0xff, 0xe0,
        0xff, 0xff, 0x7f, 0x00, 0x20, 0xfc, 0xff, 0xe1, 0xff, 0xff, 0x7f, 0x00,
        0x20, 0xfc, 0xff, 0xc1, 0xff, 0xff, 0x7f, 0x00, 0x30, 0xfc, 0xff, 0xc3,
        0xff, 0xff, 0x3f, 0x00, 0x30, 0xfc, 0xff, 0x83, 0xff, 0xff, 0x3f, 0x00,
        0x30, 0xfc, 0xff, 0x07, 0x00, 0x00, 0x3f, 0x00, 0xf0, 0xff, 0xff, 0x07,
        0x00, 0x00, 0x3c, 0x00, 0xf8, 0xff, 0xff, 0x07, 0x00, 0x00, 0x38, 0x00,
        0xf8, 0xff, 0xff, 0x07, 0x00, 0x00, 0x18, 0x00, 0xf8, 0xff, 0xff, 0x87,
        0xff, 0xff, 0x18, 0x00, 0xf8, 0xff, 0xff, 0x87, 0xff, 0xff, 0x10, 0x00,
        0xf8, 0xff, 0xff, 0x87, 0xff, 0xff, 0x10, 0x00, 0xfc, 0xff, 0xff, 0x87,
        0xff, 0xff, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x87, 0xff, 0xff, 0x00, 0x00,
        0xfc, 0xff, 0xff, 0x87, 0xff, 0xff, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x87,
        0xff, 0xff, 0x00, 0x00, 0xfe, 0xff, 0xc7, 0x87, 0xff, 0xff, 0x00, 0x00,
        0xfe, 0xff, 0xc7, 0x87, 0xff, 0xff, 0x00, 0x00, 0xfe, 0xff, 0x01, 0x87,
        0xff, 0xff, 0x00, 0x00, 0xfc, 0xff, 0x01, 0x87, 0xff, 0x7f, 0x00, 0x00,
        0xfc, 0xff, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xc7, 0x07,
        0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc7, 0x07, 0x00, 0x00, 0x02, 0x00,
        0x00, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x03, 0x00,
        0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0xe0,
        0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x01, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x7c, 0x00, 0x00};

    const unsigned char KMLogo[] PROGMEM = {
        0x00, 0xf0, 0xff, 0x7f, 0x00, 0x1f, 0x00, 0x18, 0xf0, 0xff, 0x3f, 0x80,
        0x7f, 0x00, 0x1c, 0xf0, 0xff, 0x1f, 0xc0, 0xff, 0x00, 0x1e, 0xf0, 0xff,
        0x0f, 0xe0, 0xff, 0x01, 0x1e, 0xf0, 0xff, 0x07, 0xf8, 0xff, 0x01, 0x1f,
        0xf0, 0xff, 0x03, 0xfc, 0xff, 0x03, 0x1f, 0xf0, 0xff, 0x01, 0xfe, 0xff,
        0x03, 0x1f, 0xf0, 0xff, 0x00, 0xff, 0xff, 0x03, 0x1f, 0xf0, 0x7f, 0x80,
        0xff, 0xff, 0x03, 0x1f, 0xf0, 0x3f, 0xc0, 0xff, 0xff, 0x03, 0x1f, 0xf0,
        0x0f, 0xe0, 0xff, 0xff, 0x03, 0x1f, 0xf0, 0x07, 0xc0, 0xff, 0x83, 0x03,
        0x1f, 0xf0, 0x03, 0xc0, 0xff, 0x81, 0x03, 0x1f, 0xf0, 0x01, 0x80, 0xff,
        0x81, 0x03, 0x1f, 0xf0, 0x00, 0x80, 0xff, 0x81, 0x03, 0x1f, 0x70, 0x00,
        0x81, 0xff, 0x80, 0x03, 0x1f, 0x30, 0x80, 0x01, 0xff, 0x80, 0x03, 0x1f,
        0x10, 0xc0, 0x11, 0x7f, 0x80, 0x03, 0x1f, 0x00, 0xe0, 0x11, 0x7e, 0x84,
        0x03, 0x1f, 0x00, 0xf8, 0x31, 0x7e, 0x84, 0x03, 0x1f, 0x00, 0xfc, 0x31,
        0x3e, 0x84, 0x03, 0x1f, 0x00, 0xfc, 0x31, 0x3c, 0x86, 0x03, 0x1f, 0x00,
        0xf8, 0x71, 0x3c, 0x86, 0x03, 0x1f, 0x00, 0xf0, 0x71, 0x1c, 0x86, 0x03,
        0x1f, 0x00, 0xe0, 0x71, 0x18, 0x87, 0x03, 0x1f, 0x10, 0xc0, 0xf1, 0x08,
        0x87, 0x03, 0x1f, 0x30, 0x80, 0xf1, 0x80, 0x87, 0x03, 0x1f, 0x70, 0x00,
        0xf1, 0x81, 0x87, 0x03, 0x1f, 0xf0, 0x00, 0xf0, 0x81, 0x87, 0x03, 0x1f,
        0xf0, 0x01, 0xf0, 0xc1, 0x87, 0x03, 0x1f, 0xf0, 0x03, 0xf0, 0xc3, 0x87,
        0x03, 0x1f, 0xf0, 0x07, 0xf0, 0xff, 0x87, 0x03, 0x1f, 0xf0, 0x0f, 0xe0,
        0xff, 0x87, 0x03, 0x1f, 0xf0, 0x1f, 0xc0, 0xff, 0x87, 0x03, 0x1f, 0xf0,
        0x3f, 0x80, 0xff, 0x87, 0x03, 0x1f, 0xf0, 0x7f, 0x00, 0xff, 0x87, 0x03,
        0x1f, 0xf0, 0xff, 0x00, 0xfe, 0xff, 0x03, 0x1f, 0xf0, 0xff, 0x01, 0xfc,
        0xff, 0x03, 0x1f, 0xf0, 0xff, 0x03, 0xf8, 0xff, 0x03, 0x1f, 0xf0, 0xff,
        0x07, 0xf0, 0xff, 0x03, 0x1f, 0xf0, 0xff, 0x0f, 0xe0, 0xff, 0x03, 0x1f,
        0xf0, 0xff, 0x1f, 0xc0, 0xff, 0x03, 0x1f, 0xf0, 0xff, 0x3f, 0x80, 0xff,
        0x03, 0x1f, 0xf0, 0xff, 0x7f, 0x00, 0xff, 0x03, 0x1f, 0xf0, 0xff, 0xff,
        0x00, 0xfe, 0x03, 0x1e, 0xf0, 0xff, 0xff, 0x01, 0xfe, 0x01, 0xfe, 0xff,
        0xff, 0xff, 0xff, 0xff, 0x01, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
        0xf8, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff,
        0x1f, 0x00};
}

namespace WifiIcon {

    const int x = 120;
    const int y = 0;
    const int w = 8;
    const int h = 8;
    const unsigned char Connected[] PROGMEM = {
        // 'wifi, 8x8px
        0x00, 0x0f, 0x10, 0x27, 0x48, 0x53, 0x54, 0x55};

    const unsigned char First[] PROGMEM = {
        // 'wifi, 8x8px
        0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x05};
    const unsigned char Second[] PROGMEM = {
        // 'wifi, 8x8px
        0x00, 0x00, 0x00, 0x07, 0x08, 0x13, 0x14, 0x15,
    };
    const unsigned char Error[] PROGMEM = {
        // 'error, 8x8px
        0x00, 0x20, 0x20, 0x20, 0x20, 0x03, 0x24, 0x05};
}

#endif  // OSSM_SOFTWARE_IMAGES_H