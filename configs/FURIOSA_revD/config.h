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

#define FC_TARGET_MCU           STM32H743

#define BOARD_NAME              FURIOSA_revD
#define MANUFACTURER_ID         LVEL

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define GYRO_1_EXTI_PIN         PC4
#define GYRO_1_CS_PIN           PA4
#define GYRO_1_SPI_INSTANCE     SPI1
#define GYRO_1_ALIGN            CW180_DEG
#define GYRO_1_ALIGN_YAW        1800
#define DEFAULT_GYRO_TO_USE     GYRO_CONFIG_USE_GYRO_1

#define USE_BARO
#define USE_BARO_SPI_DPS310
#define BARO_SPI_INSTANCE   SPI4
#define BARO_CS_PIN         PE11

#define USE_MAG
#define USE_MAG_QMC5883

#define USE_MAX7456
#define USE_SDCARD
#define USE_RX_EXPRESSLRS
#define USE_SERVOS
#define USE_OSD
#define USE_VTX
#define USE_CLI

#define BEEPER_PIN           PA15

#define MOTOR1_PIN           PA1 // C
#define MOTOR2_PIN           PA0 // D
#define MOTOR3_PIN           PA3 // A
#define MOTOR4_PIN           PA2 // B


#define SERVO1_PIN           PD12
#define SERVO2_PIN           PD13
// Bottom pads
#define SERVO3_PIN           PD7
#define SERVO4_PIN           PB3
#define SERVO5_PIN           PB4
#define SERVO6_PIN           PB5

#define RX_PPM_PIN           PB2

#define LED_STRIP_PIN        PA8
// #define UART1_TX_PIN         PA9
// #define UART1_RX_PIN         PA10

// RECEIVER
#define UART2_TX_PIN         PD5
#define UART2_RX_PIN         PD6

// TRANSMITTER - VTX
#define UART4_TX_PIN         PB9
#define UART4_RX_PIN         PB8

// CLI
#define UART6_TX_PIN         PC6
#define UART6_RX_PIN         PC7

// TELEMETRY
#define UART7_TX_PIN         PE8
#define UART7_RX_PIN         PE7

// GPS 1
#define UART8_TX_PIN         PE1
#define UART8_RX_PIN         PE0
#define I2C1_SCL_PIN         PB6
#define I2C1_SDA_PIN         PB7

// GPS 2
#define UART3_TX_PIN         PD8
#define UART3_RX_PIN         PD9
#define I2C2_SCL_PIN         PB10
#define I2C2_SDA_PIN         PB11

// LEDs
#define LED0_PIN             PE4
#define LED1_PIN             PE3
#define LED2_PIN             PE2

// GYRO1
#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7

// OSD
#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15

// // NC
// #define SPI3_SCK_PIN         PB3
// #define SPI3_SDI_PIN         PB4
// #define SPI3_SDO_PIN         PB5

// BARO1
#define SPI4_SCK_PIN         PE12
#define SPI4_SDI_PIN         PE13
#define SPI4_SDO_PIN         PE14

#define ADC_VBAT_PIN         PC0
#define ADC_RSSI_PIN         PC5
#define ADC_CURR_PIN         PC1
// #define ADC_EXTERNAL1_PIN    PC4  //ADC12  AirS
// #define ADC_EXTERNAL2_PIN    PA4  //ADC12  VB2 
// #define ADC_EXTERNAL3_PIN    PA7  //ADC12  CU2

#define SDIO_CK_PIN          PC12
#define SDIO_CMD_PIN         PD2
#define SDIO_D0_PIN          PC8
#define SDIO_D1_PIN          PC9
#define SDIO_D2_PIN          PC10
#define SDIO_D3_PIN          PC11

#define MAX7456_SPI_CS_PIN   PB12
#define CAMERA_CONTROL_PIN   PB1

/* CS1/CS2 pads for SPI3 connection:
 *
 * CS1 PD4
 * CS2 PE2
 */

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB0 , 2,  0) \
    TIMER_PIN_MAP( 1, PB1 , 2,  1) \
    TIMER_PIN_MAP( 2, PA0 , 2,  2) \
    TIMER_PIN_MAP( 3, PA1 , 2,  3) \
    TIMER_PIN_MAP( 4, PA2 , 2,  4) \
    TIMER_PIN_MAP( 5, PA3 , 2,  5) \
    TIMER_PIN_MAP( 6, PD12, 1,  6) \
    TIMER_PIN_MAP( 7, PD13, 1,  7) \
    TIMER_PIN_MAP( 8, PD14, 1, 12) \
    TIMER_PIN_MAP( 9, PD15, 1, -1) \
    TIMER_PIN_MAP(10, PE5 , 1,  0) \
    TIMER_PIN_MAP(11, PE6 , 1, -1) \
    TIMER_PIN_MAP(12, PA8 , 1, 14) \
    TIMER_PIN_MAP(13, PA15, 1,  0) \
    TIMER_PIN_MAP(14, PC7 , 2,  0) \
    TIMER_PIN_MAP(15, PC6 , 2,  0) \
    TIMER_PIN_MAP(16, PB8 , 1,  0) \
    TIMER_PIN_MAP(17, PB9 , 1,  0)


#define ADC1_DMA_OPT        8
#define ADC3_DMA_OPT        9
#define TIMUP1_DMA_OPT      0
#define TIMUP2_DMA_OPT      0
#define TIMUP3_DMA_OPT      2
#define TIMUP4_DMA_OPT      1
#define TIMUP5_DMA_OPT      0
#define TIMUP8_DMA_OPT      0

// #define BARO_I2C_INSTANCE (I2CDEV_2)
#define MAG_I2C_INSTANCE (I2CDEV_2)

#define DEFAULT_RX_FEATURE FEATURE_RX_SERIAL
#define SERIALRX_UART SERIAL_PORT_USART2

#define DEFAULT_BLACKBOX_DEVICE      BLACKBOX_DEVICE_SDCARD
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE_DEFAULT 160
#define DEFAULT_CURRENT_METER_SCALE 400
#define BEEPER_INVERTED
#define BEEPER_PWM_HZ 2500

#define SDCARD_DETECT_PIN NONE
#define SDIO_DEVICE SDIODEV_1
#define SDIO_USE_4BIT 1
#define MAX7456_SPI_INSTANCE SPI2

// #define PINIO1_BOX 40
// #define PINIO2_BOX 41

// #define ENSURE_MPU_DATA_READY_IS_LOW
