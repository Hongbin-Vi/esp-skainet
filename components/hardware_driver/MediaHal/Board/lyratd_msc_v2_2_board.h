/*
 * ESPRESSIF MIT License
 *
 * Copyright (c) 2018 <ESPRESSIF SYSTEMS (SHANGHAI) PTE LTD>
 *
 * Permission is hereby granted for use on all ESPRESSIF SYSTEMS products, in which case,
 * it is free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef _AUDIO_LYRATD_MSC_V2_2_BOARD_H_
#define _AUDIO_LYRATD_MSC_V2_2_BOARD_H_
#include "driver/adc.h"
#include "driver/gpio.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Board functions related */
#define BOARD_INFO                  "ESP_LYRATD_MSC_V2_2"

#define ENABLE_ADC_BUTTON
#define ENABLE_LED_INDICATOR
#define ENABLE_KEYWORD_DETECT
#define ENABLE_AUXOUT_DETECT

// #define ENABLE_AUXIN_DETECT
// #define ENABLE_POWER_ON_DETECT
// #define ENABLE_POWER_VOLTAGE_DETECT
// #define ENABLE_ADC_VOLUME
// #define ENABLE_POWER_CHANGER_DETECT

/* SD card related */
#define SD_CARD_INTR_GPIO           34
#define SD_CARD_INTR_SEL            GPIO_SEL_34

#define SD_CARD_DATA0               2
#define SD_CARD_DATA1               4
#define SD_CARD_DATA2               12
#define SD_CARD_DATA3               13
#define SD_CARD_CMD                 15
#define SD_CARD_CLK                 14

/* Adc button pin */
#ifdef ENABLE_ADC_BUTTON
#define BUTTON_ADC_CH             ADC1_CHANNEL_3 // GPIO 39
#endif

/* Battery detect pin */

/* Power changer pin*/

/* Aux out detect pin */
#ifdef ENABLE_AUXOUT_DETECT
#define AUXOUT_DETECT_PIN           36
#endif

/* I2C gpios */
#define IIC_CLK                     23
#define IIC_DATA                    18

/* DSP Chip Microsemi zl38063 */
/* define this macro to save the firmware from RAM to flash*/
#define SAVE_IMAGE_TO_FLASH
/* define this macro to save the cfg from RAM to flash*/
#define SAVE_CFG_TO_FLASH

#define BOARD_RESET_CTRL            21
#define MICRO_SEMI_RESET_CTRL       19

#define MICRO_SEMI_SPI_CS           0
#define MICRO_SEMI_SPI_CLK          32
#define MICRO_SEMI_SPI_MOSI         33
#define MICRO_SEMI_SPI_MISO         27

/* PA */
#define GPIO_PA_EN                  22


/* I2S gpios */
#define IIS_SCLK                    5
#define IIS_LCLK                    25
#define IIS_DSIN                    26
#define IIS_DOUT                    35


#ifdef __cplusplus
}
#endif

#endif
