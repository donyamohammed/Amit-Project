#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

#include "BLUETOOTH_CONFIG.h"

void BLUETOOTH_Init();
void BLUETOOTH_Transmit(U8 data);
U8 BLUETOOTH_Recieved(void);


#endif