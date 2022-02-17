/**
 *    Raspberry Pi Pico pico-sdk LCD SSD1306 font print Library (C++)
 *    Demo Program
 *                                     https://twitter.com/yama23238
 * このプログラムは
 * https://github.com/raspberrypi/pico-examples/blob/master/spi/bme280_spi/bme280_spi.c
 * を元にして作られています。
 *
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "pico/binary_info.h"
#include "print_GFX_SSD1306.h"
#include "glcdfont.h"
#include "glcdfont_tt14.h"


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

#define BME280_I2C_SDA          4
#define BME280_I2C_SCL          5
#define BME280_I2C_PORT         i2c0
#define BME280_DEVICE_ADDRESS   0x76    // 0x77の場合もあります。

#define SSD1306_SCREEN_WIDTH 128   // OLED display width, in pixels
#define SSD1306_SCREEN_HEIGHT 64   // OLED display height, in pixels

#define MODE_SLEEP 0b00
#define MODE_FORCED 0b01
#define MODE_NORMAL 0b11



print_GFX_SSD1306 display = print_GFX_SSD1306(SSD1306_SCREEN_WIDTH, SSD1306_SCREEN_HEIGHT, SSD1306_I2C_PORT);

/*
print_GFX_SSD1306 display = print_GFX_SSD1306(SSD1306_SCREEN_WIDTH, SSD1306_SCREEN_HEIGHT, SSD1306_SPI_PORT, SSD1306_SPI_DC, SSD1306_SPI_RST, SSD1306_SPI_CS);
*/

glcdfont glcdfont01 = glcdfont();
glcdfont_tt14 glcdfont_tt14_01 = glcdfont_tt14();


void i2c_write_byte_non_regster(i2c_inst_t *i2c_port, int addr, uint8_t val);
void i2c_write_byte(i2c_inst_t *i2c_port, int addr, uint8_t reg, uint8_t val);
void i2c_write_half_word_little(i2c_inst_t *i2c_port, int addr, uint8_t reg, uint16_t val);
void i2c_write_half_word_big(i2c_inst_t *i2c_port, int addr, uint8_t reg, uint16_t val);
uint8_t i2c_read_byte(i2c_inst_t *i2c_port, int addr, uint8_t reg);
uint16_t i2c_read_half_word_little(i2c_inst_t *i2c_port, int addr, uint8_t reg);
uint16_t i2c_read_half_word_big(i2c_inst_t *i2c_port, int addr, uint8_t reg);
void i2c_read_buf(i2c_inst_t *i2c_port, int addr, uint8_t reg, uint8_t *buf, int16_t len);

void read_compensation_parameters(i2c_inst_t *i2c_port, uint8_t i2c_address);
int32_t compensate_temp(int32_t adc_T);
uint32_t compensate_pressure(int32_t adc_P);
uint32_t compensate_humidity(int32_t adc_H);
int32_t bme280_read_raw_pressure(i2c_inst_t *i2c_port, uint8_t i2c_address);
int32_t bme280_read_raw_temperature(i2c_inst_t *i2c_port, uint8_t i2c_address);
int32_t bme280_read_raw_humidity(i2c_inst_t *i2c_port, uint8_t i2c_address);
static void bme280_read_raw(i2c_inst_t *i2c_port, uint8_t i2c_address, int32_t *humidity, int32_t *pressure, int32_t *temperature);
bool bme280_isMeasuring(i2c_inst_t *i2c_port, uint8_t i2c_address);
void bme280_setMode(i2c_inst_t *i2c_port, uint8_t i2c_address, uint8_t mode);
void bme280_setStandbyTime(i2c_inst_t *i2c_port, uint8_t i2c_address, uint8_t timeSetting);
void bme280_setFilter(i2c_inst_t *i2c_port, uint8_t i2c_address, uint8_t filterSetting);

int main() {
    stdio_init_all();

    i2c_init(SSD1306_I2C_PORT, 400000);   // I2C clock 400kHz
    gpio_set_function(SSD1306_SDA, GPIO_FUNC_I2C);
    gpio_set_function(SSD1306_SCL, GPIO_FUNC_I2C);
    gpio_pull_up(SSD1306_SDA);
    gpio_pull_up(SSD1306_SCL);

/*
    spi_init(SSD1306_SPI_PORT, 8000000);  // SPI clock 8MHz
    gpio_set_function(SSD1306_SPI_SCK, GPIO_FUNC_SPI);
    gpio_set_function(SSD1306_SPI_MOSI, GPIO_FUNC_SPI);
    gpio_pull_up(SSD1306_SPI_SCK);
    gpio_pull_up(SSD1306_SPI_MOSI);
    spi_set_format(SSD1306_SPI_PORT, 8, SPI_CPOL_0, SPI_CPHA_0, SPI_MSB_FIRST);   // SPI MODE0, MSBFIRST
*/

    display.oled_setup(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);

/*
    display.oled_setup(SSD1306_SWITCHCAPVCC);
*/
    display.set_font(&glcdfont_tt14_01);
    display.set_font_pos(0,  0);
    display.fillScreen(SSD1306_BLACK);
    display.display();




    printf("Hello, bme280! Reading raw data from registers via I2C...\n");

    // This example will use I2C0 at 400kHz.
    i2c_init(BME280_I2C_PORT, 400 * 1000);   // I2C clock 400kHz
    gpio_set_function(BME280_I2C_SDA, GPIO_FUNC_I2C);
    gpio_set_function(BME280_I2C_SCL, GPIO_FUNC_I2C);
    gpio_pull_up(BME280_I2C_SDA);
    gpio_pull_up(BME280_I2C_SCL);

    // Make the I2C pins available to picotool
    bi_decl( bi_2pins_with_func(4, 5, GPIO_FUNC_I2C));

    // BME280 Reset
    i2c_write_byte(BME280_I2C_PORT, BME280_DEVICE_ADDRESS, (uint8_t)0xE0, (uint8_t)0xB6);
    sleep_ms(100);

    // interrograte the device for its I2C ID number
    uint8_t id;
    id = i2c_read_byte(BME280_I2C_PORT, BME280_DEVICE_ADDRESS, (uint8_t)0xD0);
    printf("Chip ID is 0x%x\n", id);

    read_compensation_parameters(BME280_I2C_PORT, BME280_DEVICE_ADDRESS);

    i2c_write_byte(BME280_I2C_PORT, BME280_DEVICE_ADDRESS, (uint8_t)0xF2, (uint8_t)0x1); // Humidity oversampling register - going for x1
    i2c_write_byte(BME280_I2C_PORT, BME280_DEVICE_ADDRESS, (uint8_t)0xF4, (uint8_t)0x27);// Set rest of oversampling modes and run mode to normal
    bme280_setStandbyTime(BME280_I2C_PORT, BME280_DEVICE_ADDRESS, 0);
    bme280_setFilter(BME280_I2C_PORT, BME280_DEVICE_ADDRESS, 0);
    bme280_setMode(BME280_I2C_PORT, BME280_DEVICE_ADDRESS, MODE_SLEEP);

    int32_t humidity, pressure, temperature;

    while (1) {
        bme280_setMode(BME280_I2C_PORT, BME280_DEVICE_ADDRESS, MODE_FORCED);
        while (!bme280_isMeasuring(BME280_I2C_PORT, BME280_DEVICE_ADDRESS)) sleep_ms(1);  // Wait before the start of measurement
        while ( bme280_isMeasuring(BME280_I2C_PORT, BME280_DEVICE_ADDRESS)) sleep_ms(1);  // Wait during a measurement

        bme280_read_raw(BME280_I2C_PORT, BME280_DEVICE_ADDRESS, &humidity, &pressure, &temperature);

        // These are the raw numbers from the chip, so we need to run through the
        // compensations to get human understandable numbers
        pressure = compensate_pressure(pressure);
        temperature = compensate_temp(temperature);
        humidity = compensate_humidity(humidity);

        printf("Humidity : %.2f%%\r\n", humidity / 1024.0);
        printf("Pressure : %.2fhPa\r\n", pressure / 100.0);
        printf("Temp     : %.2fC\r\n", temperature / 100.0);
        printf("\n");

        display.fillScreen(SSD1306_BLACK);
        display.set_font_pos(0, 0);
        display.set_font(&glcdfont01);
        display.word_print("Raspberry Pi pico\n");
        display.set_font(&glcdfont_tt14_01);
        display.printf("Humidity : %.2f%%\n", humidity / 1024.0);
        display.printf("Press : %.2fhPa\n", pressure / 100.0);
        display.printf("Temp  : %.2fC\n", temperature / 100.0);
        display.display();


        sleep_ms(1000);
    }

    return 0;
}



int32_t t_fine;

uint16_t dig_T1;
int16_t dig_T2, dig_T3;
uint16_t dig_P1;
int16_t dig_P2, dig_P3, dig_P4, dig_P5, dig_P6, dig_P7, dig_P8, dig_P9;
uint8_t dig_H1, dig_H3;
int8_t dig_H6;
int16_t dig_H2, dig_H4, dig_H5;

int32_t compensate_temp(int32_t adc_T) {
    int32_t var1, var2, T;
    var1 = ((((adc_T >> 3) - ((int32_t) dig_T1 << 1))) * ((int32_t) dig_T2)) >> 11;
    var2 = (((((adc_T >> 4) - ((int32_t) dig_T1)) * ((adc_T >> 4) - ((int32_t) dig_T1))) >> 12) * ((int32_t) dig_T3))
            >> 14;

    t_fine = var1 + var2;
    T = (t_fine * 5 + 128) >> 8;
    return T;
}

uint32_t compensate_pressure(int32_t adc_P) {
    int32_t var1, var2;
    uint32_t p;
    var1 = (((int32_t) t_fine) >> 1) - (int32_t) 64000;
    var2 = (((var1 >> 2) * (var1 >> 2)) >> 11) * ((int32_t) dig_P6);
    var2 = var2 + ((var1 * ((int32_t) dig_P5)) << 1);
    var2 = (var2 >> 2) + (((int32_t) dig_P4) << 16);
    var1 = (((dig_P3 * (((var1 >> 2) * (var1 >> 2)) >> 13)) >> 3) + ((((int32_t) dig_P2) * var1) >> 1)) >> 18;
    var1 = ((((32768 + var1)) * ((int32_t) dig_P1)) >> 15);
    if (var1 == 0)
        return 0;

    p = (((uint32_t) (((int32_t) 1048576) - adc_P) - (var2 >> 12))) * 3125;
    if (p < 0x80000000)
        p = (p << 1) / ((uint32_t) var1);
    else
        p = (p / (uint32_t) var1) * 2;

    var1 = (((int32_t) dig_P9) * ((int32_t) (((p >> 3) * (p >> 3)) >> 13))) >> 12;
    var2 = (((int32_t) (p >> 2)) * ((int32_t) dig_P8)) >> 13;
    p = (uint32_t) ((int32_t) p + ((var1 + var2 + dig_P7) >> 4));

    return p;
}

uint32_t compensate_humidity(int32_t adc_H) {
    int32_t v_x1_u32r;
    v_x1_u32r = (t_fine - ((int32_t) 76800));
    v_x1_u32r = (((((adc_H << 14) - (((int32_t) dig_H4) << 20) - (((int32_t) dig_H5) * v_x1_u32r)) +
    ((int32_t) 16384)) >> 15) * (((((((v_x1_u32r * ((int32_t) dig_H6)) >> 10) * (((v_x1_u32r *
    ((int32_t) dig_H3)) >> 11) + ((int32_t) 32768))) >> 10) + ((int32_t) 2097152)) *
    ((int32_t) dig_H2) + 8192) >> 14));
    v_x1_u32r = (v_x1_u32r - (((((v_x1_u32r >> 15) * (v_x1_u32r >> 15)) >> 7) * ((int32_t) dig_H1)) >> 4));
    v_x1_u32r = (v_x1_u32r < 0 ? 0 : v_x1_u32r);
    v_x1_u32r = (v_x1_u32r > 419430400 ? 419430400 : v_x1_u32r);

    return (uint32_t) (v_x1_u32r >> 12);
}


/* This function reads the manufacturing assigned compensation parameters from the device */
void read_compensation_parameters(i2c_inst_t *i2c_port, uint8_t i2c_address) {
    uint8_t buffer[26];

    i2c_read_buf(i2c_port, i2c_address, (uint8_t)0x88, buffer, 24);

    dig_T1 = buffer[0] | (buffer[1] << 8);
    dig_T2 = buffer[2] | (buffer[3] << 8);
    dig_T3 = buffer[4] | (buffer[5] << 8);

    dig_P1 = buffer[6] | (buffer[7] << 8);
    dig_P2 = buffer[8] | (buffer[9] << 8);
    dig_P3 = buffer[10] | (buffer[11] << 8);
    dig_P4 = buffer[12] | (buffer[13] << 8);
    dig_P5 = buffer[14] | (buffer[15] << 8);
    dig_P6 = buffer[16] | (buffer[17] << 8);
    dig_P7 = buffer[18] | (buffer[19] << 8);
    dig_P8 = buffer[20] | (buffer[21] << 8);
    dig_P9 = buffer[22] | (buffer[23] << 8);

    dig_H1 = i2c_read_byte(i2c_port, i2c_address, (uint8_t)0xA1);

    i2c_read_buf(i2c_port, i2c_address, (uint8_t)0xE1, buffer, 7);

    dig_H2 = buffer[0] | ((int16_t)buffer[1] << 8);
    dig_H3 = (int8_t) buffer[2];
    dig_H4 = (int16_t)buffer[3] << 4 | (buffer[4] & 0xf);
    dig_H5 = ((buffer[4] >> 4) & 0x0f) | ((int16_t)buffer[5] << 4);
    dig_H6 = (int8_t) buffer[6];
}

static void bme280_read_raw(i2c_inst_t *i2c_port, uint8_t i2c_address, int32_t *humidity, int32_t *pressure, int32_t *temperature) {
    uint8_t buffer[8];

    i2c_read_buf(i2c_port, i2c_address, (uint8_t)0xF7, buffer, 8);
    *pressure = ((uint32_t) buffer[0] << 12) | ((uint32_t) buffer[1] << 4) | ((uint32_t)buffer[2] >> 4);
    *temperature = ((uint32_t) buffer[3] << 12) | ((uint32_t) buffer[4] << 4) | ((uint32_t)buffer[5] >> 4);
    *humidity = ((uint32_t) buffer[6] << 8) | ((uint32_t)buffer[7]);
}

int32_t bme280_read_raw_pressure(i2c_inst_t *i2c_port, uint8_t i2c_address) {
    uint8_t buffer[3];
    int32_t pressure;

    i2c_read_buf(i2c_port, i2c_address, (uint8_t)0xF7, buffer, 3);
    pressure = ((uint32_t) buffer[0] << 12) | ((uint32_t) buffer[1] << 4) | ((uint32_t)buffer[2] >> 4);
    return pressure;
}

int32_t bme280_read_raw_temperature(i2c_inst_t *i2c_port, uint8_t i2c_address) {
    uint8_t buffer[3];
    int32_t temperature;

    i2c_read_buf(i2c_port, i2c_address, (uint8_t)0xFA, buffer, 3);
    temperature = ((uint32_t) buffer[0] << 12) | ((uint32_t) buffer[1] << 4) | ((uint32_t)buffer[2] >> 4);
    return temperature;
}

int32_t bme280_read_raw_humidity(i2c_inst_t *i2c_port, uint8_t i2c_address) {
    uint8_t buffer[3];
    int32_t humidity;

    i2c_read_buf(i2c_port, i2c_address, (uint8_t)0xFD, buffer, 2);
    humidity = ((uint32_t) buffer[0] << 8) | ((uint32_t)buffer[1]);
    return humidity;
}

void i2c_write_byte_non_regster(i2c_inst_t *i2c_port, int addr, uint8_t val) {
    i2c_write_blocking(i2c_port, addr, &val, 1, false);
}

void i2c_write_byte(i2c_inst_t *i2c_port, int addr, uint8_t reg, uint8_t val) {
    uint8_t buf[2];
    buf[0] = reg;
    buf[1] = val;
    i2c_write_blocking(i2c_port, addr, buf, 2, false);
}

void i2c_write_half_word_little(i2c_inst_t *i2c_port, int addr, uint8_t reg, uint16_t val) {
    uint8_t buf[3];
    buf[0] = reg;
    buf[1] = (uint8_t)(val & 0x00ff);
    buf[2] = (uint8_t)((val >> 8) & 0x00ff);
    i2c_write_blocking(i2c_port, addr, buf, 3, false);
}

void i2c_write_half_word_big(i2c_inst_t *i2c_port, int addr, uint8_t reg, uint16_t val) {
    uint8_t buf[3];
    buf[0] = reg;
    buf[1] = (uint8_t)((val >> 8) & 0x00ff);
    buf[2] = (uint8_t)(val & 0x00ff);
    i2c_write_blocking(i2c_port, addr, buf, 3, false);
}

uint8_t i2c_read_byte(i2c_inst_t *i2c_port, int addr, uint8_t reg) {
    uint8_t buf;
    i2c_write_blocking(i2c_port, addr, &reg, 1, true);
    i2c_read_blocking(i2c_port, addr, &buf, 1, false);  // False - finished with bus
    return buf;
}

uint16_t i2c_read_half_word_little(i2c_inst_t *i2c_port, int addr, uint8_t reg) {
    uint8_t buf[2];
    uint16_t ret;
    i2c_write_blocking(i2c_port, addr, &reg, 1, true);
    i2c_read_blocking(i2c_port, addr, buf, 2, false);  // False - finished with bus

    ret = (uint16_t)(((uint16_t)buf[1] << 8) | (uint16_t)buf[0]);
    return ret;
}

uint16_t i2c_read_half_word_big(i2c_inst_t *i2c_port, int addr, uint8_t reg) {
    uint8_t buf[2];
    uint16_t ret;
    i2c_write_blocking(i2c_port, addr, &reg, 1, true);
    i2c_read_blocking(i2c_port, addr, buf, 2, false);  // False - finished with bus

    ret = (uint16_t)(((uint16_t)buf[0] << 8) | (uint16_t)buf[1]);
    return ret;
}

void i2c_read_buf(i2c_inst_t *i2c_port, int addr, uint8_t reg, uint8_t *buf, int16_t len) {

    i2c_write_blocking(i2c_port, addr, &reg, 1, true);
    i2c_read_blocking(i2c_port, addr, buf, len, false);  // False - finished with bus
}

bool bme280_isMeasuring(i2c_inst_t *i2c_port, uint8_t i2c_address) {
	uint8_t stat = i2c_read_byte(i2c_port, i2c_address, (uint8_t)0xF3);
	return(stat & (1<<3)); 
}


//Set the mode bits in the ctrl_meas register
// Mode 00 = Sleep
// 01 and 10 = Forced
// 11 = Normal mode
void bme280_setMode(i2c_inst_t *i2c_port, uint8_t i2c_address, uint8_t mode) {
	if(mode > 0b11) mode = 0; 
	
	uint8_t controlData = i2c_read_byte(i2c_port, i2c_address, (uint8_t)0xF4);
	controlData &= ~( (1<<1) | (1<<0) ); //Clear the mode[1:0] bits
	controlData |= mode; 
	i2c_write_byte(i2c_port, i2c_address, (uint8_t)0xF4, controlData);
}


//Set the standby bits in the config register
//tStandby can be:
//  0, 0.5ms
//  1, 62.5ms
//  2, 125ms
//  3, 250ms
//  4, 500ms
//  5, 1000ms
//  6, 10ms
//  7, 20ms
void bme280_setStandbyTime(i2c_inst_t *i2c_port, uint8_t i2c_address, uint8_t timeSetting) {
	if(timeSetting > 0b111) timeSetting = 0; 
	
	uint8_t controlData = i2c_read_byte(i2c_port, i2c_address, (uint8_t)0xF5);
	controlData &= ~( (1<<7) | (1<<6) | (1<<5) ); //Clear the 7/6/5 bits
	controlData |= (timeSetting << 5); //Align with bits 7/6/5
	i2c_write_byte(i2c_port, i2c_address, (uint8_t)0xF5, controlData);
}

//Set the filter bits in the config register
//filter can be off or number of FIR coefficients to use:
//  0, filter off
//  1, coefficients = 2
//  2, coefficients = 4
//  3, coefficients = 8
//  4, coefficients = 16
void bme280_setFilter(i2c_inst_t *i2c_port, uint8_t i2c_address, uint8_t filterSetting) {
	if(filterSetting > 0b111) filterSetting = 0; 
	
	uint8_t controlData = i2c_read_byte(i2c_port, i2c_address, (uint8_t)0xF5);
	controlData &= ~( (1<<4) | (1<<3) | (1<<2) ); //Clear the 4/3/2 bits
	controlData |= (filterSetting << 2); //Align with bits 4/3/2
        i2c_write_byte(i2c_port, i2c_address, (uint8_t)0xF5, controlData);	
}
