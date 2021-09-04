#include	"STD_TYPES.h"
#include	"BIT_MATH.h"

#include	"Dio_interface.h"
#include	"Dio_private.h"
void	DIO_voidSetPinDirection(u8 Port ,u8 Pin , u8 Direction )
{
	/*		Range Check				*/
	if( (Port < 4) && (Pin < 8) )
	{
		if(Direction == OUTPUT)
		{
			switch(Port)
			{
				case PORTA :	SET_BIT(DDRA_REG,Pin);	break;
				case PORTB :	SET_BIT(DDRB_REG,Pin);	break;
				case PORTC :	SET_BIT(DDRC_REG,Pin);	break;
				case PORTD :	SET_BIT(DDRD_REG,Pin);	break;
default: break;
			}
		}
		else if (Direction == INPUT)
		{
			switch(Port)
			{
				case PORTA :	CLR_BIT(DDRA_REG,Pin);	break;
				case PORTB :	CLR_BIT(DDRB_REG,Pin);	break;
				case PORTC :	CLR_BIT(DDRC_REG,Pin);	break;
				case PORTD :	CLR_BIT(DDRD_REG,Pin);	break;
	default: break;		}			
		}
				
	}
}
void	DIO_voidSetPinValue(u8 Port ,u8 Pin , u8 Value )
{
	/*		Range Check				*/
	if( (Port < 4) && (Pin < 8) )
	{
		if(Value == HIGH)
		{
			switch(Port)
			{
				case PORTA :	SET_BIT(PORTA_REG,Pin);	break;
				case PORTB :	SET_BIT(PORTB_REG,Pin);	break;
				case PORTC :	SET_BIT(PORTC_REG,Pin);	break;
				case PORTD :	SET_BIT(PORTD_REG,Pin);	break;
		default: break;	}
		}
		else if (Value == LOW)
		{
			switch(Port)
			{
				case PORTA :	CLR_BIT(PORTA_REG,Pin);	break;
				case PORTB :	CLR_BIT(PORTB_REG,Pin);	break;
				case PORTC :	CLR_BIT(PORTC_REG,Pin);	break;
				case PORTD :	CLR_BIT(PORTD_REG,Pin);	break;
		default: break;	}			
		}
				
	}	
}
u8		DIO_u8GetPinValue(u8 Port , u8 Pin)
{
	u8 Local_u8Value = 0xFF;
	/*		Range Check				*/
	if( (Port < 4) && (Pin < 8) )
	{
			switch(Port)
			{
				case PORTA :	Local_u8Value	=	GET_BIT(PINA_REG,Pin);	break;
				case PORTB :	Local_u8Value	=	GET_BIT(PINB_REG,Pin);	break;
				case PORTC :	Local_u8Value	=	GET_BIT(PINC_REG,Pin);	break;
				case PORTD :	Local_u8Value	=	GET_BIT(PIND_REG,Pin);	break;
			}		
	}		
	return Local_u8Value ;
}


void	DIO_voidSetPortDirection(u8 Port , u8 Direction )
{
	/*Range Check */
	if(Port < 4)
	{
		switch (Port)
		{
			case PORTA : DDRA_REG = Direction; break;
			case PORTB : DDRB_REG = Direction; break;
			case PORTC : DDRC_REG = Direction; break;
			case PORTD : DDRD_REG = Direction; break;
default:break;
		}
	}

}
void	DIO_voidSetPortValue(u8 Port , u8 Value )
{
	/*Range Check */
	if(Port < 4)
	{
		switch (Port)
		{
			case PORTA : PORTA_REG = Value; break;
			case PORTB : PORTB_REG = Value; break;
			case PORTC : PORTC_REG = Value; break;
			case PORTD : PORTD_REG = Value; break;
default: break;
		}
	}
}
void DIO_SET_PULLUP(u8 Port,u8 Pin){
	
	switch(Port){
		case PORTA:			
		SET_BIT(PORTA,Pin);		
		break;
		case PORTB:			
		SET_BIT(PORTB,Pin);		
		break;
		case PORTC:			
		SET_BIT(PORTC,Pin);		
		break;
		case PORTD:			
		SET_BIT(PORTD,Pin);		
		break;
	}
	
	
}
void DIO_TglPin_Vlaue(u8 Port, u8 Pin){
	
	switch(Port){
		case PORTA:			
		TGL_BIT(PORTA,Pin);			
		break;
		case PORTB:				
		TGL_BIT(PORTB,Pin);			
		break;
		case PORTC:				
		TGL_BIT(PORTC,Pin);			
		break;
		case PORTD:				
		TGL_BIT(PORTD,Pin);			
		break;
	}
}