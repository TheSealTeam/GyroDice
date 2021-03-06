/* accelerometerTest.c
* Skapad f�r att testa printa sensor data fr�n gyro
*
* Skapad av Simon Olofsson
* 26 oct 2016
*
*
*
*/

/* Includes ------------------------------------------------------------------*/
#include "accelerometerTest.h"
//#include "gpio.h"
#include "stm32f3_discovery_accelerometer.h"
#include "stm32f3_discovery_gyroscope.h"
#include "stm32f3_discovery.h"
#include <stdio.h>
/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/



void accelerometerTest_Func(void)
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
    
    /*-------------------ACCELEROMETER----------------*/
    //Try if you can use stm32f3_discovery.c
    uint32_t i = BSP_GetVersion();
    printf("The value is: %d\n", i);
    //Try if you can use stm32f3_discovery_accelerometer.c
    uint8_t j = BSP_ACCELERO_Init();
    printf("The value of Accelero_Init is: %d\n", j);
   
    /* Read accelerometer*/
    int16_t buffer[3] = {0};
    int16_t xval, yval = 0x00;
    BSP_ACCELERO_GetXYZ(buffer);
    
    /*Print out the accelerometer data*/
    xval = buffer[0];
    yval = buffer[1];
    printf("xval is : %d\n", xval);
    printf("yval is : %d\n", yval);
    
    /*-------------------GYROSCOPE----------------*/
    
    //uint8_t k = BSP_GYRO_Init();

  }
}
