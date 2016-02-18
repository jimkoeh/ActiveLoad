/**
  ******************************************************************************
  * @file    usb_conf_template.h
  * @author  MCD Application Team
  * @version V1.0.1
  * @date    31-January-2014
  * @brief   General low level driver configuration
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USB_CONF__H__
#define __USB_CONF__H__

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx.h"

/* Exported defines ----------------------------------------------------------*/
/* Select D+ pull up: internal or external */
#define INTERNAL_PULLUP

/* Define if Low power mode is enabled; it allows entering the device into STOP mode
    following USB Suspend event, and wakes up after the USB wakeup event is received. */
/* #define USB_DEVICE_LOW_PWR_MGMT_SUPPORT */

/* Select the CRS using HSI48 internal clock as USB clock source.
    If this define is commented, PLL will be used as USB clock source.
    User need to ensure that the PLL output clock to USB is 48MHz  for proper 
    USB functioning */
#define USB_CLOCK_SOURCE_CRS

/* Endpoints used by the device */
#define EP_NUM     (4)   /* EP0 + EP1 For CDC IN +
                           EP3 For CDC OUT +EP2 For CDC INT */

/* buffer table base address */
#define BTABLE_ADDRESS      (0x000)

/* EP0, RX/TX buffers base address */
#define ENDP0_RX_ADDRESS   (0x40)
#define ENDP0_TX_ADDRESS   (0x80)

/* EP2 Tx buffer base address */
#define BULK_IN_TX_ADDRESS  (0xC0)

/* EP2 Rx buffer base address */
#define BULK_OUT_RX_ADDRESS (0x110)

/* EP3 Tx buffer base address */
#define INT_IN_TX_ADDRESS   (0x100)

/* Exported types ------------------------------------------------------------*/
/* Exported macros -----------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */ 

#endif /* __USB_CONF__H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/