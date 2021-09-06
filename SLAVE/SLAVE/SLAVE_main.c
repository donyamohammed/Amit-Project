#include "LED.h"
#include "SPI.h"


volatile u8 data ;

int main(void)
{
	SPI_Init();
	LED0_Init();
	LED1_Init();
	LED2_Init();
		
	while (1)
	{
	}
}


ISR(SPI_STC_vect){
	
	data = SPI_Received();
	
	switch(data){
		case 'a':
		LED0_ON();
		_delay_ms(1000);
		LED0_OFF();
		break;
		case 'b':
		LED1_ON();
		_delay_ms(1000);
		LED1_OFF();
		break;
		case 'c':
		LED2_ON();
		_delay_ms(1000);
		LED2_OFF();
		break;
	}
	


}