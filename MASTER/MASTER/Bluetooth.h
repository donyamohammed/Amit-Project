#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

#include "Bluetooth_config.h"

void BLUETOOTH_Init();
void BLUETOOTH_Transmit(u8 data);
u8 BLUETOOTH_Recieved(void);


#endif