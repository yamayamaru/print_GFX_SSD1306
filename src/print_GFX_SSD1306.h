// print_GFX_SSD1306.h
// Version 0.3.1
//
//    print_GFX_SSD1306 LCD SSD1306 font print Library (C++)
//                                   https://twitter.com/yama23238
//
//    このプログラムはmicropython-ili9341を参考にして作成しました
//    https://github.com/jeffmer/micropython-ili9341
//
//    Copyright (c) 2017 Jeffrey N. Magee
//    Released under the MIT license
//    https://github.com/jeffmer/micropython-ili9341/blob/master/LICENSE
//

#ifndef _PRINT_GFX_SSD1306_H
#define _PRINT_GFX_SSD1306_H

#include "pico/stdlib.h"
#include "yama_2_GFX_SSD1306.h"
#include <cstdint>
#include <sstream> // std::stringstream
#include <istream> // std::getline
#include <vector>
#include <string>
#include <cstring>
#include "font_class.h"

#define _PRINT_GFX_SSD1306_STR_BUFF01_LEN01 2047
#ifndef _PRINT_GFX_SSD1306_MAX_TEXT_SIZE01
#define _PRINT_GFX_SSD1306_MAX_TEXT_SIZE01  2047
#endif

extern glcdfont_dummy glcdfont_dummy_print_GFX_SSD1306;

class print_GFX_SSD1306 : public yama_2_GFX_SSD1306{
struct colormap {
    uint16_t fg;
    uint16_t bg;
};

protected:

    struct colormap _colormap;
    int32_t _x;
    int32_t _y;
    font_class01 *_font;
    bool scrolling;
    int32_t  _scroll;
    bool _back_ground_fill_flag;
    uint8_t glyph_buff01[4096];
    char str_buff01[_PRINT_GFX_SSD1306_STR_BUFF01_LEN01 + 1];

public:

    print_GFX_SSD1306(uint8_t w, uint8_t h,
                   i2c_inst_t *twi = yama_2_GFX_SSD1306_DEFAULT_I2C_PORT, 
                   int8_t rst_pin = -1);
    print_GFX_SSD1306(uint8_t w, uint8_t h, spi_inst_t *inst = yama_2_GFX_SSD1306_SSD1306_DEFAULT_SPI_PORT,
                   int8_t dc_pin = yama_2_GFX_SSD1306_SSD1306_DEFAULT_PIN_DC,
                   int8_t rst_pin = -1, 
                   int8_t cs_pin = yama_2_GFX_SSD1306_SSD1306_DEFAULT_PIN_CS);
    void set_font_color(uint16_t fg, uint16_t bg);
    void set_font_pos(int32_t x, int32_t y);
    void set_font(font_class01 *font);
    int32_t chars(const char *str, int32_t x, int32_t y);
    int32_t next_line(int32_t cury, int32_t char_h);
    void print(const char *text); // does character wrap, compatible with stream output
    void word_print(std::string text); // does word wrap, leaves self._x unchanged
    void printf(const char* format, ...);
    void word_printf(const char* format, ...);
    void print_u(const char *text); // does character wrap, compatible with stream output
    void word_print_u(std::string text); // does word wrap, leaves self._x unchanged
    void printf_u(const char* format, ...);
    void word_printf_u(const char* format, ...);
    void set_font_back_ground_fill(bool flag);
    int substr01(const char *source, char *dest, int buffsize, int start, int length);    
    void clear_memory(uint8_t *buf, uint8_t value, uint32_t num);
    bool get_bit(uint8_t *glyph, int32_t ch);
   
};

#endif // _PRINT_GFX_SSD1306_H