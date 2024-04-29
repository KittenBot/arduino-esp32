#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 22
#define NUM_DIGITAL_PINS        22
#define NUM_ANALOG_INPUTS       6

#define LED_BUILTIN     10
#define RGB_BUILTIN LED_BUILTIN
#define RGB_BRIGHTNESS 64

#define analogInputToDigitalPin(p)  (((p)<NUM_ANALOG_INPUTS)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<NUM_DIGITAL_PINS)?(p):-1)
#define digitalPinHasPWM(p)         (p < EXTERNAL_NUM_INTERRUPTS)

static const uint8_t TX = 21;
static const uint8_t RX = 20;

static const uint8_t SDA = 6;
static const uint8_t SCL = 7;

static const uint8_t MOTOR1 = 1;
static const uint8_t MOTOR2 = 4;
static const uint8_t BUZZER = 3;

static const uint8_t JACDAC = 5;

static const uint8_t BUTTON_A = 9;
static const uint8_t BUTTON_B = 21;

static const uint8_t PAD_1 = 2;
static const uint8_t PAD_2 = 0;


#endif /* Pins_Arduino_h */
