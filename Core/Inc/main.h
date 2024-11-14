/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32l4xx_hal.h"

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
#define R2_Pin GPIO_PIN_5
#define R2_GPIO_Port GPIOA
#define R3_Pin GPIO_PIN_6
#define R3_GPIO_Port GPIOA
#define R4_Pin GPIO_PIN_7
#define R4_GPIO_Port GPIOA
#define R1_Pin GPIO_PIN_15
#define R1_GPIO_Port GPIOA
#define C2_Pin GPIO_PIN_3
#define C2_GPIO_Port GPIOB
#define C2_EXTI_IRQn EXTI3_IRQn
#define C1_Pin GPIO_PIN_4
#define C1_GPIO_Port GPIOB
#define C1_EXTI_IRQn EXTI4_IRQn
#define C3_Pin GPIO_PIN_5
#define C3_GPIO_Port GPIOB
#define C3_EXTI_IRQn EXTI9_5_IRQn
#define C4_Pin GPIO_PIN_6
#define C4_GPIO_Port GPIOB
#define C4_EXTI_IRQn EXTI9_5_IRQn
#define LED_RED_Pin GPIO_PIN_7
#define LED_RED_GPIO_Port GPIOB
#define LED_GREEN_Pin GPIO_PIN_8
#define LED_GREEN_GPIO_Port GPIOB
#define LED_BLUE_Pin GPIO_PIN_9
#define LED_BLUE_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
