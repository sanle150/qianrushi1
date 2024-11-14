#include "led.h"

//
void LED_On(LED_Type led)
{
        if(LED_RED==led)
        {
                HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,GPIO_PIN_RESET);//???
        }
        if(LED_GREEN==led)
        {
                HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,GPIO_PIN_RESET);//???
        }
        if(LED_BLUE==led)
        {
                HAL_GPIO_WritePin(LED_BLUE_GPIO_Port,LED_BLUE_Pin,GPIO_PIN_RESET);//???
        }
}
void LED_Off(LED_Type led)
{

        if(LED_RED==led)
        {
                HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,GPIO_PIN_SET);//???
        }
        if(LED_GREEN==led)
        {
                HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,GPIO_PIN_SET);//???
        }
        if(LED_BLUE==led)
        {
                HAL_GPIO_WritePin(LED_BLUE_GPIO_Port,LED_BLUE_Pin,GPIO_PIN_SET);//???
        }

}
void LED_Toggle(LED_Type led)
{
        if(LED_RED==led)
        {
                HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin);//???,???
        }
        if(LED_GREEN==led)
        {
                HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin);//???
        }
        if(LED_BLUE==led)
        {
                HAL_GPIO_TogglePin(LED_BLUE_GPIO_Port,LED_BLUE_Pin);//???
        }
}
