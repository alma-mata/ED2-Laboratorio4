/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define counter1_0_Pin GPIO_PIN_0
#define counter1_0_GPIO_Port GPIOC
#define counter1_1_Pin GPIO_PIN_1
#define counter1_1_GPIO_Port GPIOC
#define counter1_2_Pin GPIO_PIN_2
#define counter1_2_GPIO_Port GPIOC
#define counter1_3_Pin GPIO_PIN_3
#define counter1_3_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define DISPLAY_0_Pin GPIO_PIN_6
#define DISPLAY_0_GPIO_Port GPIOA
#define DISPLAY_1_Pin GPIO_PIN_7
#define DISPLAY_1_GPIO_Port GPIOA
#define counter2_0_Pin GPIO_PIN_4
#define counter2_0_GPIO_Port GPIOC
#define counter2_1_Pin GPIO_PIN_5
#define counter2_1_GPIO_Port GPIOC
#define BTN_counter1_Pin GPIO_PIN_0
#define BTN_counter1_GPIO_Port GPIOB
#define BTN_counter1_EXTI_IRQn EXTI0_IRQn
#define BTN_counter2_Pin GPIO_PIN_1
#define BTN_counter2_GPIO_Port GPIOB
#define BTN_counter2_EXTI_IRQn EXTI1_IRQn
#define BTN_start_Pin GPIO_PIN_2
#define BTN_start_GPIO_Port GPIOB
#define BTN_start_EXTI_IRQn EXTI2_IRQn
#define counter2_2_Pin GPIO_PIN_6
#define counter2_2_GPIO_Port GPIOC
#define counter2_3_Pin GPIO_PIN_7
#define counter2_3_GPIO_Port GPIOC
#define DISPLAY_2_Pin GPIO_PIN_8
#define DISPLAY_2_GPIO_Port GPIOA
#define DISPLAY_3_Pin GPIO_PIN_9
#define DISPLAY_3_GPIO_Port GPIOA
#define DISPLAY_4_Pin GPIO_PIN_10
#define DISPLAY_4_GPIO_Port GPIOA
#define DISPLAY_5_Pin GPIO_PIN_11
#define DISPLAY_5_GPIO_Port GPIOA
#define DISPLAY_6_Pin GPIO_PIN_12
#define DISPLAY_6_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
