#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define USB_VID            0x303A
#define USB_PID            0x700D
#define USB_MANUFACTURER   "Kittenbot"
#define USB_PRODUCT        "Kittenbot SugarCam S3"
#define USB_SERIAL         ""

#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        48
#define NUM_ANALOG_INPUTS       20

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<48)?(p):-1)
#define digitalPinHasPWM(p)         (p < 46)


#define PIN_NEOPIXEL        14
#define NEOPIXEL_NUM        2     // number of neopixels

static const uint8_t LED_BUILTIN = SOC_GPIO_PIN_COUNT+PIN_NEOPIXEL;
#define BUILTIN_LED  LED_BUILTIN // backward compatibility
#define LED_BUILTIN  LED_BUILTIN
#define RGB_BUILTIN  LED_BUILTIN
#define RGB_BRIGHTNESS 64


static const uint8_t TX = 43;
static const uint8_t RX = 44;
#define TX1 TX
#define RX1 RX

static const uint8_t SDA = 4;
static const uint8_t SCL = 5;

// camera
static const uint8_t CAM_VSYNC = 6;
static const uint8_t CAM_HREF  = 7;
static const uint8_t CAM_PCLK  = 13;
static const uint8_t CAM_XCLK  = 15;
// cam data
static const uint8_t Y2 = 11;
static const uint8_t Y3 = 9;
static const uint8_t Y4 = 8;
static const uint8_t Y5 = 10;
static const uint8_t Y6 = 12;
static const uint8_t Y7 = 18;
static const uint8_t Y8 = 17;
static const uint8_t Y9 = 16;

#define Y9_GPIO_NUM 16
#define Y8_GPIO_NUM 17
#define Y7_GPIO_NUM 18
#define Y6_GPIO_NUM 12
#define Y5_GPIO_NUM 10
#define Y4_GPIO_NUM 8
#define Y3_GPIO_NUM 9
#define Y2_GPIO_NUM 11

#define XCLK_GPIO_NUM 15
#define PCLK_GPIO_NUM 13
#define VSYNC_GPIO_NUM 6
#define HREF_GPIO_NUM 7

#define SIOD_GPIO_NUM     SDA
#define SIOC_GPIO_NUM     SCL

#define PWDN_GPIO_NUM     -1
#define RESET_GPIO_NUM    -1


// SD card
static const uint8_t SD_CMD   = 38;
static const uint8_t SD_CLK   = 39;
static const uint8_t SD_DATA  = 40;
static const uint8_t SD_DATA3 = 42;

// MIC
static const uint8_t MIC_DATA = 2;
static const uint8_t MIC_CLK  = 41;

// PDM audio
static const uint8_t PDM_DATA = 3;
// Speaker enable
static const uint8_t SPK_EN = 1;

// button
static const uint8_t BUTTON_A = 0;
static const uint8_t BUTTON_B = 21;


#endif /* Pins_Arduino_h */
