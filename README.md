# T-display-S3-LVGL-Platformio
A template for using the LILYGO T-Display-S3 with the ESP-IDF and LVGL in Platformio

Sample code that provides a starting point to get started with the LVGL and ESP32 library on ESP-IDF. I had found several examples but they either worked with a specific version or simply didn't work for me, so I made a base code to build on.

## Using
- PlatformIO@6.1.16 via VSCode
- ESP-IDF@5.3.1
- LVGL@9.2.2

## Considerations

The only error I have when compiling is that it does not find the `atomic.h` file called in the `lv_freertos.h` file, so I commented out the line where it is called and it worked.

## Photo

![t-display-hello-world](https://github.com/user-attachments/assets/018f0ea9-1f39-4d6b-bf40-ee0dfa5ef46b)
