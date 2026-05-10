/**
 * @file UartTx.h
 * @author Seb Madgwick
 * @brief UART transmission for PIC10 devices.
 */

#ifndef UART_TX_H
#define UART_TX_H

//------------------------------------------------------------------------------
// Includes

#include <stdint.h>

//------------------------------------------------------------------------------
// Function declarations

void UartTxByte(const uint8_t byte);
void UartTxString(const char* string);

#endif

//------------------------------------------------------------------------------
// End of file
