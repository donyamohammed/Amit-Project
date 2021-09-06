#include "UART.h"

void UART_Init(void){
		
	u16 UBBR_Val = 0;
	UCSRB = (1 << RXEN) | (1 << TXEN);						/* Enable Transmitter and Receiver bits */
	UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0);		/* 8-bits number of data in a frame		*/
	UBBR_Val = (((FRQ) / (16 * BAUDRATE))-1);				/* Baudrate calculations */
	UBRRL = UBBR_Val;
	UBRRH = UBBR_Val >> 8;

	sei();													/* Enable Global Interrupt */
	SET_BIT(UCSRB,RXCIE);									/* Enable UART RX Complete Interrupt Enable */
}

void UART_Transmit(u8 data){
	
	UDR = data;												/* sent data to UDR */
	while (GET_BIT(UCSRA,TXC) != 1);						/* wait until there are no new data currently present */ 
}

u8 UART_Received(void){
	
	return UDR;
}