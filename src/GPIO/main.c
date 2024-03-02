#include"../include/RCC.h"
#include"gpio.h"
#include"../lib/std_types.h"


int main()
{
     RCC_enuEnablePeripheralClk(RCC_enuAHB1,RCC_enuAHB1_GPIOA);

     GPIO_tsrt_PortConfig_t pin=
     {
        .GPIO_Mode=GPIO_MODE_OUTPUT_PP,
        .GPIO_Speed=GPIO_OUTPUT_SPEED_LOW,
        .GPIO_Port=GPIO_enuPort_A,
        .GPIO_Pin=GPIO_enuPin_0,
     };
     GPIO_enuInit(&pin);

     GPIO_enuSetPinValue_(GPIO_enuPort_A, GPIO_enuPin_0,GPIO_enuPin_HIGH);

}

