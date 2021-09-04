#include "SPI.h"
#include "BLUETOOTH.h"
volatile u8 data ;
int main(void)
{
	BLUETOOTH_Init();
	SPI_Init();

	while (1)
	{
	}
	
	
}

ISR(USART_RXC_vect){
	
	data = BLUETOOTH_Recieved();
	SPI_Transmit(data);
	

	
}
