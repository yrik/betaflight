/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32F7X2

#define BOARD_NAME        ALIENFLIGHTNGF7_ELRS
#define MANUFACTURER_ID   AFNG

#define USE_GYRO
#define USE_GYRO_SPI_MPU9250
#define USE_ACC
#define USE_ACC_SPI_MPU9250
#define USE_GYRO_SPI_MPU6500
#define USE_ACC_SPI_MPU6500
#define USE_GYRO_SPI_ICM20602
#define USE_ACC_SPI_ICM20602
#define USE_MAG_SPI_AK8963
#define USE_MAX7456
#define USE_SDCARD
#define USE_RX_SPI
#define USE_RX_EXPRESSLRS
#define USE_RX_EXPRESSLRS_TELEMETRY
#define USE_RX_SX1280
#define RX_CHANNELS_AETR
#define RX_SPI_DEFAULT_PROTOCOL         RX_SPI_EXPRESSLRS
#define RX_EXPRESSLRS_TIMER_INSTANCE    TIM5
#define RX_EXPRESSLRS_SPI_RESET_PIN     PB6
#define RX_EXPRESSLRS_SPI_BUSY_PIN      PB7
#define RX_SPI_CS                       PA15
#define RX_SPI_EXTI                     PB15
#define RX_SPI_BIND                     PB2
#define RX_SPI_LED                      PB9

#define BEEPER_PIN           PC13
#define MOTOR1_PIN           PC6
#define MOTOR2_PIN           PC7
#define MOTOR3_PIN           PB14
#define MOTOR4_PIN           PB0
#define MOTOR5_PIN           PA0
#define MOTOR6_PIN           PC8
#define MOTOR7_PIN           PA1
#define MOTOR8_PIN           PC9
#define RX_PPM_PIN           PA8
#define LED_STRIP_PIN        PA8
#define UART1_TX_PIN         PA9
#define UART2_TX_PIN         PA2
#define UART4_TX_PIN         PC10
#define UART1_RX_PIN         PA10
#define UART2_RX_PIN         PA3
#define UART4_RX_PIN         PC11
#define LED0_PIN             PC12
#define LED1_PIN             PD2
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PB3
#define SPI1_MISO_PIN        PA6
#define SPI2_MISO_PIN        PC2
#define SPI3_MISO_PIN        PB4
#define SPI1_MOSI_PIN        PA7
#define SPI2_MOSI_PIN        PC3
#define SPI3_MOSI_PIN        PB5
#define ADC_VBAT_PIN         PC0
#define ADC_RSSI_PIN         PC4
#define ADC_CURR_PIN         PC1
#define SDCARD_CS_PIN        PB10
#define SDCARD_DETECT_PIN    PB11
#define MAX7456_SPI_CS_PIN   PB12
#define RX_SPI_CS_PIN        PA15
#define RX_SPI_EXTI_PIN      PB15
#define RX_SPI_BIND_PIN      PB2
#define RX_SPI_LED_PIN       PB9
#define RX_SPI_EXPRESSLRS_RESET_PIN PB6
#define RX_SPI_EXPRESSLRS_BUSY_PIN PB7
#define GYRO_1_EXTI_PIN      PC14
#define GYRO_1_CS_PIN        PA4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PA8 , 1,  1) \
    TIMER_PIN_MAP( 1, PC6 , 2,  0) \
    TIMER_PIN_MAP( 2, PC7 , 1,  0) \
    TIMER_PIN_MAP( 3, PB14, 2,  1) \
    TIMER_PIN_MAP( 4, PB0 , 2,  0) \
    TIMER_PIN_MAP( 5, PA0 , 2,  0) \
    TIMER_PIN_MAP( 6, PC8 , 2,  1) \
    TIMER_PIN_MAP( 7, PA1 , 2,  0) \
    TIMER_PIN_MAP( 8, PC9 , 2,  0)



#define ADC1_DMA_OPT        0

//TODO #define RX_SPI_PROTOCOL RX_SPI_EXPRESSLRS
#define RX_SPI_INSTANCE SPI3
#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_SDCARD
#define ENABLE_DSHOT_DMAR DSHOT_DMAR_ON
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define BEEPER_INVERTED
//TODO #define SDCARD_DETECT_INVERTED ON
#define USE_SDCARD_SPI
#define SDCARD_SPI_INSTANCE SPI2
#define MAX7456_SPI_INSTANCE SPI3
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW270_DEG
#define GYRO_1_ALIGN_YAW 2700
//TODO #define EXPRESSLRS_DOMAIN ISM2400
