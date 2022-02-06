cmake_minimum_required(VERSION 3.12)

# Pull in PICO SDK (must be before project)
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(print_GFX_SSD1306_demo_spi_u.cpp_project)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the SDK
pico_sdk_init()

add_executable(
       print_GFX_SSD1306_demo_spi_u    print_GFX_SSD1306_demo_spi_u.cpp
                         print_GFX_SSD1306.cpp       #print_GFX_SSD1306を使う場合は追加してください
                         yama_2_GFX.cpp
                         yama_2_GFX_SSD1306.cpp
)

target_link_libraries(   print_GFX_SSD1306_demo_spi_u
                         pico_stdlib
                         hardware_spi
                         hardware_i2c
)

pico_enable_stdio_usb(print_GFX_SSD1306_demo_spi_u 1)
pico_enable_stdio_uart(print_GFX_SSD1306_demo_spi_u 0)

pico_add_extra_outputs(print_GFX_SSD1306_demo_spi_u)

