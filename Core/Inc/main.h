/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32g4xx_hal.h"

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
#define none_3_Pin GPIO_PIN_13
#define none_3_GPIO_Port GPIOC
#define none_2_Pin GPIO_PIN_14
#define none_2_GPIO_Port GPIOC
#define none_1_Pin GPIO_PIN_15
#define none_1_GPIO_Port GPIOC
#define ccdnss_Pin GPIO_PIN_4
#define ccdnss_GPIO_Port GPIOA
#define motor_dir6_Pin GPIO_PIN_0
#define motor_dir6_GPIO_Port GPIOB
#define motor_dir5_Pin GPIO_PIN_1
#define motor_dir5_GPIO_Port GPIOB
#define motor_dir4_Pin GPIO_PIN_12
#define motor_dir4_GPIO_Port GPIOB
#define motor_dir3_Pin GPIO_PIN_13
#define motor_dir3_GPIO_Port GPIOB
#define servos_1_Pin GPIO_PIN_14
#define servos_1_GPIO_Port GPIOB
#define servos_2_Pin GPIO_PIN_15
#define servos_2_GPIO_Port GPIOB
#define motor_dir2_Pin GPIO_PIN_10
#define motor_dir2_GPIO_Port GPIOA
#define motor_dir1_Pin GPIO_PIN_15
#define motor_dir1_GPIO_Port GPIOA
#define none_6_Pin GPIO_PIN_2
#define none_6_GPIO_Port GPIOD
#define none_5_Pin GPIO_PIN_3
#define none_5_GPIO_Port GPIOB
#define none_4_Pin GPIO_PIN_9
#define none_4_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
