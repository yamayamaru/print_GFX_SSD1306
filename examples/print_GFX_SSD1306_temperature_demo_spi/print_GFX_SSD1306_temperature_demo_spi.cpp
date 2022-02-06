/*

    Raspberry Pi Pico pico-sdk LCD SSD1306 font print Library (C++)
    print_GFX demo program temperature_demo.cpp
                                      https://twitter.com/yama23238

*/
#include <stdio.h>
#include "pico/stdlib.h"

// print_GFX_SSD1306を使うため、インクルード
#include "print_GFX_SSD1306.h"
// ADCを使うため、インクルード
#include "hardware/adc.h"
// fontデータのインクルード
#include "glcdfont.h"
#include "glcdfont_tt14.h"

#define SSD1306_SPI_RST         8
#define SSD1306_SPI_DC          9
#define SSD1306_SPI_MOSI        11
#define SSD1306_SPI_SCK         10
#define SSD1306_SPI_CS          13
#define SSD1306_SPI_PORT        spi1

#define SSD1306_SDA         2
#define SSD1306_SCL         3
#define SSD1306_I2C_PORT    i2c1
// 製品によってI2Cアドレスが違うので確認してください
#define SSD1306_I2C_ADDRESS 0x3C

#define SSD1306_SCREEN_WIDTH 128   // OLED display width, in pixels
#define SSD1306_SCREEN_HEIGHT 64   // OLED display height, in pixels


/*
// I2Cの場合
print_GFX_SSD1306 display = print_GFX_SSD1306(SSD1306_SCREEN_WIDTH, SSD1306_SCREEN_HEIGHT, SSD1306_I2C_PORT);
*/

// SPIの場合
print_GFX_SSD1306 display = print_GFX_SSD1306(SSD1306_SCREEN_WIDTH, SSD1306_SCREEN_HEIGHT, SSD1306_SPI_PORT, SSD1306_SPI_DC, SSD1306_SPI_RST, SSD1306_SPI_CS);

// fontの宣言
glcdfont glcdfont01 = glcdfont();
glcdfont_tt14 glcdfont_tt14_01 = glcdfont_tt14();

void loop();
int main() {
    stdio_init_all();

/*
    // I2C初期化
    i2c_init(SSD1306_I2C_PORT, 400000);   // I2C clock 400kHz
    gpio_set_function(SSD1306_SDA, GPIO_FUNC_I2C);
    gpio_set_function(SSD1306_SCL, GPIO_FUNC_I2C);
    gpio_pull_up(SSD1306_SDA);
    gpio_pull_up(SSD1306_SCL);
*/

    // SPI初期化
    spi_init(SSD1306_SPI_PORT, 8000000);  // SPI clock 8MHz
    gpio_set_function(SSD1306_SPI_SCK, GPIO_FUNC_SPI);
    gpio_set_function(SSD1306_SPI_MOSI, GPIO_FUNC_SPI);
    gpio_pull_up(SSD1306_SPI_SCK);
    gpio_pull_up(SSD1306_SPI_MOSI);

/*
    // OLED初期化(I2Cの場合)
    display.oled_setup(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);
    display.setRotation(0);
    display.fillScreen(SSD1306_BLACK);
    display.set_font(&glcdfont01);
    display.set_font_pos(0, 0);
    display.set_font_color(SSD1306_WHITE, SSD1306_BLACK);
    display.display();
*/

    // OLED初期化(SPIの場合)
    display.oled_setup(SSD1306_SWITCHCAPVCC);
    display.setRotation(0);
    display.fillScreen(SSD1306_BLACK);
    display.set_font(&glcdfont01);
    display.set_font_pos(0, 0);
    display.set_font_color(SSD1306_WHITE, SSD1306_BLACK);
    display.display();

    // Raspberry Pi PicoのADCと内蔵温度センサーの初期化
    adc_init();
    adc_set_temp_sensor_enabled(true);
    adc_select_input(4);

    while (1) {
        loop();
    }

    return 0;
}

void loop() {

    // 温度を取得
    double    conversion_factor = 3.3 / (4095.0);
    uint16_t  result = adc_read();
    double    reading = result * conversion_factor;
    double    temperature = 27 - (reading - 0.706) / 0.001721;

    display.fillScreen(SSD1306_BLACK);

    // 温度表示
    display.set_font_pos(0, 0);
    display.set_font(&glcdfont01);
    display.printf("Raspberry Pi Pico\n\n");
    display.set_font(&glcdfont_tt14_01);
    display.printf("Temp : %.2f degC\n", temperature);

    // 画面更新
    display.display();
    sleep_ms(1000);
}
