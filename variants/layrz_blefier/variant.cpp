#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
    // D0 - D3 (J3-AIN header, top to bottom)
    28, // D0 is P0.28 (D0, AIN0)
    29, // D1 is P0.29 (D1, AIN1)
    30, // D2 is P0.30 (D2, AIN2)
    31, // D3 is P0.31 (D3, AIN3)

    // D4 - D5 (J4-4-20mA header, top to bottom)
    3,  // D4 is P0.03 (D4, CIN0)
    2,  // D4 is P0.02 (D5, CIN1)

    // D6 - D7 (J5-DI_UART header, top to bottom)
    6,  // D6 is P0.06 (D6, DIN0_UART_TX)
    8,  // D7 is P0.08 (D7, DIN1_UART_RX)

    // D8 - D9 (J6-I2C header, top to bottom)
    32, // D8 is P1.00 (D8, SDA)
    11, // D9 is P0.11 (D9, SCL)

    // D10 - D13 (J7-DI_SPI header, top to bottom)
    17, // D10 is P0.17 (D10, DIN2_SPI_SCK)
    20, // D11 is P0.20 (D11, DIN3_SPI_MISO)
    22, // D12 is P0.22 (D12, DIN4_SPI_MOSI)
    24, // D13 is P0.24 (D13, DIN5_SPI_CS)

    // D14 (VBAT)
    4,  // D14 is P0.04 (VBAT)

    // D15 (EXT_VCC)
    13, // D15 is P0.13 (EXT_VCC) [active high]

    // D16 (BLUE LED)
    15, // D16 is P0.15 (BLUE LED)

    // D17 (LIGHT SENSOR ADDR)
    21, // D17 is P0.21 (LIGHt_ADDR)

    // D18 - D19(Accelerometer interrupt pins)
    27, // D18 is P0.27 (ACC_INT1)
    26, // D19 is P0.26 (ACC_INT2)
};

void initVariant()
{
    // enable EXT_VCC by default
    pinMode(EXT_VCC, OUTPUT);
    digitalWrite(EXT_VCC, HIGH);

    // enable LED by default
    // pinMode(LED_BUILTIN, OUTPUT);
    // digitalWrite(LED_BUILTIN, LOW);
}

