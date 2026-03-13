/**
  ******************************************************************************
  * @file    basic_stdio_itfio_template.c
  * @brief   This file contains the basic stdio utility functions based on the technology of your choice.
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

/* Includes ------------------------------------------------------------------*/
#include "basic_stdio_itf_io.h"

/* Private defines -----------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Functions Definition ------------------------------------------------------*/


/**
  * @defgroup BASIC_STDIO_TEMPLATE_INTERFACE Template Interface (user-defined)
  * @ingroup BASIC_STDIO_INTERFACE_API
  * @{
  */

/**
  * @brief Initialize custom interface.
  * @param pObj Pointer to user-defined context or peripheral handle.
  */
void interface_io_Init(void *pobj)
{
  (void)(pobj); /* prevent "unused variable" warnings */
}

/**
  * @brief Send data over custom interface.
  * @param Ptr  Data buffer pointer.
  * @param Size Number of bytes to transmit.
  * @return Bytes transmitted (implement). Return 0 on failure.
  */
uint32_t interface_io_Send(const uint8_t *Ptr, uint16_t Size)
{
  (void)(Ptr);
  (void)(Size);
  return 0;
}

/**
  * @}
  */
