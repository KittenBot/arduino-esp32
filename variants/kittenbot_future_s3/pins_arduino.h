#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define USB_VID            0x303A
#define USB_PID            0x700E
#define USB_MANUFACTURER   "Kittenbot"
#define USB_PRODUCT        "Kittenbot Future S3"
#define USB_SERIAL         ""

#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        48
#define NUM_ANALOG_INPUTS       20

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<48)?(p):-1)
#define digitalPinHasPWM(p)         (p < 46)


#define PIN_NEOPIXEL        3
#define NEOPIXEL_NUM        3     // number of neopixels

static const uint8_t LED_BUILTIN = SOC_GPIO_PIN_COUNT+PIN_NEOPIXEL;
#define BUILTIN_LED  LED_BUILTIN // backward compatibility
#define LED_BUILTIN  LED_BUILTIN
#define RGB_BUILTIN  LED_BUILTIN
#define RGB_BRIGHTNESS 64

#define TFT_CS         38
#define TFT_DC         47
#define TFT_RST        21

static const uint8_t TX = 43;
static const uint8_t RX = 44;
#define TX1 TX
#define RX1 RX

static const uint8_t SDA = 2;
static const uint8_t SCL = 1;

// tft
static const uint8_t TFT_BL = 10;
static const uint8_t TFT_CS = 46;
static const uint8_t TFT_DC = 12;

// spi for tft
static const uint8_t MOSI = 48;
static const uint8_t SCK = 45;

// mic
static const uint8_t MIC_DAT = 41;
static const uint8_t MIC_CLK = 39;

// ADCs
static const uint8_t LUMI = 11;

// buttons
static const uint8_t BTNA = 15;
static const uint8_t BTNB = 16;
static const uint8_t BTNC = 42;

// extension port
static const uint8_t P1 = 4;
static const uint8_t P2 = 5;
static const uint8_t P3 = 7;
static const uint8_t P4 = 6;

// motor
static const uint8_t M1BP = 13;
static const uint8_t M1BN = 14;
static const uint8_t M1AP = 21;
static const uint8_t M1AN = 47;

// uart1
static const uint8_t TX1 = 17;
static const uint8_t RX1 = 18;

// buzzer
static const uint8_t BUZZ = 8;



#endif /* Pins_Arduino_h */
