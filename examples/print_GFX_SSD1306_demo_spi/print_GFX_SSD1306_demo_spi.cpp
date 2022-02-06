/*

    Raspberry Pi Pico pico-sdk LCD SSD1306 font print Library (C++)
    Demo Program
                                      https://twitter.com/yama23238

*/

#include <stdio.h>
#include "pico/stdlib.h"
#include "print_GFX_SSD1306.h"
#include "glcdfont.h"
#include "glcdfont_tt14.h"
#include "glcdfont_tt24.h"
#include "glcdfont_tt32.h"

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
glcdfont_tt14 glcdfont_tt14_01 = glcdfont_tt14();
glcdfont_tt24 glcdfont_tt24_01 = glcdfont_tt24();
glcdfont_tt32 glcdfont_tt32_01 = glcdfont_tt32();



void loop01(void);
void loop02_setup(void);
void loop02(void);

int main() {

  stdio_init_all();

  spi_init(SSD1306_SPI_PORT, 8000000);  // SPI clock 8MHz
  gpio_set_function(SSD1306_SPI_SCK, GPIO_FUNC_SPI);
  gpio_set_function(SSD1306_SPI_MOSI, GPIO_FUNC_SPI);
  gpio_pull_up(SSD1306_SPI_SCK);
  gpio_pull_up(SSD1306_SPI_MOSI);
  spi_set_format(SSD1306_SPI_PORT, 8, SPI_CPOL_0, SPI_CPHA_0, SPI_MSB_FIRST);   // SPI MODE0, MSBFIRST

  display.oled_setup(SSD1306_SWITCHCAPVCC);
  display.fillScreen(SSD1306_BLACK);
  printf("SSD1306 Test!\r\n"); 

  while (1) {
    loop01();
    loop02_setup();
    loop02();
  }
  return 0;
}

void loop01(void) {
  static int r = 0;

  display.setRotation(r);
  display.set_font_back_ground_fill(false);

  display.set_font(&glcdfont01);
  display.set_font_color(SSD1306_WHITE, SSD1306_BLACK);
  display.set_font_pos(0,  0);
  display.fillScreen(SSD1306_BLACK);
  display.print("ARM architecture (Jan.25,2022,20:57 UTC). In Wikipedia: The Free Encyclopedia. Retrieved from https://en.wikipedia.org/wiki/ARM_architecture");
  display.display();
  sleep_ms(3000);



  display.set_font(&glcdfont01);
  display.set_font_pos(0,  0);
  display.fillScreen(SSD1306_BLACK);
  const char a[] = "ARM (stylised in lowercase as arm, formerly an acronym for Advanced RISC Machines and originally Acorn RISC Machine) is a family of reduced instruction set computer (RISC) architectures for computer processors, configured for various environments.";
  char b[2048];
  strcpy(b, a);
  display.word_print(b);
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont01);
  display.set_font_pos(0,  0);
  display.fillScreen(SSD1306_BLACK);
  display.print(b);
  display.display();
  sleep_ms(3000);



  display.set_font(&glcdfont01);
  display.set_font_pos(0,  0);
  display.fillScreen(SSD1306_BLACK);
  const char c[] = "ARM (stylised in lowercase as arm, formerly an acronym for Advanced RISC Machines and originally Acorn RISC Machine) is a family of reduced instruction set computer (RISC) architectures for computer processors, configured for various environments.";
  display.word_print(c);
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont01);
  display.set_font_pos(0,  0);
  display.fillScreen(SSD1306_BLACK);
  display.print(c);
  display.display();
  sleep_ms(3000);



  display.set_font(&glcdfont01);
  display.set_font_pos(0,  0);
  display.fillScreen(SSD1306_BLACK);
  display.word_printf("0x%02x,  %s\n", 255, "ARM (stylised in lowercase as arm, formerly an acronym for Advanced RISC Machines and originally Acorn RISC Machine) is a family of reduced instruction set computer (RISC) architectures for computer processors, configured for various environments. ");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt14_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  display.word_printf("0x%02x,  %s\n", 255, "ARM (stylised in lowercase as arm, formerly an acronym for Advanced RISC Machines and originally Acorn RISC Machine) is a family of reduced instruction set computer (RISC) architectures for computer processors, configured for various environments. ");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt24_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  if (display.width() == 128)
      display.word_printf("0x%02x,  %s\n", 255, "Raspberry Pi Pico\n");
  else
      display.word_printf("0x%02x,  %s\n", 255, "Pico\nPico\n");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt32_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  display.word_printf("0x%02x,  %s\n", 255, "Pico\nPico\n");
  display.display();
  sleep_ms(3000);



  display.set_font(&glcdfont01);
  display.set_font_pos(0,  0);
  display.fillScreen(SSD1306_BLACK);
  display.printf("0x%02x,  %s\n", 255, "ARM (stylised in lowercase as arm, formerly an acronym for Advanced RISC Machines and originally Acorn RISC Machine) is a family of reduced instruction set computer (RISC) architectures for computer processors, configured for various environments. ");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt14_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  display.printf("0x%02x,  %s\n", 255, "ARM (stylised in lowercase as arm, formerly an acronym for Advanced RISC Machines and originally Acorn RISC Machine) is a family of reduced instruction set computer (RISC) architectures for computer processors, configured for various environments. ");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt24_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  if (display.width() == 128)
      display.printf("0x%02x,  %s\n", 255, "Raspberry Pi Pico\n");
  else
      display.printf("0x%02x,  %s\n", 255, "Pico\nPico\n");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt32_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  display.printf("0x%02x,  %s\n", 255, "Pico\nPico\n");
  display.display();
  sleep_ms(3000);



  display.set_font(&glcdfont01);
  display.set_font_pos(0,  0);
  display.fillScreen(SSD1306_BLACK);
  display.word_print("ARM (stylised in lowercase as arm, formerly an acronym for Advanced RISC Machines and originally Acorn RISC Machine) is a family of reduced instruction set computer (RISC) architectures for computer processors, configured for various environments. ");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt14_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  display.word_print("ARM (stylised in lowercase as arm, formerly an acronym for Advanced RISC Machines and originally Acorn RISC Machine) is a family of reduced instruction set computer (RISC) architectures for computer processors, configured for various environments. ");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt24_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  if (display.width() == 128)
      display.word_print("Raspberry Pi Pico\n");
  else
      display.word_print("Pico\nPico\n");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt32_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  display.word_print("Pico\nPico\n");
  display.display();
  sleep_ms(3000);



  display.set_font(&glcdfont01);
  display.set_font_pos(0,  0);
  display.fillScreen(SSD1306_BLACK);
  display.print("ARM (stylised in lowercase as arm, formerly an acronym for Advanced RISC Machines and originally Acorn RISC Machine) is a family of reduced instruction set computer (RISC) architectures for computer processors, configured for various environments. ");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt14_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  display.print("ARM (stylised in lowercase as arm, formerly an acronym for Advanced RISC Machines and originally Acorn RISC Machine) is a family of reduced instruction set computer (RISC) architectures for computer processors, configured for various environments. ");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt24_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  if (display.width() == 128)
      display.print("Raspberry Pi Pico\n");
  else
      display.print("Pico\nPico\n");
  display.display();
  sleep_ms(3000);

  display.set_font(&glcdfont_tt32_01);
  display.set_font_pos(0, 0);
  display.fillScreen(SSD1306_BLACK);
  display.print("Pico\nPico\n");
  display.display();
  sleep_ms(3000);

  r++;
  if (r >= 4) r = 0;
}







#define CIRCLE_N   20
#define RDX         5
#define RDY         5

void random_circle(void);
void loop02(void) {

    int n = 1000;
    for (int i = 0; i < n; i++) {
        random_circle();
    }
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

void loop02_setup(void) {
    static int r = 0;

    display.setRotation(0);
    display.setRotation(r);
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

    
    r++;
    if (r >=4) r = 0;
}

void random_circle(void) {

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
    display.set_font_pos(0, 0);
    if (display.width() == 128) 
      display.print("Raspberry Pi Pico");
    else
      display.print("Raspberry\nPi Pico");

    // OLEDに転送
    display.display(); 
    sleep_ms(10);
}

int rnd(int a) {
    return (rand() % a);
}
