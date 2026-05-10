/**
 * @file UartTx.c
 * @author Seb Madgwick
 * @brief UART transmission for PIC10 devices.
 */

//------------------------------------------------------------------------------
// Includes

#include "UartTx.h"

//------------------------------------------------------------------------------
// Function declarations

void UartTx(void);

//------------------------------------------------------------------------------
// Variables

static volatile uint8_t uartData;
static volatile uint8_t uartCounter;
static volatile uint8_t uartDelay;

//------------------------------------------------------------------------------
// Functions

/**
 * @brief Transmits byte.
 * @param byte Byte.
 */
void UartTxByte(const uint8_t byte) {
    uartData = byte;
    UartTx();
}

/**
 * @brief Transmits string.
 * @param string String.
 */
void UartTxString(const char* string) {
    while (*string != '\0') {
        UartTxByte(*string++);
    }
}

//------------------------------------------------------------------------------
// End of file
