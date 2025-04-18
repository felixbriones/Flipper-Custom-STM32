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
extern "C"
{
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

	/* Private includes
	 * ----------------------------------------------------------*/
	/* USER CODE BEGIN Includes */

	/* USER CODE END Includes */

	/* Exported types
	 * ------------------------------------------------------------*/
	/* USER CODE BEGIN ET */

	/* USER CODE END ET */

	/* Exported constants
	 * --------------------------------------------------------*/
	/* USER CODE BEGIN EC */

	/* USER CODE END EC */

	/* Exported macro
	 * ------------------------------------------------------------*/
	/* USER CODE BEGIN EM */

	/* USER CODE END EM */

	/* Exported functions prototypes
	 * ---------------------------------------------*/
	void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define Logic_Analyzer_Input_Pin GPIO_PIN_6
#define Logic_Analyzer_Input_GPIO_Port GPIOA
#define PN532_IRQ_Pin GPIO_PIN_6
#define PN532_IRQ_GPIO_Port GPIOC
#define PN532_RSTO_Pin GPIO_PIN_7
#define PN532_RSTO_GPIO_Port GPIOC
#define LED_Output_Pin GPIO_PIN_8
#define LED_Output_GPIO_Port GPIOC
#define ESP32_TX_Pin GPIO_PIN_9
#define ESP32_TX_GPIO_Port GPIOA
#define ESP32_RX_Pin GPIO_PIN_10
#define ESP32_RX_GPIO_Port GPIOA
#define ESP32_CTS_Pin GPIO_PIN_11
#define ESP32_CTS_GPIO_Port GPIOA
#define ESP32_RTS_Pin GPIO_PIN_12
#define ESP32_RTS_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define WWZMDiB_SD_CS_Pin GPIO_PIN_4
#define WWZMDiB_SD_CS_GPIO_Port GPIOB
#define PN532_NFC_CS_Pin GPIO_PIN_5
#define PN532_NFC_CS_GPIO_Port GPIOB
#define NRF24L01_CS_Pin GPIO_PIN_6
#define NRF24L01_CS_GPIO_Port GPIOB
#define CC1101_CS_Pin GPIO_PIN_7
#define CC1101_CS_GPIO_Port GPIOB
#define Display_SCL_Pin GPIO_PIN_8
#define Display_SCL_GPIO_Port GPIOB
#define Display_SDA_Pin GPIO_PIN_9
#define Display_SDA_GPIO_Port GPIOB

	/* USER CODE BEGIN Private defines */

	/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
