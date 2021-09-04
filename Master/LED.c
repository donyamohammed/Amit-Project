
#include "Led.h"

void LED0_Init(void){
		
	DIO_voidSetPinDirection(LED0_PORT, LED0_PIN, LED_OUTPUT); 
}

void LED0_ON  (void){
	
	DIO_voidSetPinValue(LED0_PORT, LED0_PIN,LED_HIGH);			
}
void LED0_OFF (void){
	
	DIO_voidSetPinValue(LED0_PORT, LED0_PIN, LED_LOW);			
}

void LED0_TGL (void){
	
	DIO_TglPin_Vlaue(LED0_PORT, LED0_PIN);					
}




void LED1_Init(void){
	
	DIO_voidSetPinDirection(PORTC, LED1_PIN, LED_OUTPUT);	

}
void LED1_ON  (void){
		
	DIO_voidSetPinValue(PORTC, LED1_PIN, LED_HIGH);		
void LED1_OFF (void){
	
	DIO_voidSetPinValue(PORTC, LED1_PIN, LED_LOW);		
}
void LED1_TGL (void){
	
	DIO_TglPin_Vlaue(PORTC, PIN7);
}															





void LED2_Init(void){

	DIO_voidSetPinDirection(PORTD, LED2_PIN, LED_OUTPUT);	
}
void LED2_ON  (void){

	DIO_voidSetPinValue(PORTD, LED2_PIN, LED_HIGH);
}															
void LED2_OFF (void){

	DIO_voidSetPinDirection(PORTD, LED2_PIN, LED_LOW);
}															
void LED2_TGL (void){

	DIO_TglPin_Vlaue(PORTD, PIN3);	
}