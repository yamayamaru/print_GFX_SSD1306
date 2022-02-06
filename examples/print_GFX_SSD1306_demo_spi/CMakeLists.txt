cmake_minimum_required(VERSION 3.12)

# Pull in PICO SDK (must be before project)
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(print_GFX_SSD1306_demo_spi.cpp_project)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the SDK
pico_sdk_init()

add_executable(
       print_GFX_SSD1306_demo_spi    print_GFX_SSD1306_demo_spi.cpp
                         print_GFX_SSD1306.cpp       #print_GFX_SSD1306を使う場合は追加してください
                         yama_2_GFX.cpp              #print_GFX_SSD1306を使う場合はyama_2_GFXも追加してください
                         yama_2_GFX_SSD1306.cpp      #print_GFX_SSD1306を使う場合はyama_2_GFX_SSD1306も追加してください
)

target_link_libraries(   print_GFX_SSD1306_demo_spi
                         pico_stdlib
                         hardware_spi
                         hardware_i2c
)

pico_enable_stdio_usb(print_GFX_SSD1306_demo_spi 1)
pico_enable_stdio_uart(print_GFX_SSD1306_demo_spi 0)

pico_add_extra_outputs(print_GFX_SSD1306_demo_spi)

