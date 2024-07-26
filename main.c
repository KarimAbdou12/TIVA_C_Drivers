
#include "StdTypes.h"
#include "MemMap.h"
#include "RCC_Int.h"



#define NUMBER_OF_ITERATIONS_PER_ONE_MILI_SECOND 762

void Delay_MS(unsigned long long n)
{
	volatile unsigned long long count = 0;
	while(count++ < (NUMBER_OF_ITERATIONS_PER_ONE_MILI_SECOND * n) );
}

const char arr[10]={0XFA,0X60,0XD9,0XF2,0X66,0XB6,0XBE,0XE0,0XFE,0XF6};
	
void SEVEN_SEGMENT_DISPLAY (char n)
{
	
		write_port=arr[n];
}

u8 flag=0;
void read_button(void)
{
	if(READ_BIT(port,pin)==1)
	{
		Delay_MS(30);
		if(READ_BIT(port,pin)==1)
		{
			flag++;
		}
		
	}
}


int main(void)
{
    RCC_Init();
	source=PIOSC;
//	gpio_init(portF_active);

u8 i=100;
    while (1) 
    {
		if(flag%2)
		{
			write_pin(high)
			write_pin(low)
		}
		else
		{
			write_pin(low)
			write_pin(high)
		}
		
		
		
		for(i=100;i>=0;i--)
		{
			SEVEN_SEGMENT_DISPLAY(i);
			Delay_MS(500);
		}
		i=100;
	/*	gpio_write_channel(portF,pinF1,high);
		Delay_MS(500);
		gpio_write_channel(portF,pinF1,low);*/
		
    }
}

