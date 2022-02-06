/*

    Raspberry Pi Pico pico-sdk LCD SSD1306 font print Library (C++)
    Demo Program
                                      https://twitter.com/yama23238

*/

#include <stdio.h>
#include "pico/stdlib.h"
#include "print_GFX_SSD1306.h"
#include "glcdfont.h"

#define SSD1306_SPI_RST         8
#define SSD1306_SPI_DC          9
#define SSD1306_SPI_MOSI        11
#define SSD1306_SPI_SCK         10
#define SSD1306_SPI_CS          13
#define SSD1306_SPI_PORT        spi1

#define SSD1306_SDA             2
#define SSD1306_SCL             3
#define SSD1306_I2C_PORT        i2c1
// 製品によってI2Cアドレスが違うので確認してください
#define SSD1306_I2C_ADDRESS     0x3C

#define SSD1306_SCREEN_WIDTH    128   // OLED display width, in pixels
#define SSD1306_SCREEN_HEIGHT    64   // OLED display height, in pixels



print_GFX_SSD1306 display = print_GFX_SSD1306(SSD1306_SCREEN_WIDTH, SSD1306_SCREEN_HEIGHT, SSD1306_SPI_PORT, SSD1306_SPI_DC, SSD1306_SPI_RST, SSD1306_SPI_CS);

// フォントの宣言
glcdfont glcdfont01 = glcdfont();

void setup(void);
void loop(void);

int main() {

  stdio_init_all();

  spi_init(SSD1306_SPI_PORT, 8000000);  // SPI clock 8MHz
  gpio_set_function(SSD1306_SPI_SCK, GPIO_FUNC_SPI);
  gpio_set_function(SSD1306_SPI_MOSI, GPIO_FUNC_SPI);
  gpio_pull_up(SSD1306_SPI_SCK);
  gpio_pull_up(SSD1306_SPI_MOSI);


  display.oled_setup(SSD1306_SWITCHCAPVCC);
  display.fillScreen(SSD1306_BLACK);
  printf("SSD1306 Test!\r\n"); 

  setup();
  while (1) {
    loop();
  }
  return 0;
}


#define CIRCLE_N   20
#define RDX         5
#define RDY         5


void random_circle(int r);
void loop(void) {
    static int r = 0;

    int n = 180;
    for (int i = 0; i < n; i++) {
        random_circle(r);
    }
    r++;
    if (r >= 4) r = 0;
}

int rnd(int max);

struct {
    int    x;
    int    y;
    int    dx;
    int    dy;
    int    signx;
    int    signy;
    int    r;
    int    c;
} circle01[CIRCLE_N];

void setup(void) {
    display.setRotation(3);
    display.set_font(&glcdfont01);
    display.set_font_color(SSD1306_WHITE, SSD1306_BLACK);
    display.set_font_pos(0,  0);

    for (int i = 0; i < CIRCLE_N; i++) {
        circle01[i].x = rnd(display.width());
        circle01[i].y = rnd(display.height());
        circle01[i].r = rnd(4) + 3;
        circle01[i].c = SSD1306_WHITE;
        circle01[i].dx = rnd(RDX) + 1;
        circle01[i].dy = rnd(RDY) + 1;
        circle01[i].signx = rnd(2) ? 1 : -1;
        circle01[i].signy = rnd(2) ? 1 : -1;
    }
}

void random_circle(int r) {

    int temp1, temp2;
    display.fillScreen(SSD1306_BLACK);
    for (int i = 0; i < CIRCLE_N; i++ ) {
        temp1 = circle01[i].dx * circle01[i].signx;
        temp2 = circle01[i].x + temp1;
        if (temp2 > display.width()) {
            circle01[i].signx = -1;
            circle01[i].dx = rnd(RDX) + 1;
            circle01[i].x = display.width() + circle01[i].signx * circle01[i].dx;
        } else if (temp2 < 0 ) {
            circle01[i].signx = 1;
            circle01[i].dx = rnd(RDX) + 1;
            circle01[i].x = 0 + circle01[i].signx * circle01[i].dx;
        } else {
            circle01[i].x = circle01[i].x + temp1;
        } 
        temp1 = circle01[i].dy * circle01[i].signy;
        temp2 = circle01[i].y + temp1;
        if (temp2 > display.height()) {
            circle01[i].signy = -1;
            circle01[i].dy = rnd(RDY) + 1;
            circle01[i].y = display.height() + circle01[i].signy * circle01[i].dy;
        } else if (temp2 < 0 ) {
            circle01[i].signy = 1;
            circle01[i].dy = rnd(RDY) + 1;
            circle01[i].y = 0 + circle01[i].signy * circle01[i].dy;
        } else {
            circle01[i].y = circle01[i].y + temp1;
        }

        // 円を描画
        display.fillCircle( circle01[i].x, circle01[i].y + 15, circle01[i].r, circle01[i].c);
    }

    // 文字を表示
    display.setRotation(r);
    display.set_font_pos(0, 0);
    if (display.width() == 128) 
      display.print("Raspberry Pi Pico");
    else
      display.print("Raspberry\nPi Pico");
    display.setRotation(3);

    // OLEDに転送
    display.display(); 
    sleep_ms(10);
}

int rnd(int a) {
    return (rand() % a);
}
