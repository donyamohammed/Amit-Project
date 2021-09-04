#include "BLUETOOTH.h"
#include "UART.h"



void BLUETOOTH_Init(){
	
	UART_Init();				/* Initialize UART Communication Protocol */
	
}

void BLUETOOTH_Transmit(u8 data){
	
	UART_Transmit(data);		/* Transmit Data Using UART Protocol */
}

u8 BLUETOOTH_Recieved(void){
	
	u8 data = 0 ;			/* Initialize a variable to Save the Data Coming From Bluetooth */
	data = UART_Received();		/* Receive the Data Using UART Protocol */
	
	return data;
}
