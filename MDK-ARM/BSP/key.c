#include "main.h"

GPIO_TypeDef *KEY_Ports[] = {R1_GPIO_Port,R2_GPIO_Port,R3_GPIO_Port,R4_GPIO_Port,C1_GPIO_Port,C2_GPIO_Port,C3_GPIO_Port,C4_GPIO_Port}; 
uint16_t KEY_Pins[]={R1_Pin,R2_Pin,R3_Pin,R4_Pin,C1_Pin,C2_Pin,C3_Pin,C4_Pin};

uint8_t KEY_Scan(void)
{
   uint8_t  i,j;
	for(i=0;i<4;i++)
	{
		HAL_GPIO_WritePin(KEY_Ports[i],KEY_Pins[i],GPIO_PIN_SET);
		for(j=0;j<4;j++)
		{
			if(HAL_GPIO_ReadPin(KEY_Ports[4+j],KEY_Pins[4+j])==1)
			{
				HAL_Delay(30);
				if(HAL_GPIO_ReadPin(KEY_Ports[4+j],KEY_Pins[4+j])==1)
				{
					HAL_GPIO_WritePin(KEY_Ports[i],KEY_Pins[i],GPIO_PIN_RESET);
					return  i*4+j;
				}
			}
		}
		HAL_GPIO_WritePin(KEY_Ports[i],KEY_Pins[i],GPIO_PIN_RESET);
	}
	return   0xff;
}
