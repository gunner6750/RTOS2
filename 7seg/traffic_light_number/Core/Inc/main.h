/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GREEN_LED1_Pin GPIO_PIN_1
#define GREEN_LED1_GPIO_Port GPIOA
#define YELLOW_LED1_Pin GPIO_PIN_2
#define YELLOW_LED1_GPIO_Port GPIOA
#define RED_LED1_Pin GPIO_PIN_3
#define RED_LED1_GPIO_Port GPIOA
#define GREEN_LED2_Pin GPIO_PIN_4
#define GREEN_LED2_GPIO_Port GPIOA
#define YELLOW_LED2_Pin GPIO_PIN_5
#define YELLOW_LED2_GPIO_Port GPIOA
#define RED_LED2_Pin GPIO_PIN_6
#define RED_LED2_GPIO_Port GPIOA
#define LED_00_Pin GPIO_PIN_0
#define LED_00_GPIO_Port GPIOB
#define LED_01_Pin GPIO_PIN_1
#define LED_01_GPIO_Port GPIOB
#define LED_02_Pin GPIO_PIN_2
#define LED_02_GPIO_Port GPIOB
#define LED_13_Pin GPIO_PIN_10
#define LED_13_GPIO_Port GPIOB
#define LED_14_Pin GPIO_PIN_11
#define LED_14_GPIO_Port GPIOB
#define LED_15_Pin GPIO_PIN_12
#define LED_15_GPIO_Port GPIOB
#define LED_16_Pin GPIO_PIN_13
#define LED_16_GPIO_Port GPIOB
#define LED_03_Pin GPIO_PIN_3
#define LED_03_GPIO_Port GPIOB
#define LED_04_Pin GPIO_PIN_4
#define LED_04_GPIO_Port GPIOB
#define LED_05_Pin GPIO_PIN_5
#define LED_05_GPIO_Port GPIOB
#define LED_06_Pin GPIO_PIN_6
#define LED_06_GPIO_Port GPIOB
#define LED_10_Pin GPIO_PIN_7
#define LED_10_GPIO_Port GPIOB
#define LED_11_Pin GPIO_PIN_8
#define LED_11_GPIO_Port GPIOB
#define LED_12_Pin GPIO_PIN_9
#define LED_12_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
