#include "../include/RCC.h"
#include "../include/LED.h"
#include "../include/gpio.h"


int main(void)
{
	RCC_enuEnablePeripheralClk(RCC_enuAHB1,RCC_enuAHB1_GPIOA);

	//LED_tstrConfig_t Led;

	LED_enuLEDInit();

	LED_enuSetLEDValue(LED_enuLED0,LED_enuActiveHigh);
	LED_enuSetLEDValue(LED_enuLED1,LED_enuActiveHigh);
	//LED_enuSetLEDValue(LED_enuLED2,LED_enuActiveHigh);
	//LED_enuSetLEDValue(LED_enuLED3,LED_enuActiveHigh);


 
  while (1)
    {
       
    }
}