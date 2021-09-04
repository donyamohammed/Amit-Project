#include "SPI.h"

void SPI_Init(void){
	
	#if SPI_MODE == MASTER		
	SET_BIT(SPI_PORT, MOSI);		/* Set Master Output Slave Input */
	CLR_BIT(SPI_PORT, MISO);		/* clear Master Input Slave Output */
	SET_BIT(SPI_PORT, CLK);			
	SET_BIT(SPI_PORT, SS);
	sei();							/* Enable Global Interrupt		 */
	SPCR = 0xD3 ;					
	SET_BIT(SPCR,SPIE);				/* Enable SPI Interrupt	Enable   */
	SET_BIT(SPCR,SPE);				/* Enable SPI Interrupt			 */
	
	
	
	#elif SPI_MODE == SLAVE	
	CLR_BIT(SPI_PORT, MOSI);
	SET_BIT(SPI_PORT, MISO);
	CLR_BIT(SPI_PORT, CLK);
	CLR_BIT(SPI_PORT, SS);
	SPCR = 0x43;
	#endif
	
}

void SPI_Transmit(u8 data)
{
	
	SPDR = data ;
}
u8 SPI_Received(void){
	
	
	while(GET_BIT(SPSR, SPIF) != 1); 
	return SPDR;
}