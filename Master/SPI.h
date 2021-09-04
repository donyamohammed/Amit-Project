#ifndef SPI_H_
#define SPI_H_

#include "SPI_CONFIG.h"

void SPI_Init(void);
void SPI_Transmit(u8 data);
u8 SPI_Received(void);


#endif