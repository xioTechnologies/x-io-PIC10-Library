/**
 * @file UartTX.h
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

void UartTXByte(const uint8_t byte);
void UartTXString(const char* string);

#endif

//------------------------------------------------------------------------------
// End of file
