/* gyroscopeTest.c
* Skapad för att testa printa sensor data från gyro
*
* Skapad av Simon Olofsson
* 26 oct 2016
*
*
*
*/

/* Includes ------------------------------------------------------------------*/
#include "gyroscopeTest.h"
//#include "gpio.h"
#include "stm32f3_discovery_accelerometer.h"
#include "stm32f3_discovery_gyroscope.h"
#include "stm32f3_discovery.h"
#include <stdio.h>
/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/



void GyroscopeTest_Func(void)
{
  while(1)
  {
    /*Board LEDS, Attemtp via GPIO PE9, Red LED*/  
     
    HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_9); //LED3
    HAL_Delay(100);
    
    HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_10); //LED5
    HAL_Delay(100);
    
    HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_11); //LED7
    HAL_Delay(100);
    
    HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_12); //LED9
    HAL_Delay(100);
    
    HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_13); //LED10
    HAL_Delay(100);
    
    HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_14); //LED8
    HAL_Delay(100);
    
    HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_15); //LED6
    HAL_Delay(100);
    
    HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_8); //LED4
    HAL_Delay(100);
    
    //_____________________REAL CODE _______________________
    
    /*-------------------GYROSCOPE----------------*/
    
    //uint8_t k = BSP_GYRO_Init();

  }
}
