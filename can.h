#pragma once

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#define STM32F1xx
#include <stm32_def.h>

extern CAN_HandleTypeDef hcan;

void MX_CAN_Init(void);

#ifdef __cplusplus
}
#endif
