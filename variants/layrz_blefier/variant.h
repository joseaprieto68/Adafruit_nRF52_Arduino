#ifndef _LAYRZ_BLEFIER_H_
#define _LAYRZ_BLEFIER_H_

#define TARGET_LAYRZ_BLEFIER

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
//#define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

#define PINS_COUNT           (20)
#define NUM_DIGITAL_PINS     (20)
#define NUM_ANALOG_INPUTS    (7)
#define NUM_ANALOG_OUTPUTS   (0)

// NOTE:
//
// BATTERY VOLTAGE IS READ VIA VDDH/5 BY CALLING
//
// analogReadVDDHDIV5() // returns uint32_t

// 3V3 Regulator Disable
#define PIN_EXT_VCC          (15) // EXT_VCC is P0.13 (set low to disable 3v3)
#define EXT_VCC              (PIN_EXT_VCC)

// LEDs
#define PIN_LED              (16) // USR LED is P0.15
#define LED_PWR              (PINS_COUNT) // no LED_PWR
#define PIN_NEOPIXEL         (PINS_COUNT) // no neopixel
#define NEOPIXEL_NUM         0
#define LED_BLUE             PIN_LED // required by bluefruit library

#define LED_BUILTIN          PIN_LED

#define LED_STATE_ON         1         // State when LED is on

#define PIN_VBAT             (14) // P0.04 (VBAT) - reads battery voltage

// Buttons
#define PIN_BUTTON1          (PINS_COUNT) // no button

// light sensor address
#define PIN_LIGHT_ADDR       (17) // P0.21 (LIGHT_ADDR)

// Accelerometer interrupt pins
#define PIN_ACC_INT1         (18) // P0.27 (ACC_INT1)
#define PIN_ACC_INT2         (19) // P0.26 (ACC_INT2)


// BLEFIER PINs

#define D0 (0ul) // P0.28 (AIN0)
#define D1 (1ul) // P0.29 (AIN1)
#define D2 (2ul) // P0.30 (AIN2)
#define D3 (3ul) // P0.31 (AIN3)
#define D4 (4ul) // P0.03 (CIN0 - 4-20mA)
#define D5 (5ul) // P0.02 (CIN1 - 4-20mA)
#define D6 (6ul) // P0.06 (DIN0_UART_TX)
#define D7 (7ul) // P0.08 (DIN1_UART_RX)
#define D8 (8ul) // P1.00 (SDA)
#define D9 (9ul) // P0.11 (SCL)
#define D10 (10ul) // P0.17 (DIN2_SPI_SCK)
#define D11 (11ul) // P0.20 (DIN3_SPI_MISO)
#define D12 (12ul) // P0.22 (DIN4_SPI_MOSI)
#define D13 (13ul) // P0.24 (DIN5_SPI_CS)
#define D14 (14ul) // P0.04 (VBAT)
#define D15 (15ul) // P0.13 (EXT_VCC)
#define D16 (16ul) // P0.15 (LED)
#define D17 (17ul) // P0.21 (LIGHT_ADDR)
#define D18 (18ul) // P0.27 (ACC_INT1)
#define D19 (19ul) // P0.26 (ACC_INT2)


/*
 * Macros for nRF pin numbers for compatibility
 */

#define P0_28 (D0)
#define P0_29 (D1)
#define P0_30 (D2)
#define P0_31 (D3)
#define P0_03 (D4)
#define P0_02 (D5)
#define P0_06 (D6)
#define P0_08 (D7)
#define P1_00 (D8)
#define P0_11 (D9)
#define P0_17 (D10)
#define P0_20 (D11)
#define P0_22 (D12)
#define P0_24 (D13)
#define P0_04 (PIN_VBAT)
#define P0_13 (PIN_EXT_VCC)
#define P0_15 (PIN_LED)
#define P0_21 (PIN_LIGHT_ADDR)
#define P0_27 (PIN_ACC_INT1)
#define P0_26 (PIN_ACC_INT2)

// Analog pins
#define PIN_AIN0               (0) // P0.28 (D0)
#define PIN_AIN1               (1) // P0.29 (D1)
#define PIN_AIN2               (2) // P0.30 (D2)
#define PIN_AIN3               (3) // P0.31 (D3)
#define PIN_AIN4               (4) // P0.03 (D4) - 4-20mA
#define PIN_AIN5               (5) // P0.02 (D5) - 4-20mA

static const uint8_t A0  = PIN_AIN0 ;
static const uint8_t A1  = PIN_AIN1 ;
static const uint8_t A2  = PIN_AIN2 ;
static const uint8_t A3  = PIN_AIN3 ;
static const uint8_t A4  = PIN_AIN4 ;
static const uint8_t A5  = PIN_AIN5 ;

#define ADC_RESOLUTION    14

// Digital inputs
#define PIN_DIN0    (6) // P0.06 (D6)
#define PIN_DIN1    (7) // P0.08 (D7)
#define PIN_DIN2    (10) // P0.17 (D10)
#define PIN_DIN3    (11) // P0.20 (D11)
#define PIN_DIN4    (12) // P0.22 (D12)
#define PIN_DIN5    (13) // P0.24 (D13)


/*
 * Serial interfaces
 */
#define PIN_SERIAL1_TX       (6) // P0.06 - also DIN0
#define PIN_SERIAL1_RX       (7) // P0.08 - also DIN

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_SCK          (10) // P0.17 - D10
#define PIN_SPI_MISO         (11) // P0.20 - D11
#define PIN_SPI_MOSI         (12) // P0.22 - D12
#define PIN_SPI_CS           (13) // P0.24 - D13

static const uint8_t CS   = PIN_SPI_CS;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (8) // P1.00 - D8
#define PIN_WIRE_SCL         (9) // P0.11 - D9

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;


#ifdef __cplusplus
}
#endif

#endif
