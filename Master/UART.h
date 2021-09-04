#ifndef UART_H_
#define UART_H_

#include "UART_CONFIG.h"

void UART_Init(void);
void UART_Transmit(u8 data);
u8 UART_Received(void);


#endif 