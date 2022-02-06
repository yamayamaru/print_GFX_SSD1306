// glcdfont_tt24.h
// Version 0.3.1
//
//    print_GFX_ILI9341 LCD ILI9341 font print Library (C++)
//                                   https://twitter.com/yama23238
//
//    このプログラムはmicropython-ili9341を参考にして作成しました
//    https://github.com/jeffmer/micropython-ili9341
//
//    Copyright (c) 2017 Jeffrey N. Magee
//    Released under the MIT license
//    https://github.com/jeffmer/micropython-ili9341/blob/master/LICENSE
//

#ifndef _GLCDFONT_TT24_H
#define _GLCDFONT_TT24_H

#include "font_class.h"

const uint8_t _glcdfont_tt24_font01[] = {
    0x0c, 0x00, 0xc0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x78, 0x70, 0x07, 0x38, 0x78, 
    0x07, 0x38, 0x7c, 0x07, 0x78, 0x1e, 0x00, 0xf0, 0x0f, 0x00, 0xf0, 0x07, 0x00, 0xc0, 0x03, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 
    0x00, 0x02, 0xf8, 0x3f, 0x07, 0xf8, 0x3f, 0x07, 0xf8, 0x3f, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x08, 0x00, 0xf8, 0x03, 0x00, 0xf8, 0x03, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 
    0x03, 0x00, 0xf8, 0x03, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0xe0, 0x00, 
    0x80, 0xe3, 0x00, 0x80, 0xf3, 0x03, 0xe0, 0xff, 0x03, 0xe0, 0xff, 0x00, 0xe0, 0xe3, 0x00, 0x80, 
    0xe3, 0x03, 0x80, 0xff, 0x03, 0xe0, 0xff, 0x01, 0xe0, 0xe7, 0x00, 0x80, 0xe3, 0x00, 0x80, 0x03, 
    0x00, 0x0b, 0x00, 0x00, 0xe0, 0x00, 0xc0, 0xe3, 0x01, 0xe0, 0xc7, 0x01, 0x70, 0x8e, 0x03, 0xf8, 
    0xef, 0x07, 0xf8, 0xff, 0x07, 0x70, 0x8c, 0x03, 0xe0, 0x9d, 0x01, 0xc0, 0xf9, 0x01, 0x00, 0xf0, 
    0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0xe0, 0x01, 0x00, 0xf0, 0x03, 0x00, 0x38, 0x07, 0x00, 0x38, 
    0x07, 0x04, 0x38, 0x07, 0x07, 0x38, 0xc7, 0x07, 0xf0, 0xf3, 0x01, 0xe0, 0x79, 0x00, 0x00, 0x1e, 
    0x00, 0x80, 0x07, 0x00, 0xe0, 0xe3, 0x01, 0xf8, 0xf0, 0x03, 0x38, 0x38, 0x07, 0x08, 0x38, 0x07, 
    0x00, 0x38, 0x07, 0x00, 0xf0, 0x03, 0x00, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 
    0x00, 0x00, 0xf8, 0x01, 0xe0, 0xfd, 0x03, 0xf0, 0x8f, 0x07, 0xf8, 0x07, 0x07, 0x38, 0x0e, 0x07, 
    0x38, 0x1f, 0x07, 0xf8, 0x3f, 0x07, 0xf0, 0xfb, 0x07, 0xe0, 0xf0, 0x07, 0x00, 0xe0, 0x03, 0x00, 
    0xf8, 0x07, 0x00, 0xf8, 0x07, 0x00, 0x78, 0x06, 0x00, 0x00, 0x04, 0x04, 0x00, 0xf8, 0x03, 0x00, 
    0xf8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x7f, 0x00, 0xe0, 0xff, 
    0x03, 0xf8, 0xff, 0x0f, 0x7c, 0x00, 0x1f, 0x0e, 0x00, 0x38, 0x02, 0x00, 0x20, 0x02, 0x00, 0x20, 
    0x07, 0x00, 0x02, 0x00, 0x20, 0x0e, 0x00, 0x38, 0x7c, 0x00, 0x1f, 0xf8, 0xff, 0x0f, 0xe0, 0xff, 
    0x03, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x78, 
    0x03, 0x00, 0xf0, 0x01, 0x00, 0xe0, 0x00, 0x00, 0xf8, 0x03, 0x00, 0x68, 0x01, 0x00, 0x60, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 
    0x38, 0x00, 0x80, 0xff, 0x03, 0x80, 0xff, 0x03, 0x80, 0xff, 0x03, 0x00, 0x38, 0x00, 0x00, 0x38, 
    0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x37, 0x00, 
    0x00, 0x3f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x38, 0x00, 
    0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 
    0x38, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0xe0, 0x07, 0x00, 0xfc, 0x07, 0xc0, 0xff, 
    0x01, 0xf8, 0x3f, 0x00, 0xfc, 0x03, 0x00, 0x7c, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0d, 0x00, 0x80, 
    0x7f, 0x00, 0xe0, 0xff, 0x01, 0xf0, 0xff, 0x03, 0xf8, 0xc0, 0x07, 0x38, 0x00, 0x07, 0x38, 0x00, 
    0x07, 0x38, 0x00, 0x07, 0xf8, 0xc0, 0x07, 0xf0, 0xff, 0x03, 0xe0, 0xff, 0x01, 0x80, 0x7f, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0xc0, 0x01, 0x00, 0xc0, 0x01, 0x00, 0xe0, 0x01, 
    0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x0d, 0x00, 0xc0, 0x81, 0x07, 0xe0, 0xe1, 0x07, 0xf0, 0xe1, 0x07, 0x78, 0x70, 0x07, 0x38, 0x38, 
    0x07, 0x38, 0x38, 0x07, 0x38, 0x1c, 0x07, 0x78, 0x1e, 0x07, 0xf0, 0x0f, 0x07, 0xf0, 0x07, 0x07, 
    0xc0, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0xc0, 0xc0, 0x00, 0xf0, 0xc0, 
    0x03, 0xf0, 0xc0, 0x03, 0x78, 0x80, 0x07, 0x38, 0x00, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 
    0x78, 0x9e, 0x07, 0xf0, 0xff, 0x03, 0xf0, 0xff, 0x03, 0xe0, 0xf1, 0x00, 0x00, 0x00, 0x00, 0x0c, 
    0x00, 0x00, 0xf0, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xfe, 0x00, 0x00, 0xef, 0x00, 0xc0, 0xe7, 0x00, 
    0xf0, 0xe1, 0x00, 0xf8, 0xe0, 0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0x00, 
    0xe0, 0x00, 0x00, 0xe0, 0x00, 0x0c, 0x00, 0x00, 0xce, 0x00, 0xf8, 0xcf, 0x03, 0xf8, 0xcf, 0x03, 
    0x38, 0x8e, 0x07, 0x38, 0x07, 0x07, 0x38, 0x07, 0x07, 0x38, 0x07, 0x07, 0x38, 0x8f, 0x07, 0x38, 
    0xfe, 0x03, 0x38, 0xfc, 0x01, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x7f, 0x00, 
    0xe0, 0xff, 0x01, 0xf0, 0xff, 0x03, 0x78, 0x8e, 0x07, 0x38, 0x07, 0x07, 0x38, 0x07, 0x07, 0x38, 
    0x07, 0x07, 0x78, 0x8f, 0x07, 0xf0, 0xfe, 0x03, 0xe0, 0xfc, 0x01, 0xc0, 0xf8, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0xc0, 0x07, 0x38, 
    0xf8, 0x07, 0x38, 0xfe, 0x07, 0xb8, 0x3f, 0x00, 0xf8, 0x07, 0x00, 0xf8, 0x01, 0x00, 0xf8, 0x00, 
    0x00, 0x78, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0c, 0x00, 0x00, 0xf0, 0x00, 0xe0, 0xf9, 0x01, 0xf0, 
    0xff, 0x03, 0xf0, 0x9f, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0e, 
    0x07, 0xf0, 0x9f, 0x07, 0xf0, 0xff, 0x03, 0xe0, 0xf9, 0x01, 0x00, 0xf0, 0x00, 0x0d, 0x00, 0xc0, 
    0x07, 0x00, 0xe0, 0x0f, 0x01, 0xf0, 0x1f, 0x03, 0x78, 0x3c, 0x07, 0x38, 0x38, 0x07, 0x38, 0x38, 
    0x07, 0x38, 0x38, 0x07, 0x38, 0x38, 0x07, 0x70, 0x9c, 0x07, 0xf0, 0xff, 0x03, 0xe0, 0xff, 0x01, 
    0x80, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x07, 
    0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x07, 0x37, 0x00, 0x07, 0x3f, 0x00, 
    0x07, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 
    0x00, 0x7c, 0x00, 0x00, 0x6c, 0x00, 0x00, 0xee, 0x00, 0x00, 0xee, 0x00, 0x00, 0xc7, 0x01, 0x00, 
    0xc7, 0x01, 0x80, 0x83, 0x03, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0xce, 0x01, 0x00, 0xce, 0x01, 
    0x00, 0xce, 0x01, 0x00, 0xce, 0x01, 0x00, 0xce, 0x01, 0x00, 0xce, 0x01, 0x00, 0xce, 0x01, 0x00, 
    0xce, 0x01, 0x00, 0xce, 0x01, 0x00, 0xce, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x80, 0x83, 0x03, 
    0x80, 0x83, 0x03, 0x00, 0xc7, 0x01, 0x00, 0xc7, 0x01, 0x00, 0xee, 0x00, 0x00, 0xee, 0x00, 0x00, 
    0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0xc0, 0x00, 0x00, 
    0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x78, 0x70, 0x07, 0x38, 0x78, 0x07, 0x38, 0x7c, 0x07, 0x78, 
    0x1e, 0x00, 0xf0, 0x0f, 0x00, 0xf0, 0x07, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x11, 0x00, 0x00, 0x3f, 0x00, 0xc0, 0xff, 0x00, 0xe0, 0xe1, 0x01, 0xf0, 0xc0, 0x03, 0x70, 
    0xbc, 0x03, 0x78, 0x7e, 0x07, 0x38, 0x7f, 0x07, 0xb8, 0x73, 0x07, 0xb8, 0x33, 0x07, 0xb8, 0x3f, 
    0x07, 0x38, 0x7f, 0x07, 0x70, 0xf3, 0x03, 0x70, 0x70, 0x03, 0xe0, 0x38, 0x02, 0xe0, 0x3f, 0x00, 
    0x80, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x06, 0x00, 0xc0, 0x07, 0x00, 0xf0, 
    0x07, 0x00, 0xfe, 0x03, 0xc0, 0xff, 0x00, 0xf8, 0xef, 0x00, 0xf8, 0xe1, 0x00, 0x78, 0xe0, 0x00, 
    0xf8, 0xe3, 0x00, 0xf0, 0xff, 0x00, 0xc0, 0xff, 0x00, 0x00, 0xfe, 0x07, 0x00, 0xf0, 0x07, 0x00, 
    0x80, 0x07, 0x00, 0x00, 0x04, 0x0f, 0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 
    0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 
    0x9e, 0x07, 0xf8, 0xff, 0x07, 0xf0, 0xff, 0x03, 0xe0, 0xf1, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x3f, 0x00, 0xc0, 0xff, 0x00, 0xe0, 0xff, 0x01, 0xf0, 
    0xe1, 0x03, 0x70, 0x80, 0x03, 0x78, 0x80, 0x07, 0x38, 0x00, 0x07, 0x38, 0x00, 0x07, 0x38, 0x00, 
    0x07, 0x38, 0x00, 0x07, 0x78, 0x80, 0x03, 0xf0, 0xc0, 0x03, 0xe0, 0xc0, 0x01, 0xc0, 0xc0, 0x00, 
    0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 
    0x07, 0x38, 0x00, 0x07, 0x38, 0x00, 0x07, 0x38, 0x00, 0x07, 0x38, 0x00, 0x07, 0x38, 0x00, 0x07, 
    0x78, 0x80, 0x07, 0xf0, 0xc0, 0x03, 0xe0, 0xff, 0x01, 0xc0, 0xff, 0x00, 0x00, 0x3f, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 
    0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 
    0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x00, 0x07, 0x38, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x0d, 0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0x38, 0x1c, 0x00, 0x38, 
    0x1c, 0x00, 0x38, 0x1c, 0x00, 0x38, 0x1c, 0x00, 0x38, 0x1c, 0x00, 0x38, 0x1c, 0x00, 0x38, 0x1c, 
    0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x3f, 0x00, 0xc0, 
    0xff, 0x00, 0xe0, 0xff, 0x01, 0xf0, 0xe1, 0x03, 0x70, 0x80, 0x03, 0x78, 0x80, 0x07, 0x38, 0x00, 
    0x07, 0x38, 0x00, 0x07, 0x38, 0x1c, 0x07, 0x38, 0x1c, 0x07, 0x78, 0x9c, 0x03, 0xf0, 0xdc, 0x01, 
    0xe0, 0xfc, 0x07, 0xc0, 0xfc, 0x07, 0x80, 0xfc, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
    0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x0e, 0x00, 
    0x00, 0x0e, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0e, 0x00, 0xf8, 
    0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 
    0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x0c, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x01, 0x00, 0xe0, 0x03, 0x00, 0x80, 0x07, 
    0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x80, 0x07, 0xf8, 0xff, 0x03, 0xf8, 
    0xff, 0x03, 0xf8, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 
    0xf8, 0xff, 0x07, 0x00, 0x1e, 0x00, 0x00, 0x0f, 0x00, 0x80, 0x1f, 0x00, 0xc0, 0x7f, 0x00, 0xe0, 
    0xf9, 0x00, 0xf0, 0xf0, 0x03, 0x78, 0xc0, 0x07, 0x38, 0x80, 0x07, 0x18, 0x00, 0x07, 0x08, 0x00, 
    0x04, 0x00, 0x00, 0x00, 0x0c, 0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0x00, 
    0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 
    0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x12, 0x00, 0xf8, 0xff, 0x07, 0xf8, 
    0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0x01, 0x00, 0xf8, 0x1f, 0x00, 0xc0, 0xff, 0x00, 0x00, 0xfc, 
    0x07, 0x00, 0xe0, 0x07, 0x00, 0xe0, 0x07, 0x00, 0xfc, 0x07, 0xc0, 0xff, 0x00, 0xf8, 0x1f, 0x00, 
    0xf8, 0x01, 0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x0f, 0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0x00, 0x00, 
    0xe0, 0x03, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0x3f, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xf0, 0x01, 0x00, 
    0xe0, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x11, 0x00, 0x00, 0x3f, 0x00, 0xc0, 0xff, 0x00, 0xe0, 0xff, 0x01, 0xf0, 0xe1, 0x03, 0x70, 
    0x80, 0x03, 0x78, 0x80, 0x07, 0x38, 0x00, 0x07, 0x38, 0x00, 0x07, 0x38, 0x00, 0x07, 0x78, 0x80, 
    0x07, 0x70, 0x80, 0x03, 0xf0, 0xe1, 0x03, 0xe0, 0xff, 0x01, 0xc0, 0xff, 0x00, 0x00, 0x3f, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 
    0x07, 0x38, 0x1c, 0x00, 0x38, 0x1c, 0x00, 0x38, 0x1c, 0x00, 0x38, 0x1c, 0x00, 0x38, 0x1c, 0x00, 
    0x78, 0x1e, 0x00, 0xf0, 0x0f, 0x00, 0xf0, 0x0f, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x11, 0x00, 0x00, 0x3f, 0x00, 0xc0, 0xff, 0x00, 0xe0, 0xff, 0x01, 0xf0, 0xe1, 0x03, 
    0x70, 0x80, 0x03, 0x78, 0x80, 0x07, 0x38, 0x00, 0x07, 0x38, 0x10, 0x07, 0x38, 0x38, 0x07, 0x38, 
    0x70, 0x07, 0x78, 0xf0, 0x07, 0x70, 0xe0, 0x03, 0xf0, 0xe1, 0x03, 0xe0, 0xff, 0x07, 0xc0, 0xff, 
    0x03, 0x00, 0x3f, 0x02, 0x00, 0x00, 0x00, 0x0f, 0x00, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 
    0xff, 0x07, 0x38, 0x1c, 0x00, 0x38, 0x1c, 0x00, 0x38, 0x1c, 0x00, 0x38, 0x3c, 0x00, 0x38, 0xfc, 
    0x00, 0x38, 0xfc, 0x03, 0x78, 0xfe, 0x07, 0xf0, 0x9f, 0x07, 0xf0, 0x0f, 0x07, 0xc0, 0x07, 0x04, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0xc0, 0x00, 0xe0, 0xc1, 0x01, 0xf0, 0xe3, 
    0x03, 0xf0, 0x87, 0x03, 0x78, 0x06, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0e, 0x07, 0x38, 0x0c, 0x07, 
    0x38, 0x0c, 0x07, 0x78, 0x9c, 0x07, 0xf0, 0xf8, 0x03, 0xe0, 0xf8, 0x03, 0xc0, 0xf0, 0x00, 0x00, 
    0x00, 0x00, 0x0c, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 
    0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0xf8, 0xff, 0x07, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 
    0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x01, 
    0xf8, 0xff, 0x03, 0x00, 0x80, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 
    0x00, 0x07, 0x00, 0x80, 0x07, 0xf8, 0xff, 0x03, 0xf8, 0xff, 0x01, 0xf8, 0xff, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf8, 0x07, 0x00, 0xf0, 
    0x3f, 0x00, 0x00, 0xff, 0x01, 0x00, 0xf8, 0x07, 0x00, 0x80, 0x07, 0x00, 0xe0, 0x07, 0x00, 0xfe, 
    0x07, 0xc0, 0x7f, 0x00, 0xf8, 0x0f, 0x00, 0xf8, 0x01, 0x00, 0x38, 0x00, 0x00, 0x08, 0x00, 0x00, 
    0x14, 0x00, 0x18, 0x00, 0x00, 0xf8, 0x01, 0x00, 0xf8, 0x1f, 0x00, 0xe0, 0xff, 0x00, 0x00, 0xfe, 
    0x07, 0x00, 0xe0, 0x07, 0x00, 0xf8, 0x07, 0xc0, 0xff, 0x07, 0xf8, 0x3f, 0x00, 0xf8, 0x03, 0x00, 
    0xf8, 0x01, 0x00, 0xf8, 0x3f, 0x00, 0xc0, 0xff, 0x07, 0x00, 0xf8, 0x07, 0x00, 0xc0, 0x07, 0x00, 
    0xfe, 0x07, 0xe0, 0xff, 0x01, 0xf8, 0x1f, 0x00, 0xf8, 0x01, 0x00, 0x38, 0x00, 0x00, 0x0e, 0x00, 
    0x08, 0x00, 0x04, 0x18, 0x00, 0x07, 0x78, 0x80, 0x07, 0xf8, 0xe0, 0x07, 0xf0, 0xf3, 0x01, 0xc0, 
    0xff, 0x00, 0x00, 0x3f, 0x00, 0x80, 0x7f, 0x00, 0xe0, 0xff, 0x00, 0xf0, 0xf1, 0x03, 0xf8, 0xc0, 
    0x07, 0x38, 0x80, 0x07, 0x18, 0x00, 0x06, 0x08, 0x00, 0x04, 0x0d, 0x00, 0x18, 0x00, 0x00, 0x38, 
    0x00, 0x00, 0xf8, 0x00, 0x00, 0xf0, 0x03, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0xff, 0x07, 0x00, 0xfc, 
    0x07, 0x00, 0xff, 0x07, 0xc0, 0x0f, 0x00, 0xf0, 0x03, 0x00, 0xf8, 0x00, 0x00, 0x38, 0x00, 0x00, 
    0x18, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x38, 0x80, 0x07, 0x38, 0xc0, 0x07, 0x38, 0xe0, 
    0x07, 0x38, 0x78, 0x07, 0x38, 0x3c, 0x07, 0x38, 0x1e, 0x07, 0x38, 0x0f, 0x07, 0xf8, 0x07, 0x07, 
    0xf8, 0x01, 0x07, 0xf8, 0x00, 0x07, 0x78, 0x00, 0x07, 0x38, 0x00, 0x07, 0x07, 0x00, 0xff, 0xff, 
    0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0x07, 0x00, 0x38, 0x07, 0x00, 0x38, 0x07, 0x00, 0x38, 
    0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x3c, 0x00, 0x00, 0xfc, 0x01, 0x00, 0xfc, 0x1f, 
    0x00, 0xe0, 0xff, 0x00, 0x00, 0xfe, 0x07, 0x00, 0xf0, 0x07, 0x00, 0x00, 0x07, 0x07, 0x00, 0x07, 
    0x00, 0x38, 0x07, 0x00, 0x38, 0x07, 0x00, 0x38, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff, 
    0x3f, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x18, 0x00, 0x00, 0x1f, 0x00, 0xc0, 0x1f, 0x00, 0xf8, 
    0x03, 0x00, 0xf8, 0x00, 0x00, 0x78, 0x00, 0x00, 0xf8, 0x03, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x1f, 
    0x00, 0x00, 0x1c, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x38, 0x00, 
    0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 
    0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 
    0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 
    0x00, 0x38, 0x09, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x1c, 0x00, 0x00, 
    0x18, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 
    0x00, 0x00, 0xc0, 0x01, 0x00, 0xe4, 0x03, 0x00, 0xe6, 0x07, 0x00, 0x37, 0x07, 0x80, 0x37, 0x07, 
    0x80, 0x33, 0x07, 0x80, 0x33, 0x07, 0x80, 0x33, 0x07, 0x80, 0x93, 0x03, 0x80, 0xff, 0x07, 0x00, 
    0xff, 0x07, 0x00, 0xfe, 0x07, 0x00, 0x00, 0x00, 0x0e, 0x00, 0xfc, 0xff, 0x07, 0xfc, 0xff, 0x07, 
    0xfc, 0xff, 0x07, 0x00, 0x87, 0x03, 0x80, 0x03, 0x07, 0x80, 0x03, 0x07, 0x80, 0x03, 0x07, 0x80, 
    0x03, 0x07, 0x80, 0x87, 0x07, 0x00, 0xff, 0x03, 0x00, 0xfe, 0x01, 0x00, 0xf8, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x78, 0x00, 0x00, 0xfe, 0x01, 0x00, 0xff, 0x03, 0x00, 
    0x87, 0x03, 0x80, 0x03, 0x07, 0x80, 0x03, 0x07, 0x80, 0x03, 0x07, 0x80, 0x03, 0x07, 0x80, 0x87, 
    0x07, 0x00, 0x87, 0x03, 0x00, 0x86, 0x01, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 
    0x78, 0x00, 0x00, 0xfe, 0x01, 0x00, 0xff, 0x03, 0x00, 0x87, 0x03, 0x80, 0x87, 0x07, 0x80, 0x03, 
    0x07, 0x80, 0x03, 0x07, 0x80, 0x03, 0x07, 0x80, 0x87, 0x07, 0x00, 0x87, 0x03, 0xfc, 0xff, 0x07, 
    0xfc, 0xff, 0x07, 0xfc, 0xff, 0x07, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x30, 0x00, 0x00, 0xfc, 
    0x00, 0x00, 0xfe, 0x01, 0x00, 0xff, 0x03, 0x80, 0x77, 0x07, 0x80, 0x73, 0x07, 0x80, 0x73, 0x07, 
    0x80, 0x73, 0x07, 0x80, 0xf7, 0x07, 0x00, 0xff, 0x03, 0x00, 0x7e, 0x03, 0x00, 0x7c, 0x00, 0x00, 
    0x60, 0x00, 0x07, 0x00, 0x80, 0x03, 0x00, 0xf0, 0xff, 0x07, 0xfc, 0xff, 0x07, 0xfc, 0xff, 0x07, 
    0x9e, 0x03, 0x00, 0x8e, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x78, 0x00, 0x00, 0xfe, 
    0x01, 0x00, 0xff, 0x23, 0x00, 0x87, 0x73, 0x80, 0x87, 0xf7, 0x80, 0x03, 0xe7, 0x80, 0x03, 0xe7, 
    0x80, 0x03, 0xe7, 0x00, 0x87, 0xe7, 0x00, 0x87, 0xf3, 0x80, 0xff, 0x7f, 0x80, 0xff, 0x3f, 0x80, 
    0xff, 0x1f, 0x00, 0x00, 0x00, 0x0d, 0x00, 0xfc, 0xff, 0x07, 0xfc, 0xff, 0x07, 0xfc, 0xff, 0x07, 
    0x00, 0x07, 0x00, 0x80, 0x03, 0x00, 0x80, 0x03, 0x00, 0x80, 0x03, 0x00, 0x80, 0x07, 0x00, 0x00, 
    0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 0xfc, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 
    0xb8, 0xff, 0x07, 0xb8, 0xff, 0x07, 0xb8, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 
    0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0xb8, 0xff, 0xff, 0xb8, 0xff, 0xff, 0xb8, 0xff, 0x7f, 
    0x0c, 0x00, 0xfc, 0xff, 0x07, 0xfc, 0xff, 0x07, 0xfc, 0xff, 0x07, 0x00, 0x78, 0x00, 0x00, 0x3c, 
    0x00, 0x00, 0xfe, 0x00, 0x80, 0xff, 0x01, 0x80, 0xe7, 0x07, 0x80, 0x83, 0x07, 0x80, 0x01, 0x07, 
    0x80, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0xfc, 0xff, 0x07, 0xfc, 0xff, 0x07, 0xfc, 0xff, 
    0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x80, 0xff, 0x07, 0x80, 0xff, 0x07, 0x80, 
    0xff, 0x07, 0x00, 0x07, 0x00, 0x80, 0x03, 0x00, 0x80, 0x03, 0x00, 0x80, 0x03, 0x00, 0x80, 0x07, 
    0x00, 0x00, 0xff, 0x07, 0x00, 0xfe, 0x07, 0x00, 0xff, 0x07, 0x80, 0x07, 0x00, 0x80, 0x03, 0x00, 
    0x80, 0x03, 0x00, 0x80, 0x07, 0x00, 0x00, 0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 0xfc, 0x07, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x80, 0xff, 0x07, 0x80, 0xff, 0x07, 0x80, 0xff, 0x07, 
    0x00, 0x07, 0x00, 0x80, 0x03, 0x00, 0x80, 0x03, 0x00, 0x80, 0x03, 0x00, 0x80, 0x07, 0x00, 0x00, 
    0xff, 0x07, 0x00, 0xff, 0x07, 0x00, 0xfc, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 
    0x00, 0x78, 0x00, 0x00, 0xfe, 0x01, 0x00, 0xff, 0x03, 0x00, 0x87, 0x03, 0x80, 0x03, 0x07, 0x80, 
    0x03, 0x07, 0x80, 0x03, 0x07, 0x80, 0x03, 0x07, 0x00, 0x87, 0x03, 0x00, 0xff, 0x03, 0x00, 0xfe, 
    0x01, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x80, 0xff, 0xff, 0x80, 0xff, 0xff, 0x80, 
    0xff, 0xff, 0x00, 0x87, 0x03, 0x80, 0x03, 0x07, 0x80, 0x03, 0x07, 0x80, 0x03, 0x07, 0x80, 0x03, 
    0x07, 0x80, 0x87, 0x07, 0x00, 0xff, 0x03, 0x00, 0xfe, 0x01, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x78, 0x00, 0x00, 0xfe, 0x01, 0x00, 0xff, 0x03, 0x00, 0x87, 
    0x03, 0x80, 0x87, 0x07, 0x80, 0x03, 0x07, 0x80, 0x03, 0x07, 0x80, 0x03, 0x07, 0x80, 0x87, 0x07, 
    0x00, 0x87, 0x03, 0x80, 0xff, 0xff, 0x80, 0xff, 0xff, 0x80, 0xff, 0xff, 0x00, 0x00, 0x00, 0x08, 
    0x00, 0x80, 0xff, 0x07, 0x80, 0xff, 0x07, 0x80, 0xff, 0x07, 0x00, 0x07, 0x00, 0x80, 0x03, 0x00, 
    0x80, 0x03, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x80, 0x00, 0x00, 0x8e, 
    0x01, 0x00, 0x9f, 0x03, 0x80, 0x9f, 0x07, 0x80, 0x3b, 0x07, 0x80, 0x33, 0x07, 0x80, 0x33, 0x07, 
    0x80, 0x33, 0x07, 0x00, 0xf7, 0x07, 0x00, 0xe7, 0x03, 0x00, 0xc6, 0x01, 0x00, 0x00, 0x00, 0x07, 
    0x00, 0x80, 0x03, 0x00, 0xfc, 0xff, 0x00, 0xfc, 0xff, 0x03, 0xfc, 0xff, 0x07, 0x80, 0x03, 0x07, 
    0x80, 0x03, 0x07, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x80, 0xff, 0x00, 0x80, 0xff, 0x03, 0x80, 0xff, 
    0x03, 0x00, 0x80, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x80, 0x03, 
    0x80, 0xff, 0x07, 0x80, 0xff, 0x07, 0x80, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 
    0x00, 0x80, 0x01, 0x00, 0x80, 0x0f, 0x00, 0x80, 0x3f, 0x00, 0x00, 0xfe, 0x01, 0x00, 0xf0, 0x07, 
    0x00, 0x80, 0x07, 0x00, 0xc0, 0x07, 0x00, 0xf8, 0x07, 0x00, 0xff, 0x00, 0x80, 0x3f, 0x00, 0x80, 
    0x07, 0x00, 0x80, 0x00, 0x00, 0x12, 0x00, 0x80, 0x01, 0x00, 0x80, 0x0f, 0x00, 0x80, 0xff, 0x00, 
    0x00, 0xfe, 0x07, 0x00, 0xe0, 0x07, 0x00, 0xc0, 0x07, 0x00, 0xfc, 0x07, 0x80, 0xff, 0x00, 0x80, 
    0x0f, 0x00, 0x80, 0x3f, 0x00, 0x00, 0xff, 0x01, 0x00, 0xf0, 0x07, 0x00, 0x80, 0x07, 0x00, 0xf8, 
    0x07, 0x80, 0xff, 0x03, 0x80, 0x3f, 0x00, 0x80, 0x07, 0x00, 0x80, 0x00, 0x00, 0x0c, 0x00, 0x80, 
    0x00, 0x04, 0x80, 0x01, 0x07, 0x80, 0x87, 0x07, 0x80, 0xef, 0x07, 0x00, 0xfe, 0x01, 0x00, 0x7c, 
    0x00, 0x00, 0xfe, 0x00, 0x00, 0xff, 0x03, 0x80, 0xc7, 0x07, 0x80, 0x03, 0x07, 0x80, 0x00, 0x06, 
    0x00, 0x00, 0x04, 0x0c, 0x00, 0x80, 0x01, 0x00, 0x80, 0x07, 0xe0, 0x80, 0x3f, 0xe0, 0x00, 0xff, 
    0xf0, 0x00, 0xf8, 0xff, 0x00, 0xc0, 0x7f, 0x00, 0xc0, 0x1f, 0x00, 0xf8, 0x07, 0x00, 0xff, 0x00, 
    0x80, 0x1f, 0x00, 0x80, 0x07, 0x00, 0x80, 0x00, 0x00, 0x0b, 0x00, 0x80, 0x03, 0x07, 0x80, 0x83, 
    0x07, 0x80, 0xc3, 0x07, 0x80, 0xe3, 0x07, 0x80, 0xf3, 0x07, 0x80, 0x7b, 0x07, 0x80, 0x3f, 0x07, 
    0x80, 0x1f, 0x07, 0x80, 0x0f, 0x07, 0x80, 0x07, 0x07, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0x0c, 
    0x00, 0x00, 0x1e, 0x00, 0xfc, 0xff, 0x0f, 0xfe, 0xff, 0x1f, 0xfe, 0xf3, 0x1f, 0x06, 0x00, 0x38, 
    0x06, 0x00, 0x38, 0x00, 0x00, 0x00, 0x05, 0x00, 0xfc, 0xff, 0x07, 0xfc, 0xff, 0x07, 0xfc, 0xff, 
    0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x06, 0x00, 0x38, 0xfe, 0xf3, 0x1f, 0xfe, 
    0xff, 0x1f, 0xfc, 0xff, 0x0f, 0x00, 0x1e, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 
    0x18, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 
    0x00, 0x00, 0x1c, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00      };

const uint8_t _glcdfont_tt24_index01[] = {
    0x00, 0x00, 0x26, 0x00, 0x3d, 0x00, 0x51, 0x00, 0x6b, 0x00, 0x91, 0x00, 0xb4, 0x00, 0xec, 0x00, 
    0x1b, 0x01, 0x29, 0x01, 0x40, 0x01, 0x57, 0x01, 0x74, 0x01, 0x9a, 0x01, 0xab, 0x01, 0xc2, 0x01, 
    0xd3, 0x01, 0xed, 0x01, 0x16, 0x02, 0x30, 0x02, 0x59, 0x02, 0x7f, 0x02, 0xa5, 0x02, 0xcb, 0x02, 
    0xf4, 0x02, 0x17, 0x03, 0x3d, 0x03, 0x66, 0x03, 0x77, 0x03, 0x88, 0x03, 0xa8, 0x03, 0xcb, 0x03, 
    0xeb, 0x03, 0x11, 0x04, 0x46, 0x04, 0x75, 0x04, 0xa4, 0x04, 0xd6, 0x04, 0x05, 0x05, 0x31, 0x05, 
    0x5a, 0x05, 0x8f, 0x05, 0xbe, 0x05, 0xd2, 0x05, 0xf8, 0x05, 0x24, 0x06, 0x4a, 0x06, 0x82, 0x06, 
    0xb1, 0x06, 0xe6, 0x06, 0x12, 0x07, 0x47, 0x07, 0x76, 0x07, 0xa2, 0x07, 0xc8, 0x07, 0xf4, 0x07, 
    0x20, 0x08, 0x5e, 0x08, 0x8a, 0x08, 0xb3, 0x08, 0xdc, 0x08, 0xf3, 0x08, 0x0d, 0x09, 0x24, 0x09, 
    0x4a, 0x09, 0x82, 0x09, 0x9f, 0x09, 0xc8, 0x09, 0xf4, 0x09, 0x1d, 0x0a, 0x49, 0x0a, 0x72, 0x0a, 
    0x89, 0x0a, 0xb5, 0x0a, 0xde, 0x0a, 0xef, 0x0a, 0x00, 0x0b, 0x26, 0x0b, 0x37, 0x0b, 0x75, 0x0b, 
    0x9e, 0x0b, 0xc7, 0x0b, 0xf3, 0x0b, 0x1f, 0x0c, 0x39, 0x0c, 0x5f, 0x0c, 0x76, 0x0c, 0x9f, 0x0c, 
    0xc5, 0x0c, 0xfd, 0x0c, 0x23, 0x0d, 0x49, 0x0d, 0x6c, 0x0d, 0x86, 0x0d, 0x97, 0x0d, 0xae, 0x0d, 
    0xcb, 0x0d      };



class glcdfont_tt24 : public font_class01 {

public:
    glcdfont_tt24() {}
    ~glcdfont_tt24() {}

    int32_t height() {
        return 24;
    }

    int32_t max_width() {
        return 20;
    }

    bool hmap() {
        return false;
    }

    bool reverse() {
        return false;
    }

    bool monospaced() {
        return false;
    }

    int32_t min_ch() {
        return 32;
    }

    int32_t max_ch() {
        return 126;
    }

    int32_t _chr_addr(char ch) {
        union {
            int8_t  b[4];
            int32_t i;
        } a;
        uint32_t offset;
        offset = 2 * ((uint32_t)ch - 32);
        a.b[0] = _glcdfont_tt24_index01[offset];
        a.b[1] = _glcdfont_tt24_index01[offset + 1];
        a.b[2] = 0;
        a.b[3] = 0;
        return  a.i;
    }

    int32_t get_width(const char *s, int32_t size) {

        int32_t width, offset, length01, i;
        unsigned char ch;

        width = 0;
        length01 = strnlen(s, size);
        for (i = 0; i < length01; i++) {
            ch = s[i];
            width += get_ch_char_w(ch);
        }
        return width;
    }

    int32_t get_ch_char_w(char ch) {
        union {
            int8_t  b[4];
            int32_t i;
        } a;
        int32_t offset;
        char ordch;

        ordch = ((ch >= 32) && (ch <= 126)) ?  (ch + 1) : 32;
        offset = _chr_addr(ordch);
        a.b[0] = _glcdfont_tt24_font01[offset];
        a.b[1] = _glcdfont_tt24_font01[offset + 1];
        a.b[2] = 0;
        a.b[3] = 0;
        return a.i;
    }

    void get_ch(char ch, uint8_t **buf) {
        union {
            int8_t  b[4];
            int32_t i;
        } a;
        int32_t offset, next_offs;
        char    ordch;

        ordch = ((ch >= 32) && (ch <= 126)) ?  (ch + 1) : 32;
        offset = _chr_addr(ordch);
        next_offs = _chr_addr(ordch + 1);
        for (int i = 0; i < (next_offs - (offset + 2)); i++) {
            (*buf)[i] = _glcdfont_tt24_font01[offset + 2 + i];
        }
    }
};

#endif  // _GLCDFONT_TT24_H
