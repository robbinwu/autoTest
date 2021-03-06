/*
 * Copyright (C) 2016 ASR MICROELECTRONICS Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *************************************************
 * Automatically generated C header: do not edit *
 *************************************************
 */

#ifndef __ASR_CHIP_REGS_H__
#error  "Don't include this file directly, Pls include asr_chip_regs.h"
#endif


#ifndef __H_REGS_SD1SD2SD3_HEADFILE_H__
#define __H_REGS_SD1SD2SD3_HEADFILE_H__ __FILE__

#define	REGS_SD1,SD2,SD3

/* registers definitions for SD1SD2SD3 */
#define REG_SD1_SD_SYS_ADDR_LOW                           ASR_ADDR(REGS_SD1_BASE, 0X00)/*System Address Low Register*/
#define REG_SD2_SD_SYS_ADDR_LOW                           ASR_ADDR(REGS_SD2_BASE, 0X00)/*System Address Low Register*/
#define REG_SD3_SD_SYS_ADDR_LOW                           ASR_ADDR(REGS_SD3_BASE, 0X00)/*System Address Low Register*/
#define REG_SD1_SD_SYS_ADDR_HIGH                          ASR_ADDR(REGS_SD1_BASE, 0X02)/*System Address High Register*/
#define REG_SD2_SD_SYS_ADDR_HIGH                          ASR_ADDR(REGS_SD2_BASE, 0X02)/*System Address High Register*/
#define REG_SD3_SD_SYS_ADDR_HIGH                          ASR_ADDR(REGS_SD3_BASE, 0X02)/*System Address High Register*/
#define REG_SD1_SD_BLOCK_SIZE                             ASR_ADDR(REGS_SD1_BASE, 0X04)/*Block Size Register*/
#define REG_SD2_SD_BLOCK_SIZE                             ASR_ADDR(REGS_SD2_BASE, 0X04)/*Block Size Register*/
#define REG_SD3_SD_BLOCK_SIZE                             ASR_ADDR(REGS_SD3_BASE, 0X04)/*Block Size Register*/
#define REG_SD1_SD_BLOCK_COUNT                            ASR_ADDR(REGS_SD1_BASE, 0X06)/*Block Count Register*/
#define REG_SD2_SD_BLOCK_COUNT                            ASR_ADDR(REGS_SD2_BASE, 0X06)/*Block Count Register*/
#define REG_SD3_SD_BLOCK_COUNT                            ASR_ADDR(REGS_SD3_BASE, 0X06)/*Block Count Register*/
#define REG_SD1_SD_ARG_LOW                                ASR_ADDR(REGS_SD1_BASE, 0X08)/*Argument Low Register*/
#define REG_SD2_SD_ARG_LOW                                ASR_ADDR(REGS_SD2_BASE, 0X08)/*Argument Low Register*/
#define REG_SD3_SD_ARG_LOW                                ASR_ADDR(REGS_SD3_BASE, 0X08)/*Argument Low Register*/
#define REG_SD1_SD_ARG_HIGH                               ASR_ADDR(REGS_SD1_BASE, 0X0A)/*Argument High Register*/
#define REG_SD2_SD_ARG_HIGH                               ASR_ADDR(REGS_SD2_BASE, 0X0A)/*Argument High Register*/
#define REG_SD3_SD_ARG_HIGH                               ASR_ADDR(REGS_SD3_BASE, 0X0A)/*Argument High Register*/
#define REG_SD1_SD_TRANSFER_MODE                          ASR_ADDR(REGS_SD1_BASE, 0X0C)/*Transfer Mode Register*/
#define REG_SD2_SD_TRANSFER_MODE                          ASR_ADDR(REGS_SD2_BASE, 0X0C)/*Transfer Mode Register*/
#define REG_SD3_SD_TRANSFER_MODE                          ASR_ADDR(REGS_SD3_BASE, 0X0C)/*Transfer Mode Register*/
#define REG_SD1_SD_CMD                                    ASR_ADDR(REGS_SD1_BASE, 0X0E)/*Command Register*/
#define REG_SD2_SD_CMD                                    ASR_ADDR(REGS_SD2_BASE, 0X0E)/*Command Register*/
#define REG_SD3_SD_CMD                                    ASR_ADDR(REGS_SD3_BASE, 0X0E)/*Command Register*/
#define REG_SD1_SD_RESP_0                                 ASR_ADDR(REGS_SD1_BASE, 0X10)/*Response Register 0*/
#define REG_SD2_SD_RESP_0                                 ASR_ADDR(REGS_SD2_BASE, 0X10)/*Response Register 0*/
#define REG_SD3_SD_RESP_0                                 ASR_ADDR(REGS_SD3_BASE, 0X10)/*Response Register 0*/
#define REG_SD1_SD_RESP_1                                 ASR_ADDR(REGS_SD1_BASE, 0X12)/*Response Register 1*/
#define REG_SD2_SD_RESP_1                                 ASR_ADDR(REGS_SD2_BASE, 0X12)/*Response Register 1*/
#define REG_SD3_SD_RESP_1                                 ASR_ADDR(REGS_SD3_BASE, 0X12)/*Response Register 1*/
#define REG_SD1_SD_RESP_2                                 ASR_ADDR(REGS_SD1_BASE, 0X14)/*Response Register 2*/
#define REG_SD2_SD_RESP_2                                 ASR_ADDR(REGS_SD2_BASE, 0X14)/*Response Register 2*/
#define REG_SD3_SD_RESP_2                                 ASR_ADDR(REGS_SD3_BASE, 0X14)/*Response Register 2*/
#define REG_SD1_SD_RESP_3                                 ASR_ADDR(REGS_SD1_BASE, 0X16)/*Response Register 3*/
#define REG_SD2_SD_RESP_3                                 ASR_ADDR(REGS_SD2_BASE, 0X16)/*Response Register 3*/
#define REG_SD3_SD_RESP_3                                 ASR_ADDR(REGS_SD3_BASE, 0X16)/*Response Register 3*/
#define REG_SD1_SD_RESP_4                                 ASR_ADDR(REGS_SD1_BASE, 0X18)/*Response Register 4*/
#define REG_SD2_SD_RESP_4                                 ASR_ADDR(REGS_SD2_BASE, 0X18)/*Response Register 4*/
#define REG_SD3_SD_RESP_4                                 ASR_ADDR(REGS_SD3_BASE, 0X18)/*Response Register 4*/
#define REG_SD1_SD_RESP_5                                 ASR_ADDR(REGS_SD1_BASE, 0X1A)/*Response Register 5*/
#define REG_SD2_SD_RESP_5                                 ASR_ADDR(REGS_SD2_BASE, 0X1A)/*Response Register 5*/
#define REG_SD3_SD_RESP_5                                 ASR_ADDR(REGS_SD3_BASE, 0X1A)/*Response Register 5*/
#define REG_SD1_SD_RESP_6                                 ASR_ADDR(REGS_SD1_BASE, 0X1C)/*Response Register 6*/
#define REG_SD2_SD_RESP_6                                 ASR_ADDR(REGS_SD2_BASE, 0X1C)/*Response Register 6*/
#define REG_SD3_SD_RESP_6                                 ASR_ADDR(REGS_SD3_BASE, 0X1C)/*Response Register 6*/
#define REG_SD1_SD_RESP_7                                 ASR_ADDR(REGS_SD1_BASE, 0X1E)/*Response Register 7*/
#define REG_SD2_SD_RESP_7                                 ASR_ADDR(REGS_SD2_BASE, 0X1E)/*Response Register 7*/
#define REG_SD3_SD_RESP_7                                 ASR_ADDR(REGS_SD3_BASE, 0X1E)/*Response Register 7*/
#define REG_SD1_SD_BUFFER_DATA_PORT_0                     ASR_ADDR(REGS_SD1_BASE, 0X20)/*Buffer Data Port 0 Register*/
#define REG_SD2_SD_BUFFER_DATA_PORT_0                     ASR_ADDR(REGS_SD2_BASE, 0X20)/*Buffer Data Port 0 Register*/
#define REG_SD3_SD_BUFFER_DATA_PORT_0                     ASR_ADDR(REGS_SD3_BASE, 0X20)/*Buffer Data Port 0 Register*/
#define REG_SD1_SD_BUFFER_DATA_PORT_1                     ASR_ADDR(REGS_SD1_BASE, 0X22)/*Buffer Data Port 1 Register*/
#define REG_SD2_SD_BUFFER_DATA_PORT_1                     ASR_ADDR(REGS_SD2_BASE, 0X22)/*Buffer Data Port 1 Register*/
#define REG_SD3_SD_BUFFER_DATA_PORT_1                     ASR_ADDR(REGS_SD3_BASE, 0X22)/*Buffer Data Port 1 Register*/
#define REG_SD1_SD_PRESENT_STATE_1                        ASR_ADDR(REGS_SD1_BASE, 0X24)/*Present State Register 1*/
#define REG_SD2_SD_PRESENT_STATE_1                        ASR_ADDR(REGS_SD2_BASE, 0X24)/*Present State Register 1*/
#define REG_SD3_SD_PRESENT_STATE_1                        ASR_ADDR(REGS_SD3_BASE, 0X24)/*Present State Register 1*/
#define REG_SD1_SD_PRESENT_STATE_2                        ASR_ADDR(REGS_SD1_BASE, 0X26)/*Present State Register 2*/
#define REG_SD2_SD_PRESENT_STATE_2                        ASR_ADDR(REGS_SD2_BASE, 0X26)/*Present State Register 2*/
#define REG_SD3_SD_PRESENT_STATE_2                        ASR_ADDR(REGS_SD3_BASE, 0X26)/*Present State Register 2*/
#define REG_SD1_SD_HOST_CTRL                              ASR_ADDR(REGS_SD1_BASE, 0X28)/*Host Control Register*/
#define REG_SD2_SD_HOST_CTRL                              ASR_ADDR(REGS_SD2_BASE, 0X28)/*Host Control Register*/
#define REG_SD3_SD_HOST_CTRL                              ASR_ADDR(REGS_SD3_BASE, 0X28)/*Host Control Register*/
#define REG_SD1_SD_BLOCK_GAP_CTRL                         ASR_ADDR(REGS_SD1_BASE, 0X2A)/*Block Gap Control Register*/
#define REG_SD2_SD_BLOCK_GAP_CTRL                         ASR_ADDR(REGS_SD2_BASE, 0X2A)/*Block Gap Control Register*/
#define REG_SD3_SD_BLOCK_GAP_CTRL                         ASR_ADDR(REGS_SD3_BASE, 0X2A)/*Block Gap Control Register*/
#define REG_SD1_SD_CLOCK_CTRL                             ASR_ADDR(REGS_SD1_BASE, 0X2C)/*Clock Control Register*/
#define REG_SD2_SD_CLOCK_CTRL                             ASR_ADDR(REGS_SD2_BASE, 0X2C)/*Clock Control Register*/
#define REG_SD3_SD_CLOCK_CTRL                             ASR_ADDR(REGS_SD3_BASE, 0X2C)/*Clock Control Register*/
#define REG_SD1_SD_TIMEOUT_CTRL_SW_RESET                  ASR_ADDR(REGS_SD1_BASE, 0X2E)/*Timeout Control/Software Reset Register*/
#define REG_SD2_SD_TIMEOUT_CTRL_SW_RESET                  ASR_ADDR(REGS_SD2_BASE, 0X2E)/*Timeout Control/Software Reset Register*/
#define REG_SD3_SD_TIMEOUT_CTRL_SW_RESET                  ASR_ADDR(REGS_SD3_BASE, 0X2E)/*Timeout Control/Software Reset Register*/
#define REG_SD1_SD_NORMAL_INT_STATUS                      ASR_ADDR(REGS_SD1_BASE, 0X30)/*Normal Interrupt Status Register*/
#define REG_SD2_SD_NORMAL_INT_STATUS                      ASR_ADDR(REGS_SD2_BASE, 0X30)/*Normal Interrupt Status Register*/
#define REG_SD3_SD_NORMAL_INT_STATUS                      ASR_ADDR(REGS_SD3_BASE, 0X30)/*Normal Interrupt Status Register*/
#define REG_SD1_SD_ERROR_INT_STATUS                       ASR_ADDR(REGS_SD1_BASE, 0X32)/*Error Interrupt Status Register*/
#define REG_SD2_SD_ERROR_INT_STATUS                       ASR_ADDR(REGS_SD2_BASE, 0X32)/*Error Interrupt Status Register*/
#define REG_SD3_SD_ERROR_INT_STATUS                       ASR_ADDR(REGS_SD3_BASE, 0X32)/*Error Interrupt Status Register*/
#define REG_SD1_SD_NORMAL_INT_STATUS_EN                   ASR_ADDR(REGS_SD1_BASE, 0X34)/*Normal Interrupt Status Enable Register*/
#define REG_SD2_SD_NORMAL_INT_STATUS_EN                   ASR_ADDR(REGS_SD2_BASE, 0X34)/*Normal Interrupt Status Enable Register*/
#define REG_SD3_SD_NORMAL_INT_STATUS_EN                   ASR_ADDR(REGS_SD3_BASE, 0X34)/*Normal Interrupt Status Enable Register*/
#define REG_SD1_SD_ERROR_INT_STATUS_EN                    ASR_ADDR(REGS_SD1_BASE, 0X36)/*Error Interrupt Status Enable Register*/
#define REG_SD2_SD_ERROR_INT_STATUS_EN                    ASR_ADDR(REGS_SD2_BASE, 0X36)/*Error Interrupt Status Enable Register*/
#define REG_SD3_SD_ERROR_INT_STATUS_EN                    ASR_ADDR(REGS_SD3_BASE, 0X36)/*Error Interrupt Status Enable Register*/
#define REG_SD1_SD_NORMAL_INT_STATUS_INT_EN               ASR_ADDR(REGS_SD1_BASE, 0X38)/*Normal Interrupt Status Interrupt Enable Register*/
#define REG_SD2_SD_NORMAL_INT_STATUS_INT_EN               ASR_ADDR(REGS_SD2_BASE, 0X38)/*Normal Interrupt Status Interrupt Enable Register*/
#define REG_SD3_SD_NORMAL_INT_STATUS_INT_EN               ASR_ADDR(REGS_SD3_BASE, 0X38)/*Normal Interrupt Status Interrupt Enable Register*/
#define REG_SD1_SD_ERROR_INT_STATUS_INT_EN                ASR_ADDR(REGS_SD1_BASE, 0X3A)/*Error Interrupt Status Interrupt Enable Register*/
#define REG_SD2_SD_ERROR_INT_STATUS_INT_EN                ASR_ADDR(REGS_SD2_BASE, 0X3A)/*Error Interrupt Status Interrupt Enable Register*/
#define REG_SD3_SD_ERROR_INT_STATUS_INT_EN                ASR_ADDR(REGS_SD3_BASE, 0X3A)/*Error Interrupt Status Interrupt Enable Register*/
#define REG_SD1_SD_AUTO_CMD12_ERROR_STATUS                ASR_ADDR(REGS_SD1_BASE, 0X3C)/*Auto CMD12 Error Status Register*/
#define REG_SD2_SD_AUTO_CMD12_ERROR_STATUS                ASR_ADDR(REGS_SD2_BASE, 0X3C)/*Auto CMD12 Error Status Register*/
#define REG_SD3_SD_AUTO_CMD12_ERROR_STATUS                ASR_ADDR(REGS_SD3_BASE, 0X3C)/*Auto CMD12 Error Status Register*/
#define REG_SD1_HOST_CTRL_2                               ASR_ADDR(REGS_SD1_BASE, 0X3E)/*Host Control 2 Register*/
#define REG_SD2_HOST_CTRL_2                               ASR_ADDR(REGS_SD2_BASE, 0X3E)/*Host Control 2 Register*/
#define REG_SD3_HOST_CTRL_2                               ASR_ADDR(REGS_SD3_BASE, 0X3E)/*Host Control 2 Register*/
#define REG_SD1_SD_CAPABILITIES_1                         ASR_ADDR(REGS_SD1_BASE, 0X40)/*Capabilities Register 1*/
#define REG_SD2_SD_CAPABILITIES_1                         ASR_ADDR(REGS_SD2_BASE, 0X40)/*Capabilities Register 1*/
#define REG_SD3_SD_CAPABILITIES_1                         ASR_ADDR(REGS_SD3_BASE, 0X40)/*Capabilities Register 1*/
#define REG_SD1_SD_CAPABILITIES_2                         ASR_ADDR(REGS_SD1_BASE, 0X42)/*Capabilities Register 2*/
#define REG_SD2_SD_CAPABILITIES_2                         ASR_ADDR(REGS_SD2_BASE, 0X42)/*Capabilities Register 2*/
#define REG_SD3_SD_CAPABILITIES_2                         ASR_ADDR(REGS_SD3_BASE, 0X42)/*Capabilities Register 2*/
#define REG_SD1_SD_CAPABILITIES_3                         ASR_ADDR(REGS_SD1_BASE, 0X44)/*Capabilities Register 3*/
#define REG_SD2_SD_CAPABILITIES_3                         ASR_ADDR(REGS_SD2_BASE, 0X44)/*Capabilities Register 3*/
#define REG_SD3_SD_CAPABILITIES_3                         ASR_ADDR(REGS_SD3_BASE, 0X44)/*Capabilities Register 3*/
#define REG_SD1_SD_CAPABILITIES_4                         ASR_ADDR(REGS_SD1_BASE, 0X46)/*Capabilities Register 4*/
#define REG_SD2_SD_CAPABILITIES_4                         ASR_ADDR(REGS_SD2_BASE, 0X46)/*Capabilities Register 4*/
#define REG_SD3_SD_CAPABILITIES_4                         ASR_ADDR(REGS_SD3_BASE, 0X46)/*Capabilities Register 4*/
#define REG_SD1_SD_MAX_CURRENT_1                          ASR_ADDR(REGS_SD1_BASE, 0X48)/*Maximum Current Register 1*/
#define REG_SD2_SD_MAX_CURRENT_1                          ASR_ADDR(REGS_SD2_BASE, 0X48)/*Maximum Current Register 1*/
#define REG_SD3_SD_MAX_CURRENT_1                          ASR_ADDR(REGS_SD3_BASE, 0X48)/*Maximum Current Register 1*/
#define REG_SD1_SD_MAX_CURRENT_2                          ASR_ADDR(REGS_SD1_BASE, 0X4A)/*Maximum Current Register 2*/
#define REG_SD2_SD_MAX_CURRENT_2                          ASR_ADDR(REGS_SD2_BASE, 0X4A)/*Maximum Current Register 2*/
#define REG_SD3_SD_MAX_CURRENT_2                          ASR_ADDR(REGS_SD3_BASE, 0X4A)/*Maximum Current Register 2*/
#define REG_SD1_SD_MAX_CURRENT_3                          ASR_ADDR(REGS_SD1_BASE, 0X4C)/*Maximum Current Register 3*/
#define REG_SD2_SD_MAX_CURRENT_3                          ASR_ADDR(REGS_SD2_BASE, 0X4C)/*Maximum Current Register 3*/
#define REG_SD3_SD_MAX_CURRENT_3                          ASR_ADDR(REGS_SD3_BASE, 0X4C)/*Maximum Current Register 3*/
#define REG_SD1_SD_MAX_CURRENT_4                          ASR_ADDR(REGS_SD1_BASE, 0X4E)/*Maximum Current Register 4*/
#define REG_SD2_SD_MAX_CURRENT_4                          ASR_ADDR(REGS_SD2_BASE, 0X4E)/*Maximum Current Register 4*/
#define REG_SD3_SD_MAX_CURRENT_4                          ASR_ADDR(REGS_SD3_BASE, 0X4E)/*Maximum Current Register 4*/
#define REG_SD1_SD_FORCE_EVENT_AUTO_CMD12_ERROR           ASR_ADDR(REGS_SD1_BASE, 0X50)/*Force Event Auto cmd12 Error Register*/
#define REG_SD2_SD_FORCE_EVENT_AUTO_CMD12_ERROR           ASR_ADDR(REGS_SD2_BASE, 0X50)/*Force Event Auto cmd12 Error Register*/
#define REG_SD3_SD_FORCE_EVENT_AUTO_CMD12_ERROR           ASR_ADDR(REGS_SD3_BASE, 0X50)/*Force Event Auto cmd12 Error Register*/
#define REG_SD1_SD_FORCE_EVENT_FOR_ERROR_STATUS           ASR_ADDR(REGS_SD1_BASE, 0X52)/*Force Event for Error Status Register*/
#define REG_SD2_SD_FORCE_EVENT_FOR_ERROR_STATUS           ASR_ADDR(REGS_SD2_BASE, 0X52)/*Force Event for Error Status Register*/
#define REG_SD3_SD_FORCE_EVENT_FOR_ERROR_STATUS           ASR_ADDR(REGS_SD3_BASE, 0X52)/*Force Event for Error Status Register*/
#define REG_SD1_SD_ADMA_ERROR_STATUS                      ASR_ADDR(REGS_SD1_BASE, 0X54)/*ADMA Error Status Register*/
#define REG_SD2_SD_ADMA_ERROR_STATUS                      ASR_ADDR(REGS_SD2_BASE, 0X54)/*ADMA Error Status Register*/
#define REG_SD3_SD_ADMA_ERROR_STATUS                      ASR_ADDR(REGS_SD3_BASE, 0X54)/*ADMA Error Status Register*/
#define REG_SD1_SD_ADMA_SYS_ADDR_1                        ASR_ADDR(REGS_SD1_BASE, 0X58)/*ADMA System Address Register 1*/
#define REG_SD2_SD_ADMA_SYS_ADDR_1                        ASR_ADDR(REGS_SD2_BASE, 0X58)/*ADMA System Address Register 1*/
#define REG_SD3_SD_ADMA_SYS_ADDR_1                        ASR_ADDR(REGS_SD3_BASE, 0X58)/*ADMA System Address Register 1*/
#define REG_SD1_SD_ADMA_SYS_ADDR_2                        ASR_ADDR(REGS_SD1_BASE, 0X5A)/*ADMA System Address Register 2*/
#define REG_SD2_SD_ADMA_SYS_ADDR_2                        ASR_ADDR(REGS_SD2_BASE, 0X5A)/*ADMA System Address Register 2*/
#define REG_SD3_SD_ADMA_SYS_ADDR_2                        ASR_ADDR(REGS_SD3_BASE, 0X5A)/*ADMA System Address Register 2*/
#define REG_SD1_SD_ADMA_SYS_ADDR_3                        ASR_ADDR(REGS_SD1_BASE, 0X5C)/*ADMA System Address Register 3*/
#define REG_SD2_SD_ADMA_SYS_ADDR_3                        ASR_ADDR(REGS_SD2_BASE, 0X5C)/*ADMA System Address Register 3*/
#define REG_SD3_SD_ADMA_SYS_ADDR_3                        ASR_ADDR(REGS_SD3_BASE, 0X5C)/*ADMA System Address Register 3*/
#define REG_SD1_SD_ADMA_SYS_ADDR_4                        ASR_ADDR(REGS_SD1_BASE, 0X5E)/*ADMA System Address Register 4*/
#define REG_SD2_SD_ADMA_SYS_ADDR_4                        ASR_ADDR(REGS_SD2_BASE, 0X5E)/*ADMA System Address Register 4*/
#define REG_SD3_SD_ADMA_SYS_ADDR_4                        ASR_ADDR(REGS_SD3_BASE, 0X5E)/*ADMA System Address Register 4*/
#define REG_SD1_PRESET_VALUE_FOR_INIT                     ASR_ADDR(REGS_SD1_BASE, 0X60)/*Preset Value Register for Initialization*/
#define REG_SD2_PRESET_VALUE_FOR_INIT                     ASR_ADDR(REGS_SD2_BASE, 0X60)/*Preset Value Register for Initialization*/
#define REG_SD3_PRESET_VALUE_FOR_INIT                     ASR_ADDR(REGS_SD3_BASE, 0X60)/*Preset Value Register for Initialization*/
#define REG_SD1_PRESET_VALUE_FOR_DS                       ASR_ADDR(REGS_SD1_BASE, 0X62)/*Preset Value Register for Default Speed*/
#define REG_SD2_PRESET_VALUE_FOR_DS                       ASR_ADDR(REGS_SD2_BASE, 0X62)/*Preset Value Register for Default Speed*/
#define REG_SD3_PRESET_VALUE_FOR_DS                       ASR_ADDR(REGS_SD3_BASE, 0X62)/*Preset Value Register for Default Speed*/
#define REG_SD1_PRESET_VALUE_FOR_HS                       ASR_ADDR(REGS_SD1_BASE, 0X64)/*Preset Value Register for High Speed*/
#define REG_SD2_PRESET_VALUE_FOR_HS                       ASR_ADDR(REGS_SD2_BASE, 0X64)/*Preset Value Register for High Speed*/
#define REG_SD3_PRESET_VALUE_FOR_HS                       ASR_ADDR(REGS_SD3_BASE, 0X64)/*Preset Value Register for High Speed*/
#define REG_SD1_PRESET_VALUE_FOR_SDR12                    ASR_ADDR(REGS_SD1_BASE, 0X66)/*Preset Value Register for SDR12*/
#define REG_SD2_PRESET_VALUE_FOR_SDR12                    ASR_ADDR(REGS_SD2_BASE, 0X66)/*Preset Value Register for SDR12*/
#define REG_SD3_PRESET_VALUE_FOR_SDR12                    ASR_ADDR(REGS_SD3_BASE, 0X66)/*Preset Value Register for SDR12*/
#define REG_SD1_PRESET_VALUE_FOR_SDR25                    ASR_ADDR(REGS_SD1_BASE, 0X68)/*Preset Value Register for SDR25*/
#define REG_SD2_PRESET_VALUE_FOR_SDR25                    ASR_ADDR(REGS_SD2_BASE, 0X68)/*Preset Value Register for SDR25*/
#define REG_SD3_PRESET_VALUE_FOR_SDR25                    ASR_ADDR(REGS_SD3_BASE, 0X68)/*Preset Value Register for SDR25*/
#define REG_SD1_PRESET_VALUE_FOR_SDR50                    ASR_ADDR(REGS_SD1_BASE, 0X6A)/*Preset Value Register for SDR50*/
#define REG_SD2_PRESET_VALUE_FOR_SDR50                    ASR_ADDR(REGS_SD2_BASE, 0X6A)/*Preset Value Register for SDR50*/
#define REG_SD3_PRESET_VALUE_FOR_SDR50                    ASR_ADDR(REGS_SD3_BASE, 0X6A)/*Preset Value Register for SDR50*/
#define REG_SD1_PRESET_VALUE_FOR_SDR104                   ASR_ADDR(REGS_SD1_BASE, 0X6C)/*Preset Value Register for SDR104*/
#define REG_SD2_PRESET_VALUE_FOR_SDR104                   ASR_ADDR(REGS_SD2_BASE, 0X6C)/*Preset Value Register for SDR104*/
#define REG_SD3_PRESET_VALUE_FOR_SDR104                   ASR_ADDR(REGS_SD3_BASE, 0X6C)/*Preset Value Register for SDR104*/
#define REG_SD1_PRESET_VALUE_FOR_DDR50                    ASR_ADDR(REGS_SD1_BASE, 0X6E)/*Preset Value Register for DDR50*/
#define REG_SD2_PRESET_VALUE_FOR_DDR50                    ASR_ADDR(REGS_SD2_BASE, 0X6E)/*Preset Value Register for DDR50*/
#define REG_SD3_PRESET_VALUE_FOR_DDR50                    ASR_ADDR(REGS_SD3_BASE, 0X6E)/*Preset Value Register for DDR50*/
#define REG_SD1_SHARED_BUS_CTRL                           ASR_ADDR(REGS_SD1_BASE, 0XE0)/*Shared Bus Control Register*/
#define REG_SD2_SHARED_BUS_CTRL                           ASR_ADDR(REGS_SD2_BASE, 0XE0)/*Shared Bus Control Register*/
#define REG_SD3_SHARED_BUS_CTRL                           ASR_ADDR(REGS_SD3_BASE, 0XE0)/*Shared Bus Control Register*/
#define REG_SD1_SD_SLOT_INT_STATUS                        ASR_ADDR(REGS_SD1_BASE, 0XFC)/*Slot Interrupt Status Register*/
#define REG_SD2_SD_SLOT_INT_STATUS                        ASR_ADDR(REGS_SD2_BASE, 0XFC)/*Slot Interrupt Status Register*/
#define REG_SD3_SD_SLOT_INT_STATUS                        ASR_ADDR(REGS_SD3_BASE, 0XFC)/*Slot Interrupt Status Register*/
#define REG_SD1_SD_HOST_CTRL_VER                          ASR_ADDR(REGS_SD1_BASE, 0XFE)/*Host Control Version Register*/
#define REG_SD2_SD_HOST_CTRL_VER                          ASR_ADDR(REGS_SD2_BASE, 0XFE)/*Host Control Version Register*/
#define REG_SD3_SD_HOST_CTRL_VER                          ASR_ADDR(REGS_SD3_BASE, 0XFE)/*Host Control Version Register*/
#define REG_SD1_SDHC_VID_PID                              ASR_ADDR(REGS_SD1_BASE, 0X100)/*SD HOST CTRL Vendor ID/Project ID/version ID Register*/
#define REG_SD2_SDHC_VID_PID                              ASR_ADDR(REGS_SD2_BASE, 0X100)/*SD HOST CTRL Vendor ID/Project ID/version ID Register*/
#define REG_SD3_SDHC_VID_PID                              ASR_ADDR(REGS_SD3_BASE, 0X100)/*SD HOST CTRL Vendor ID/Project ID/version ID Register*/
#define REG_SD1_SDHC_OP_CTRL                              ASR_ADDR(REGS_SD1_BASE, 0X104)/*SDHC Opeartion Control register
(Clock and Burst Size Setup Register)*/
#define REG_SD2_SDHC_OP_CTRL                              ASR_ADDR(REGS_SD2_BASE, 0X104)/*SDHC Opeartion Control register
(Clock and Burst Size Setup Register)*/
#define REG_SD3_SDHC_OP_CTRL                              ASR_ADDR(REGS_SD3_BASE, 0X104)/*SDHC Opeartion Control register
(Clock and Burst Size Setup Register)*/
#define REG_SD1_SDHC_OP_EXT_REG                           ASR_ADDR(REGS_SD1_BASE, 0X108)/*SDHC Operation extend CTRL Register*/
#define REG_SD2_SDHC_OP_EXT_REG                           ASR_ADDR(REGS_SD2_BASE, 0X108)/*SDHC Operation extend CTRL Register*/
#define REG_SD3_SDHC_OP_EXT_REG                           ASR_ADDR(REGS_SD3_BASE, 0X108)/*SDHC Operation extend CTRL Register*/
#define REG_SD1_SDHC_LEGACY_CTRL_REG                      ASR_ADDR(REGS_SD1_BASE, 0X10C)/*SDHC LEGACY CTRL Parameters Register*/
#define REG_SD2_SDHC_LEGACY_CTRL_REG                      ASR_ADDR(REGS_SD2_BASE, 0X10C)/*SDHC LEGACY CTRL Parameters Register*/
#define REG_SD3_SDHC_LEGACY_CTRL_REG                      ASR_ADDR(REGS_SD3_BASE, 0X10C)/*SDHC LEGACY CTRL Parameters Register*/
#define REG_SD1_SDHC_LEGACY_CEATA_REG                     ASR_ADDR(REGS_SD1_BASE, 0X110)/*SDHC LEGACY CTRL for CEATA Device Register*/
#define REG_SD2_SDHC_LEGACY_CEATA_REG                     ASR_ADDR(REGS_SD2_BASE, 0X110)/*SDHC LEGACY CTRL for CEATA Device Register*/
#define REG_SD3_SDHC_LEGACY_CEATA_REG                     ASR_ADDR(REGS_SD3_BASE, 0X110)/*SDHC LEGACY CTRL for CEATA Device Register*/
#define REG_SD1_SDHC_MMC_CTRL_REG                         ASR_ADDR(REGS_SD1_BASE, 0X114)/*SDHC MMC DEVICE CTRL Registers*/
#define REG_SD2_SDHC_MMC_CTRL_REG                         ASR_ADDR(REGS_SD2_BASE, 0X114)/*SDHC MMC DEVICE CTRL Registers*/
#define REG_SD3_SDHC_MMC_CTRL_REG                         ASR_ADDR(REGS_SD3_BASE, 0X114)/*SDHC MMC DEVICE CTRL Registers*/
#define REG_SD1_SDHC_RX_CFG_REG                           ASR_ADDR(REGS_SD1_BASE, 0X118)/*SDHC RX Configuration Register*/
#define REG_SD2_SDHC_RX_CFG_REG                           ASR_ADDR(REGS_SD2_BASE, 0X118)/*SDHC RX Configuration Register*/
#define REG_SD3_SDHC_RX_CFG_REG                           ASR_ADDR(REGS_SD3_BASE, 0X118)/*SDHC RX Configuration Register*/
#define REG_SD1_SDHC_TX_CFG_REG                           ASR_ADDR(REGS_SD1_BASE, 0X11C)/*SDHC TX Configuration Register*/
#define REG_SD2_SDHC_TX_CFG_REG                           ASR_ADDR(REGS_SD2_BASE, 0X11C)/*SDHC TX Configuration Register*/
#define REG_SD3_SDHC_TX_CFG_REG                           ASR_ADDR(REGS_SD3_BASE, 0X11C)/*SDHC TX Configuration Register*/
#define REG_SD1_SDHC_HWTUNE_CFG_REG                       ASR_ADDR(REGS_SD1_BASE, 0X120)/*SDHC HW TUNING Configuration Register*/
#define REG_SD2_SDHC_HWTUNE_CFG_REG                       ASR_ADDR(REGS_SD2_BASE, 0X120)/*SDHC HW TUNING Configuration Register*/
#define REG_SD3_SDHC_HWTUNE_CFG_REG                       ASR_ADDR(REGS_SD3_BASE, 0X120)/*SDHC HW TUNING Configuration Register*/
#define REG_SD1_SDHC_HWTUNE_CFG2_REG                      ASR_ADDR(REGS_SD1_BASE, 0X124)/*SDHC HW TUNING Configuration2 Register*/
#define REG_SD2_SDHC_HWTUNE_CFG2_REG                      ASR_ADDR(REGS_SD2_BASE, 0X124)/*SDHC HW TUNING Configuration2 Register*/
#define REG_SD3_SDHC_HWTUNE_CFG2_REG                      ASR_ADDR(REGS_SD3_BASE, 0X124)/*SDHC HW TUNING Configuration2 Register*/
#define REG_SD1_SDHC_ROUNDTRIP_TIMING_REG                 ASR_ADDR(REGS_SD1_BASE, 0X128)/*SDHC ROUND TRIP(TRANSIMIT TO RECEIVE) TIMING PARAM Regsiter*/
#define REG_SD2_SDHC_ROUNDTRIP_TIMING_REG                 ASR_ADDR(REGS_SD2_BASE, 0X128)/*SDHC ROUND TRIP(TRANSIMIT TO RECEIVE) TIMING PARAM Regsiter*/
#define REG_SD3_SDHC_ROUNDTRIP_TIMING_REG                 ASR_ADDR(REGS_SD3_BASE, 0X128)/*SDHC ROUND TRIP(TRANSIMIT TO RECEIVE) TIMING PARAM Regsiter*/
#define REG_SD1_SDHC_GPIO_CFG_REG                         ASR_ADDR(REGS_SD1_BASE, 0X12C)/*SDHC GPIO CFG Register*/
#define REG_SD2_SDHC_GPIO_CFG_REG                         ASR_ADDR(REGS_SD2_BASE, 0X12C)/*SDHC GPIO CFG Register*/
#define REG_SD3_SDHC_GPIO_CFG_REG                         ASR_ADDR(REGS_SD3_BASE, 0X12C)/*SDHC GPIO CFG Register*/
#define REG_SD1_SDHC_DLINE_CTRL_REG                       ASR_ADDR(REGS_SD1_BASE, 0X130)/*SDHC DELAYLINE Control Register*/
#define REG_SD2_SDHC_DLINE_CTRL_REG                       ASR_ADDR(REGS_SD2_BASE, 0X130)/*SDHC DELAYLINE Control Register*/
#define REG_SD3_SDHC_DLINE_CTRL_REG                       ASR_ADDR(REGS_SD3_BASE, 0X130)/*SDHC DELAYLINE Control Register*/
#define REG_SD1_SDHC_DLINE_CFG_REG                        ASR_ADDR(REGS_SD1_BASE, 0X134)/*SDHC DELAYLINE CFG Register*/
#define REG_SD2_SDHC_DLINE_CFG_REG                        ASR_ADDR(REGS_SD2_BASE, 0X134)/*SDHC DELAYLINE CFG Register*/
#define REG_SD3_SDHC_DLINE_CFG_REG                        ASR_ADDR(REGS_SD3_BASE, 0X134)/*SDHC DELAYLINE CFG Register*/
#define REG_SD1_SDHC_PHY_CTRL_REG                         ASR_ADDR(REGS_SD1_BASE, 0X160)/*SDHC PHY Control Register*/
#define REG_SD2_SDHC_PHY_CTRL_REG                         ASR_ADDR(REGS_SD2_BASE, 0X160)/*SDHC PHY Control Register*/
#define REG_SD3_SDHC_PHY_CTRL_REG                         ASR_ADDR(REGS_SD3_BASE, 0X160)/*SDHC PHY Control Register*/
#define REG_SD1_SDHC_PHY_FUNC_REG                         ASR_ADDR(REGS_SD1_BASE, 0X164)/*SDHC PHY Function Configuration Register*/
#define REG_SD2_SDHC_PHY_FUNC_REG                         ASR_ADDR(REGS_SD2_BASE, 0X164)/*SDHC PHY Function Configuration Register*/
#define REG_SD3_SDHC_PHY_FUNC_REG                         ASR_ADDR(REGS_SD3_BASE, 0X164)/*SDHC PHY Function Configuration Register*/
#define REG_SD1_SDHC_PHY_DLLCFG_REG                       ASR_ADDR(REGS_SD1_BASE, 0X0168)/*SDHC PHY DLL Configuration Register*/
#define REG_SD2_SDHC_PHY_DLLCFG_REG                       ASR_ADDR(REGS_SD2_BASE, 0X0168)/*SDHC PHY DLL Configuration Register*/
#define REG_SD3_SDHC_PHY_DLLCFG_REG                       ASR_ADDR(REGS_SD3_BASE, 0X0168)/*SDHC PHY DLL Configuration Register*/
#define REG_SD1_SDHC_PHY_DLLCFG1_REG                      ASR_ADDR(REGS_SD1_BASE, 0X016C)/*SDHC PHY DLL Configuration1 Register*/
#define REG_SD2_SDHC_PHY_DLLCFG1_REG                      ASR_ADDR(REGS_SD2_BASE, 0X016C)/*SDHC PHY DLL Configuration1 Register*/
#define REG_SD3_SDHC_PHY_DLLCFG1_REG                      ASR_ADDR(REGS_SD3_BASE, 0X016C)/*SDHC PHY DLL Configuration1 Register*/
#define REG_SD1_SDHC_PHY_DLLSTS_REG                       ASR_ADDR(REGS_SD1_BASE, 0X0170)/*SDHC PHY DLL Status & reserved configuration Register*/
#define REG_SD2_SDHC_PHY_DLLSTS_REG                       ASR_ADDR(REGS_SD2_BASE, 0X0170)/*SDHC PHY DLL Status & reserved configuration Register*/
#define REG_SD3_SDHC_PHY_DLLSTS_REG                       ASR_ADDR(REGS_SD3_BASE, 0X0170)/*SDHC PHY DLL Status & reserved configuration Register*/
#define REG_SD1_SDHC_PHY_DLLSTS1_REG                      ASR_ADDR(REGS_SD1_BASE, 0X0174)/*SDHC PHY DLL Status1 Register*/
#define REG_SD2_SDHC_PHY_DLLSTS1_REG                      ASR_ADDR(REGS_SD2_BASE, 0X0174)/*SDHC PHY DLL Status1 Register*/
#define REG_SD3_SDHC_PHY_DLLSTS1_REG                      ASR_ADDR(REGS_SD3_BASE, 0X0174)/*SDHC PHY DLL Status1 Register*/
#define REG_SD1_SDHC_PHY_PADCFG_REG                       ASR_ADDR(REGS_SD1_BASE, 0X0178)/*SDHC PHY Pad Configration Register*/
#define REG_SD2_SDHC_PHY_PADCFG_REG                       ASR_ADDR(REGS_SD2_BASE, 0X0178)/*SDHC PHY Pad Configration Register*/
#define REG_SD3_SDHC_PHY_PADCFG_REG                       ASR_ADDR(REGS_SD3_BASE, 0X0178)/*SDHC PHY Pad Configration Register*/
#define REG_SD1_SDHC_PHY_PADCFG1_REG                      ASR_ADDR(REGS_SD1_BASE, 0X017C)/*SDHC PHY Pad Configration1 Register*/
#define REG_SD2_SDHC_PHY_PADCFG1_REG                      ASR_ADDR(REGS_SD2_BASE, 0X017C)/*SDHC PHY Pad Configration1 Register*/
#define REG_SD3_SDHC_PHY_PADCFG1_REG                      ASR_ADDR(REGS_SD3_BASE, 0X017C)/*SDHC PHY Pad Configration1 Register*/
#define REG_SD1_SDHC_PHY_LBCTRL_REG                       ASR_ADDR(REGS_SD1_BASE, 0X0180)/*SDHC PHY LoopBack Control Register*/
#define REG_SD2_SDHC_PHY_LBCTRL_REG                       ASR_ADDR(REGS_SD2_BASE, 0X0180)/*SDHC PHY LoopBack Control Register*/
#define REG_SD3_SDHC_PHY_LBCTRL_REG                       ASR_ADDR(REGS_SD3_BASE, 0X0180)/*SDHC PHY LoopBack Control Register*/
#define REG_SD1_SDHC_PHY_LBFUNC_REG                       ASR_ADDR(REGS_SD1_BASE, 0X0184)/*SDHC PHY LoopBack Function Configuration Register*/
#define REG_SD2_SDHC_PHY_LBFUNC_REG                       ASR_ADDR(REGS_SD2_BASE, 0X0184)/*SDHC PHY LoopBack Function Configuration Register*/
#define REG_SD3_SDHC_PHY_LBFUNC_REG                       ASR_ADDR(REGS_SD3_BASE, 0X0184)/*SDHC PHY LoopBack Function Configuration Register*/
#define REG_SD1_SDHC_PHY_LBCNT_REG                        ASR_ADDR(REGS_SD1_BASE, 0X0188)/*SDHC PHY LoopBack Comparison Count
Register*/
#define REG_SD2_SDHC_PHY_LBCNT_REG                        ASR_ADDR(REGS_SD2_BASE, 0X0188)/*SDHC PHY LoopBack Comparison Count
Register*/
#define REG_SD3_SDHC_PHY_LBCNT_REG                        ASR_ADDR(REGS_SD3_BASE, 0X0188)/*SDHC PHY LoopBack Comparison Count
Register*/
#define REG_SD1_SDHC_PHY_LBSTS_REG                        ASR_ADDR(REGS_SD1_BASE, 0X018C)/*SDHC PHY LoopBack Error Status Register*/
#define REG_SD2_SDHC_PHY_LBSTS_REG                        ASR_ADDR(REGS_SD2_BASE, 0X018C)/*SDHC PHY LoopBack Error Status Register*/
#define REG_SD3_SDHC_PHY_LBSTS_REG                        ASR_ADDR(REGS_SD3_BASE, 0X018C)/*SDHC PHY LoopBack Error Status Register*/
#define REG_SD1_SDHC_PHY_LBDATA_REG                       ASR_ADDR(REGS_SD1_BASE, 0X0190)/*SDHC PHY LoopBack DATA Pattern Configuration Register*/
#define REG_SD2_SDHC_PHY_LBDATA_REG                       ASR_ADDR(REGS_SD2_BASE, 0X0190)/*SDHC PHY LoopBack DATA Pattern Configuration Register*/
#define REG_SD3_SDHC_PHY_LBDATA_REG                       ASR_ADDR(REGS_SD3_BASE, 0X0190)/*SDHC PHY LoopBack DATA Pattern Configuration Register*/
#define REG_SD1_SDHC_PHY_LBDATA_REG                       ASR_ADDR(REGS_SD1_BASE, 0X194)/*SDHC PHY LoopBack DATA Pattern Configuration Register*/
#define REG_SD2_SDHC_PHY_LBDATA_REG                       ASR_ADDR(REGS_SD2_BASE, 0X194)/*SDHC PHY LoopBack DATA Pattern Configuration Register*/
#define REG_SD3_SDHC_PHY_LBDATA_REG                       ASR_ADDR(REGS_SD3_BASE, 0X194)/*SDHC PHY LoopBack DATA Pattern Configuration Register*/
#define REG_SD1_CQE_CQBDCTRL_REG                          ASR_ADDR(REGS_SD1_BASE, 0X01F4)/*SDHC Command Queue Debug Information Content Registers*/
#define REG_SD2_CQE_CQBDCTRL_REG                          ASR_ADDR(REGS_SD2_BASE, 0X01F4)/*SDHC Command Queue Debug Information Content Registers*/
#define REG_SD3_CQE_CQBDCTRL_REG                          ASR_ADDR(REGS_SD3_BASE, 0X01F4)/*SDHC Command Queue Debug Information Content Registers*/



/* bits definitions for register REG_SD3_SD_SYS_ADDR_LOW */
#define BITS_SD1S_DMA_ADDR_L20(_X_)                       ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_SYS_ADDR_HIGH */
#define BITS_SD1S_DMA_ADDR_H27(_X_)                       ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_BLOCK_SIZE */
#define BITS_SD1S_HOST_DMA_BDRY35(_X_)                    ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)) )
#define BITS_SD1S_BLOCK_SIZE36(_X_)                       ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)) )

/* bits definitions for register REG_SD3_SD_BLOCK_COUNT */
#define BITS_SD1S_BLOCK_COUNT43(_X_)                      ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_ARG_LOW */
#define BITS_SD1S_ARG_L50(_X_)                            ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_ARG_HIGH */
#define BITS_SD1S_ARG_H57(_X_)                            ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_TRANSFER_MODE */
#define BIT_SD1S_MULTI_BLK_SEL65                          ( BIT(5) )
#define BIT_SD1S_TO_HOST_DIR66                            ( BIT(4) )
#define BITS_SD1S_AUTO_CMD_EN67(_X_)                      ( (_X_) << 2 & (BIT(2)|BIT(3)) )
#define BIT_SD1S_BLK_CNT_EN68                             ( BIT(1) )
#define BIT_SD1S_DMA_EN69                                 ( BIT(0) )

/* bits definitions for register REG_SD3_SD_CMD */
#define BITS_SD1S_CMD_INDEX77(_X_)                        ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)) )
#define BITS_SD1S_CMD_TYPE78(_X_)                         ( (_X_) << 6 & (BIT(6)|BIT(7)) )
#define BIT_SD1S_DATA_PRESENT79                           ( BIT(5) )
#define BIT_SD1S_CMD_INDEX_CHK_EN80                       ( BIT(4) )
#define BIT_SD1S_CMD_CRC_CHK_EN81                         ( BIT(3) )
#define BITS_SD1S_RESP_TYPE83(_X_)                        ( (_X_) & (BIT(0)|BIT(1)) )

/* bits definitions for register REG_SD3_SD_RESP_0 */
#define BITS_SD1S_RESP090(_X_)                            ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_RESP_1 */
#define BITS_SD1S_RESP197(_X_)                            ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_RESP_2 */
#define BITS_SD1S_RESP2104(_X_)                           ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_RESP_3 */
#define BITS_SD1S_RESP3111(_X_)                           ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_RESP_4 */
#define BITS_SD1S_RESP4118(_X_)                           ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_RESP_5 */
#define BITS_SD1S_RESP5125(_X_)                           ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_RESP_6 */
#define BITS_SD1S_RESP6132(_X_)                           ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_RESP_7 */
#define BITS_SD1S_RESP7139(_X_)                           ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_BUFFER_DATA_PORT_0 */
#define BITS_SD1S_CPU_DATA0146(_X_)                       ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_BUFFER_DATA_PORT_1 */
#define BITS_SD1S_CPU_DATA1153(_X_)                       ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_PRESENT_STATE_1 */
#define BIT_SD1S_BUFFER_RD_EN161                          ( BIT(11) )
#define BIT_SD1S_BUFFER_WR_EN162                          ( BIT(10) )
#define BIT_SD1S_RX_ACTIVE163                             ( BIT(9) )
#define BIT_SD1S_TX_ACTIVE170                             ( BIT(8) )
#define BIT_SD1S_RETUNING_REQ178                          ( BIT(3) )
#define BIT_SD1S__DAT_ACTIVE179                           ( BIT(2) )
#define BIT_SD1S_CMD_INHIBIT_DAT180                       ( BIT(1) )
#define BIT_SD1S_CMD_INHIBIT_CMD181                       ( BIT(0) )

/* bits definitions for register REG_SD3_SD_PRESENT_STATE_2 */
#define BIT_SD1S_CMD_LEVEL189                             ( BIT(8) )
#define BITS_DAT_LEVEL190(_X_)                            ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BIT_SD1S_WRITE_PROT191                            ( BIT(3) )
#define BIT_SD1S_CARD_DET192                              ( BIT(2) )
#define BIT_SD1S_CARD_STABLE193                           ( BIT(1) )
#define BIT_SD1S_CARD_INSERTED194                         ( BIT(0) )

/* bits definitions for register REG_SD3_SD_HOST_CTRL */
#define BITS_SD1S_SD_BUS_VLT202(_X_)                      ( (_X_) << 9 & (BIT(9)|BIT(10)|BIT(11)) )
#define BIT_SD1S_SD_BUS_POWER203                          ( BIT(8) )
#define BIT_SD1S_CARD_DET_S205                            ( BIT(7) )
#define BIT_SD1S_CARD_DET_L206                            ( BIT(6) )
#define BIT_SD1S_EX_DATA_WIDTH207                         ( BIT(5) )
#define BITS_SD1S_DMA_SEL208(_X_)                         ( (_X_) << 3 & (BIT(3)|BIT(4)) )
#define BIT_SD1S_HI_SPEED_EN209                           ( BIT(2) )
#define BIT_SD1S_DATA_WIDTH210                            ( BIT(1) )
#define BIT_SD1S_LED_CTRL211                              ( BIT(0) )

/* bits definitions for register REG_SD3_SD_BLOCK_GAP_CTRL */
#define BIT_SD1S_W_REMOVAL219                             ( BIT(10) )
#define BIT_SD1S_W_INSERTION220                           ( BIT(9) )
#define BIT_SD1S_W_CARD_INT221                            ( BIT(8) )
#define BIT_SD1S_INT_BLK_GAP223                           ( BIT(3) )
#define BIT_SD1S_RD_WAIT_CTL224                           ( BIT(2) )
#define BIT_SD1S_CONT_REQ227                              ( BIT(1) )
#define BIT_SD1S_STOP_AT_BLOCK_GAP_REQ231                 ( BIT(0) )

/* bits definitions for register REG_SD3_SD_CLOCK_CTRL */
#define BITS_SD1S_SD_FREQ_SEL_LO238(_X_)                  ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_SD1S_SD_FREQ_SEL_HI239(_X_)                  ( (_X_) << 6 & (BIT(6)|BIT(7)) )
#define BIT_SD1S_CLK_GEN_SEL240                           ( BIT(5) )
#define BIT_SD1S_SD_CLK_EN242                             ( BIT(2) )
#define BIT_SD1S_INT_CLK_STABLE243                        ( BIT(1) )
#define BIT_SD1S_INT_CLK_EN244                            ( BIT(0) )

/* bits definitions for register REG_SD3_SD_TIMEOUT_CTRL_SW_RESET */
#define BIT_SD1S_SW_RST_DAT252                            ( BIT(10) )
#define BIT_SD1S_SW_RST_CMD253                            ( BIT(9) )
#define BIT_SD1S_SW_RST_ALL254                            ( BIT(8) )
#define BITS_SD1S_TIMEOUT_VALUE256(_X_)                   ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_SD3_SD_NORMAL_INT_STATUS */
#define BIT_SD1S_ERR_INT267                               ( BIT(15) )
#define BIT_CQ_INT                                        ( BIT(14) )
#define BIT_SD1S_RETUNING_INT270                          ( BIT(12) )
#define BIT_SD1S_INT_C271                                 ( BIT(11) )
#define BIT_SD1S_INT_B272                                 ( BIT(10) )
#define BIT_SD1S_INT_A273                                 ( BIT(9) )
#define BIT_SD1S_CARD_INT274                              ( BIT(8) )
#define BIT_SD1S_CARD_REM_INT275                          ( BIT(7) )
#define BIT_SD1S_CARD_INS_INT276                          ( BIT(6) )
#define BIT_SD1S_RX_RDY277                                ( BIT(5) )
#define BIT_SD1S_TX_RDY278                                ( BIT(4) )
#define BIT_SD1S_DMA_INT279                               ( BIT(3) )
#define BIT_SD1S_BLOCK_GAP_EVT280                         ( BIT(2) )
#define BIT_SD1S_XFER_COMPLETE281                         ( BIT(1) )
#define BIT_SD1S_CMD_COMPLETE287                          ( BIT(0) )

/* bits definitions for register REG_SD3_SD_ERROR_INT_STATUS */
#define BIT_SD1S_CRC_STATUS_ERR294                        ( BIT(15) )
#define BIT_SD1S_CPL_TIMEOUT_ERR295                       ( BIT(14) )
#define BIT_SD1S_AXI_RESP_ERR296                          ( BIT(13) )
#define BIT_SD1S_SPI_ERR297                               ( BIT(12) )
#define BIT_SD1S_ADMA_ERR299                              ( BIT(9) )
#define BIT_SD1S_AUTO_CMD12_ERR300                        ( BIT(8) )
#define BIT_SD1S_CUR_LIMIT_ERR301                         ( BIT(7) )
#define BIT_SD1S_RD_DATA_END_BIT_ERR302                   ( BIT(6) )
#define BIT_SD1S_RD_DATA_CRC_ERR303                       ( BIT(5) )
#define BIT_SD1S_DATA_TIMEOUT_ERR304                      ( BIT(4) )
#define BIT_SD1S_CMD_INDEX_ERR308                         ( BIT(3) )
#define BIT_SD1S_CMD_END_BIT_ERR309                       ( BIT(2) )
#define BIT_SD1S_CMD_CRC_ERR310                           ( BIT(1) )
#define BIT_SD1S_CMD_TIMEOUT_ERR313                       ( BIT(0) )

/* bits definitions for register REG_SD3_SD_NORMAL_INT_STATUS_EN */
#define BIT_CQ_STATUS_EN                                  ( BIT(14) )
#define BIT_SD1S_RETUNE_INT_EN323                         ( BIT(12) )
#define BIT_SD1S_INT_C_INT_EN324                          ( BIT(11) )
#define BIT_SD1S_INT_B_INT_EN325                          ( BIT(10) )
#define BIT_SD1S_INT_A_INT_EN326                          ( BIT(9) )
#define BIT_SD1S_CARD_INT_EN327                           ( BIT(8) )
#define BIT_SD1S_CARD_REM_EN328                           ( BIT(7) )
#define BIT_SD1S_CARD_INS_EN329                           ( BIT(6) )
#define BIT_SD1S_RD_RDY_EN330                             ( BIT(5) )
#define BIT_SD1S_TX_RDY_EN331                             ( BIT(4) )
#define BIT_SD1S_DMA_INT_EN332                            ( BIT(3) )
#define BIT_SD1S_BLOCK_GAP_EVT_EN333                      ( BIT(2) )
#define BIT_SD1S_XFER_COMPLETE_EN334                      ( BIT(1) )
#define BIT_SD1S_CMD_COMPLETE_EN335                       ( BIT(0) )

/* bits definitions for register REG_SD3_SD_ERROR_INT_STATUS_EN */
#define BIT_SD1S_CRC_STATUS_ERR_EN342                     ( BIT(15) )
#define BIT_SD1S_CPL_TIMEOUT_ERR_EN343                    ( BIT(14) )
#define BIT_SD1S_AXI_RESP_ERR_EN344                       ( BIT(13) )
#define BIT_SD1S_SPI_ERR_EN345                            ( BIT(12) )
#define BIT_SD1S_TUNING_ERR_EN347                         ( BIT(10) )
#define BIT_SD1S_ADMA_ERR_EN348                           ( BIT(9) )
#define BIT_SD1S_AUTO_CMD12_ERR_EN349                     ( BIT(8) )
#define BIT_SD1S_CUR_LIM_ERR_EN350                        ( BIT(7) )
#define BIT_SD1S_RD_DATA_END_BIT_ERR_EN351                ( BIT(6) )
#define BIT_SD1S_RD_DATA_CRC_ERR_EN352                    ( BIT(5) )
#define BIT_SD1S_DATA_TIMEOUT_ERR_EN353                   ( BIT(4) )
#define BIT_SD1S_CMD_INDEX_ERR_EN354                      ( BIT(3) )
#define BIT_SD1S_CMD_END_BIT_ERR_EN355                    ( BIT(2) )
#define BIT_SD1S_CMD_CRC_ERR_EN356                        ( BIT(1) )
#define BIT_SD1S_CMD_TIMEOUT_ERR_EN357                    ( BIT(0) )

/* bits definitions for register REG_SD3_SD_NORMAL_INT_STATUS_INT_EN */
#define BIT_CQ_SIGNAL_ENABLE                              ( BIT(14) )
#define BIT_SD1S_RETUNE_INT_INT_EN367                     ( BIT(12) )
#define BIT_SD1S_INT_C_INT_INT_EN368                      ( BIT(11) )
#define BIT_SD1S_INT_B_INT_INT_EN369                      ( BIT(10) )
#define BIT_SD1S_INT_A_INT_INT_EN370                      ( BIT(9) )
#define BIT_SD1S_CARD_INT_INT_EN371                       ( BIT(8) )
#define BIT_SD1S_CARD_REM_INT_EN372                       ( BIT(7) )
#define BIT_SD1S_CARD_INS_INT_EN373                       ( BIT(6) )
#define BIT_SD1S_RX_RDY_INT_EN374                         ( BIT(5) )
#define BIT_SD1S_TX_RDY_INT_EN375                         ( BIT(4) )
#define BIT_SD1S_DMA_INT_INT_EN376                        ( BIT(3) )
#define BIT_SD1S_BLOCK_GAP_EVT_INT_EN377                  ( BIT(2) )
#define BIT_SD1S_XFER_COMPLETE_INT_EN378                  ( BIT(1) )
#define BIT_SD1S_CMD_COMPLETE_INT_EN379                   ( BIT(0) )

/* bits definitions for register REG_SD3_SD_ERROR_INT_STATUS_INT_EN */
#define BIT_SD1S_CRC_STATUS_ERR_INT_EN386                 ( BIT(15) )
#define BIT_SD1S_CPL_TIMEOUT_ERR_INT_EN387                ( BIT(14) )
#define BIT_SD1S_AXI_RESP_ERR_INT_EN388                   ( BIT(13) )
#define BIT_SD1S_SPI_ERR_INT_EN389                        ( BIT(12) )
#define BIT_SD1S_TUNE_ERR_INT_EN391                       ( BIT(10) )
#define BIT_SD1S_ADMA_ERR_INT_EN392                       ( BIT(9) )
#define BIT_SD1S_AUTO_CMD12_ERR_INT_EN393                 ( BIT(8) )
#define BIT_SD1S_CUR_LIM_ERR_INT_EN394                    ( BIT(7) )
#define BIT_SD1S_RD_DATA_END_BIT_ERR_INT_EN395            ( BIT(6) )
#define BIT_SD1S_RD_DATA_CRC_ERR_INT_EN396                ( BIT(5) )
#define BIT_SD1S_DATA_TIMEOUT_ERR_INT_EN397               ( BIT(4) )
#define BIT_SD1S_CMD_INDEX_ERR_INT_EN398                  ( BIT(3) )
#define BIT_SD1S_CMD_END_BIT_ERR_INT_EN399                ( BIT(2) )
#define BIT_SD1S_CMD_CRC_ERR_INT_EN400                    ( BIT(1) )
#define BIT_SD1S_CMD_TIMEOUT_ERR_INT_EN401                ( BIT(0) )

/* bits definitions for register REG_SD3_SD_AUTO_CMD12_ERROR_STATUS */
#define BIT_SD1S_CMD_NOT_ISSUED409                        ( BIT(7) )
#define BIT_SD1S_AUTO_CMD_INDEX_ERR411                    ( BIT(4) )
#define BIT_SD1S_AUTO_CMD_END_BIT_ERR412                  ( BIT(3) )
#define BIT_SD1S_AUTO_CMD_CRC_ERR413                      ( BIT(2) )
#define BIT_SD1S_AUTO_CMD_TIMEOUT_ERR414                  ( BIT(1) )
#define BIT_SD1S_AUTO_CMD12_NOT_EXE415                    ( BIT(0) )

/* bits definitions for register REG_SD3_HOST_CTRL_2 */
#define BIT_SD1S_PRE_VAL_EN422                            ( BIT(15) )
#define BIT_SD1S_ASYNC_INT_EN423                          ( BIT(14) )
#define BIT_SD1S_SAMPLING_CLK_SEL425                      ( BIT(7) )
#define BIT_SD1S_EXE_TUNING426                            ( BIT(6) )
#define BITS_SD1S_DRV_STRENGTH_SEL427(_X_)                ( (_X_) << 4 & (BIT(4)|BIT(5)) )
#define BIT_SD1S_SDH_V18_EN428                            ( BIT(3) )
#define BITS_SD1S_UHS_MODE_SEL429(_X_)                    ( (_X_) & (BIT(0)|BIT(1)|BIT(2)) )

/* bits definitions for register REG_SD3_SD_CAPABILITIES_1 */
#define BITS_SD1S_BASE_FREQ436(_X_)                       ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BIT_SD1S_TIMEOUT_UNIT437                          ( BIT(7) )
#define BITS_SD1S_TIMEOUT_FREQ439(_X_)                    ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)) )

/* bits definitions for register REG_SD3_SD_CAPABILITIES_2 */
#define BITS_SD1S_CFG_SLOT_TYPE446(_X_)                   ( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BIT_SD1S_ASYNC_INT_SUPPORT447                     ( BIT(13) )
#define BIT_SD1S_SYS_BUS_64_SUPPORT448                    ( BIT(12) )
#define BIT_SD1S_VLG_18_SUPPORT450                        ( BIT(10) )
#define BIT_SD1S_VLG_30_SUPPORT451                        ( BIT(9) )
#define BIT_SD1S_VLG_33_SUPPORT452                        ( BIT(8) )
#define BIT_SD1S_SUS_RES_SUPPORT453                       ( BIT(7) )
#define BIT_SD1S_SDMA_SUPPORT454                          ( BIT(6) )
#define BIT_SD1S_HI_SPEED_SUPPORT455                      ( BIT(5) )
#define BIT_SD1S_ADMA1_SUPPORT456                         ( BIT(4) )
#define BIT_SD1S_ADMA2_SUPPORT457                         ( BIT(3) )
#define BIT_SD1S_EX_DATA_WIDTH_SUPPORT458                 ( BIT(2) )
#define BITS_SD1S_MAX_BLK_LEN459(_X_)                     ( (_X_) & (BIT(0)|BIT(1)) )

/* bits definitions for register REG_SD3_SD_CAPABILITIES_3 */
#define BITS_SD1S_RETUNE_MODES466(_X_)                    ( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BIT_SD1S_SDR50_TUNE467                            ( BIT(13) )
#define BITS_SD1S_TMR_RETUNE469(_X_)                      ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BIT_SD1S_DRV_TYPE_D471                            ( BIT(6) )
#define BIT_SD1S_DRV_TYPE_C472                            ( BIT(5) )
#define BIT_SD1S_DRV_TYPE_A473                            ( BIT(4) )
#define BIT_SD1S_DDR50_SUPPORT475                         ( BIT(2) )
#define BIT_SD1S_SDR104_SUPPORT476                        ( BIT(1) )
#define BIT_SD1S_SDR50_SUPPORT477                         ( BIT(0) )

/* bits definitions for register REG_SD3_SD_CAPABILITIES_4 */
#define BITS_SD1S_<CLK_MULTIPLIER>485(_X_)                ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_SD3_SD_MAX_CURRENT_1 */
#define BITS_SD1S_MAX_CUR_30492(_X_)                      ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_SD1S_MAX_CUR_33493(_X_)                      ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_SD3_SD_MAX_CURRENT_2 */
#define BITS_SD1S_MAX_CUR_18501(_X_)                      ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_SD3_SD_MAX_CURRENT_3 */

/* bits definitions for register REG_SD3_SD_MAX_CURRENT_4 */

/* bits definitions for register REG_SD3_SD_FORCE_EVENT_AUTO_CMD12_ERROR */
#define BIT_SD1S_F_ACMD12_ISSUE_ERR523                    ( BIT(7) )
#define BIT_SD1S_F_ACMD_INDEX_ERR525                      ( BIT(4) )
#define BIT_SD1S_F__ACMD_EBIT_ERR526                      ( BIT(3) )
#define BIT_SD1S_F_ACMD_CRC_ERR527                        ( BIT(2) )
#define BIT_SD1S_F_ACMD_TO_ERR528                         ( BIT(1) )
#define BIT_SD1S_F_ACMD12_NEXE_ERR529                     ( BIT(0) )

/* bits definitions for register REG_SD3_SD_FORCE_EVENT_FOR_ERROR_STATUS */
#define BIT_SD1S_F_CRC_STATUS_ERR536                      ( BIT(15) )
#define BIT_SD1S_F_CPL_TIMEOUT_ERR537                     ( BIT(14) )
#define BIT_SD1S_F_AXI_RESP_ERR538                        ( BIT(13) )
#define BIT_SD1S_F_SPI_ERR539                             ( BIT(12) )
#define BIT_SD1S_F_ADMA_ERR541                            ( BIT(9) )
#define BIT_SD1S_F_ACMD12_ERR542                          ( BIT(8) )
#define BIT_SD1S_F_CURRENT_ERR543                         ( BIT(7) )
#define BIT_SD1S_F_DAT_END_BIT_ERR544                     ( BIT(6) )
#define BIT_SD1S_F_DAT_CRC_ERR545                         ( BIT(5) )
#define BIT_SD1S_F_DAT_TO_ERR546                          ( BIT(4) )
#define BIT_SD1S_F_CMD_INDEX_ERR547                       ( BIT(3) )
#define BIT_SD1S_F_CMD_END_BIT_ERR548                     ( BIT(2) )
#define BIT_SD1S_F_CMD_CRC_ERR549                         ( BIT(1) )
#define BIT_SD1S_F_CMD_TO_ERR550                          ( BIT(0) )

/* bits definitions for register REG_SD3_SD_ADMA_ERROR_STATUS */
#define BIT_SD1S_ADMA_LEN_ERR558                          ( BIT(2) )
#define BITS_SD1S_ADMA_STATE561(_X_)                      ( (_X_) & (BIT(0)|BIT(1)) )

/* bits definitions for register REG_SD3_SD_ADMA_SYS_ADDR_1 */
#define BITS_ADMA_SYS_ADDR568(_X_)                        ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_ADMA_SYS_ADDR_2 */
#define BITS_ADMA_SYS_ADDR575(_X_)                        ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_ADMA_SYS_ADDR_3 */
#define BITS_ADMA_SYS_ADDR581(_X_)                        ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SD_ADMA_SYS_ADDR_4 */
#define BITS_ADMA_SYS_ADDR588(_X_)                        ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_PRESET_VALUE_FOR_INIT */
#define BITS_DRV_STRENGTH_VAL595(_X_)                     ( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BIT_CLKGEN_SEL_VAL597                             ( BIT(10) )
#define BITS_SDCLK_FREQ_SEL_VAL598(_X_)                   ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)) )

/* bits definitions for register REG_SD3_PRESET_VALUE_FOR_DS */
#define BITS_DRV_STRENGTH_VAL605(_X_)                     ( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BIT_CLKGEN_SEL_VAL607                             ( BIT(10) )
#define BITS_SDCLK_FREQ_SEL_VAL608(_X_)                   ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)) )

/* bits definitions for register REG_SD3_PRESET_VALUE_FOR_HS */
#define BITS_DRV_STRENGTH_VAL615(_X_)                     ( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BIT_CLKGEN_SEL_VAL617                             ( BIT(10) )
#define BITS_SDCLK_FREQ_SEL_VAL618(_X_)                   ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)) )

/* bits definitions for register REG_SD3_PRESET_VALUE_FOR_SDR12 */
#define BITS_DRV_STRENGTH_VAL625(_X_)                     ( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BIT_CLKGEN_SEL_VAL627                             ( BIT(10) )
#define BITS_SDCLK_FREQ_SEL_VAL628(_X_)                   ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)) )

/* bits definitions for register REG_SD3_PRESET_VALUE_FOR_SDR25 */
#define BITS_DRV_STRENGTH_VAL635(_X_)                     ( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BIT_CLKGEN_SEL_VAL637                             ( BIT(10) )
#define BITS_SDCLK_FREQ_SEL_VAL638(_X_)                   ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)) )

/* bits definitions for register REG_SD3_PRESET_VALUE_FOR_SDR50 */
#define BITS_DRV_STRENGTH_VAL645(_X_)                     ( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BIT_CLKGEN_SEL_VAL647                             ( BIT(10) )
#define BITS_SDCLK_FREQ_SEL_VAL648(_X_)                   ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)) )

/* bits definitions for register REG_SD3_PRESET_VALUE_FOR_SDR104 */
#define BITS_DRV_STRENGTH_VAL655(_X_)                     ( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BIT_CLKGEN_SEL_VAL657                             ( BIT(10) )
#define BITS_SDCLK_FREQ_SEL_VAL658(_X_)                   ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)) )

/* bits definitions for register REG_SD3_PRESET_VALUE_FOR_DDR50 */
#define BITS_DRV_STRENGTH_VAL665(_X_)                     ( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BIT_CLKGEN_SEL_VAL667                             ( BIT(10) )
#define BITS_SDCLK_FREQ_SEL_VAL668(_X_)                   ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)) )

/* bits definitions for register REG_SD3_SHARED_BUS_CTRL */
#define BITS_SD1S_BEND_PWR_CTRL676(_X_)                   ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)|BIT(30)) )
#define BITS_SD1S_INT_PIN_SEL678(_X_)                     ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)) )
#define BITS_SD1S_CLK_PIN_SEL680(_X_)                     ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)) )
#define BITS_SD1S_BUS_WIDTH_PRESET682(_X_)                ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)) )
#define BITS_SD1S_NUM_INT_PINS684(_X_)                    ( (_X_) << 4 & (BIT(4)|BIT(5)) )
#define BITS_SD1S_NUM_CLK_PINS686(_X_)                    ( (_X_) & (BIT(0)|BIT(1)|BIT(2)) )

/* bits definitions for register REG_SD3_SD_SLOT_INT_STATUS */
#define BIT_SD1S_SLOT_INT1694                             ( BIT(1) )
#define BIT_SD1S_SLOT_INT0695                             ( BIT(0) )

/* bits definitions for register REG_SD3_SD_HOST_CTRL_VER */
#define BITS_SD1S_SD_VER703(_X_)                          ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_SD3_SDHC_VID_PID */
#define BITS_VERSION_ID(_X_)                              ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_PROJECT_ID(_X_)                              ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_VENDOR_ID(_X_)                               ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)|BIT(16)|BIT(17)|BIT(18)|BIT(19)) )

/* bits definitions for register REG_SD3_SDHC_OP_CTRL */
#define BIT_SD1S_WR_OSTDG719                              ( BIT(15) )
#define BIT_SD1S_RD_OSTDG720                              ( BIT(14) )
#define BIT_SD1S_WR_ENDIAN722                             ( BIT(7) )
#define BIT_SD1S_RD_ENDIAN723                             ( BIT(6) )
#define BIT_SD1S_AXI_NON_POST_WR724                       ( BIT(5) )
#define BIT_SD1S_PRIORITY725                              ( BIT(4) )
#define BITS_SD1S_DMA_SIZE726(_X_)                        ( (_X_) << 2 & (BIT(2)|BIT(3)) )
#define BITS_SD1S_BRST_SIZE727(_X_)                       ( (_X_) & (BIT(0)|BIT(1)) )

/* bits definitions for register REG_SD3_SDHC_OP_EXT_REG */
#define BITS_ARM_EMA(_X_)                                 ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)) )
#define BITS_ARM_EMAW(_X_)                                ( (_X_) << 26 & (BIT(26)|BIT(27)) )
#define BIT_ARM_EMAS                                      ( BIT(25) )
#define BIT_ARM_RET1N                                     ( BIT(24) )
#define BITS_SD1S_PRE_GATE_CLK_CNT740(_X_)                ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BIT_SD1S_PDLVMC742                                ( BIT(14) )
#define BIT_SD1S_PDFVSSM743                               ( BIT(13) )
#define BIT_SD1S_FORCE_CLK_ON744                          ( BIT(12) )
#define BIT_SD1S_OVRRD_CLK_OEN745                         ( BIT(11) )
#define BIT_CLK_OE_USE_POS                                ( BIT(10) )
#define BIT_SD1S_CLK_GATE_ON747                           ( BIT(9) )
#define BIT_SD1S_CLK_GATE_CTL748                          ( BIT(8) )
#define BIT_SD1S_USE_DAT3750                              ( BIT(7) )
#define BIT_SD1S_PDWN751                                  ( BIT(6) )
#define BIT_SD1S_FIFO_CS752                               ( BIT(5) )
#define BIT_SD1S_FIFO_CLK753                              ( BIT(4) )
#define BITS_SD1S_WTC754(_X_)                             ( (_X_) << 2 & (BIT(2)|BIT(3)) )
#define BITS_SD1S_RTC755(_X_)                             ( (_X_) & (BIT(0)|BIT(1)) )

/* bits definitions for register REG_SD3_SDHC_LEGACY_CTRL_REG */
#define BITS_SD1S_GEN_PAD_CLK_CNT762(_X_)                 ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_SD1S_SPI_ERR_TOKEN764(_X_)                   ( (_X_) << 9 & (BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)) )
#define BIT_SD1S_SPI_EN765                                ( BIT(8) )
#define BIT_SD1S_GEN_PAD_CLK_ON767                        ( BIT(6) )
#define BIT_SD1S_SQU_FULL_CHK768                          ( BIT(5) )
#define BIT_SD1S_SQU_EMPTY_CHK769                         ( BIT(4) )
#define BIT_SD1S_BOOT_ACK770                              ( BIT(3) )
#define BIT_SD1S_INAND_SEL771                             ( BIT(2) )
#define BIT_SD1S_ASYNC_IO_EN772                           ( BIT(1) )
#define BIT_SD1S_PIO_RDFC774                              ( BIT(0) )

/* bits definitions for register REG_SD3_SDHC_LEGACY_CEATA_REG */
#define BITS_SD1S_CPL_TIMEOUT782(_X_)                     ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)) )
#define BIT_SD1S_CHK_CPL784                               ( BIT(2) )
#define BIT_SD1S_SND_CPL785                               ( BIT(1) )
#define BIT_SD1S_CEATA_CARD786                            ( BIT(0) )

/* bits definitions for register REG_SD3_SDHC_MMC_CTRL_REG */
#define BITS_DAT_LEVEL793(_X_)                            ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BIT_SD1S_MMC_CARD795                              ( BIT(12) )
#define BIT_SD1S_MMC_RESETN796                            ( BIT(11) )
#define BIT_SD1S_MMC_HS200797                             ( BIT(10) )
#define BIT_MMC_HS400                                     ( BIT(9) )
#define BIT_ENHANCE_STROBE_EN                             ( BIT(8) )
#define BIT_SD1S_CPL_COMPLETE801                          ( BIT(6) )
#define BIT_SD1S_CPL_COMPLETE_EN802                       ( BIT(5) )
#define BIT_SD1S_CPL_COMPLETE_INT_EN803                   ( BIT(4) )
#define BIT_SD1S_MISC_INT805                              ( BIT(2) )
#define BIT_SD1S_MISC_INT_EN806                           ( BIT(1) )
#define BIT_SD1S_MISC_INT_INT_EN807                       ( BIT(0) )

/* bits definitions for register REG_SD3_SDHC_RX_CFG_REG */
#define BITS_SD1S_TUNING_DLY_INC815(_X_)                  ( (_X_) << 18 & (BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_SD1S_SDCLK_DELAY816(_X_)                     ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)|BIT(16)|BIT(17)) )
#define BITS_SD1S_SDCLK_SEL1818(_X_)                      ( (_X_) << 2 & (BIT(2)|BIT(3)) )
#define BITS_SD1S_SDCLK_SEL0819(_X_)                      ( (_X_) & (BIT(0)|BIT(1)) )

/* bits definitions for register REG_SD3_SDHC_TX_CFG_REG */
#define BIT_SD1S_TX_MUX_SEL826                            ( BIT(31) )
#define BIT_SD1S_TX_INT_CLK_SEL827                        ( BIT(30) )
#define BIT_TX_DLINE_SRC_SEL                              ( BIT(29) )
#define BITS_SD1S_TX_HOLD_DELAY1830(_X_)                  ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)|BIT(25)) )
#define BITS_SD1S_TX_HOLD_DELAY0832(_X_)                  ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)) )

/* bits definitions for register REG_SD3_SDHC_HWTUNE_CFG_REG */
#define BITS_SD1S_TUNING_CLK_DLY840(_X_)                  ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)) )
#define BITS_SD1S_TUNING_WD_CNT841(_X_)                   ( (_X_) << 10 & (BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)|BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_SD1S_TUNING_TT_CNT842(_X_)                   ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)) )

/* bits definitions for register REG_SD3_SDHC_HWTUNE_CFG2_REG */
#define BITS_SD1S_TUNING_HW_START_CNT850(_X_)             ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)|BIT(25)) )
#define BITS_SD1S_TUNING_SUCCESS_CNT851(_X_)              ( (_X_) << 6 & (BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_TUNING_HW_SDCLK_SEL1(_X_)                    ( (_X_) << 2 & (BIT(2)|BIT(3)) )
#define BITS_SD1S_TUNING_HW_SDCLK_SEL0854(_X_)            ( (_X_) & (BIT(0)|BIT(1)) )

/* bits definitions for register REG_SD3_SDHC_ROUNDTRIP_TIMING_REG */
#define BITS_DATA0BUSY_WAIT_CYCLES(_X_)                   ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_SD1S_WRDATA0_WAIT_CYCLES864(_X_)             ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_SD1S_CMD2RESP_WAIT_CYCLES866(_X_)            ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BIT_TRS2RCV_PARAM_EN2                             ( BIT(2) )
#define BIT_SD1S_TRS2RCV_PARAM_EN1869                     ( BIT(1) )
#define BIT_SD1S_TRS2RCV_PARAM_EN0870                     ( BIT(0) )

/* bits definitions for register REG_SD3_SDHC_GPIO_CFG_REG */
#define BITS_SDHC_GPO(_X_)                                ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_SDHC_GPI(_X_)                                ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SDHC_DLINE_CTRL_REG */
#define BITS_TX_DLINE_CODE(_X_)                           ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_RX_DLINE_CODE(_X_)                           ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BIT_DLINE_PU                                      ( BIT(0) )

/* bits definitions for register REG_SD3_SDHC_DLINE_CFG_REG */
#define BIT_TX_DLINE_GAIN                                 ( BIT(24) )
#define BITS_TX_DLINE_REG(_X_)                            ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BIT_RX_DLINE_GAIN                                 ( BIT(8) )
#define BITS_RX_DLINE_REG(_X_)                            ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_SD3_SDHC_PHY_CTRL_REG */
#define BIT_HOST_LEGACY_MODE                              ( BIT(31) )
#define BITS_PHY_DCHNL_STATUS(_X_)                        ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PHY_DCHNL_SW(_X_)                            ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BIT_PHY_DCHNL_SEL                                 ( BIT(2) )
#define BIT_PHY_PLL_LOCK                                  ( BIT(1) )
#define BIT_PHY_FUNC_EN                                   ( BIT(0) )

/* bits definitions for register REG_SD3_SDHC_PHY_FUNC_REG */
#define BIT_RX_USE_STROBE                                 ( BIT(18) )
#define BIT_RX_USE_DLYLINE                                ( BIT(17) )
#define BIT_TX_USE_INVERT                                 ( BIT(16) )
#define BIT_HS200_USE_RFIFO                               ( BIT(15) )
#define BIT_RX_DIS_CKSTOP                                 ( BIT(14) )
#define BIT_PHY_TDI_SEL                                   ( BIT(13) )
#define BIT_TX_CKOUT_REVERSE                              ( BIT(12) )
#define BIT_TX_DDR_REVERSE                                ( BIT(11) )
#define BIT_RX_DDR_BKEN                                   ( BIT(10) )
#define BIT_RFIFO_BYPASS                                  ( BIT(9) )
#define BIT_CMD_USE_EVEN                                  ( BIT(8) )
#define BIT_PHY_TEST_EN                                   ( BIT(7) )
#define BITS_PHY_MODE_STATUS(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)) )
#define BITS_PHY_MODE_SW(_X_)                             ( (_X_) << 1 & (BIT(1)|BIT(2)|BIT(3)) )
#define BIT_PHY_MODE_SWEN                                 ( BIT(0) )

/* bits definitions for register REG_SD3_SDHC_PHY_DLLCFG_REG */
#define BIT_DLL_ENABLE                                    ( BIT(31) )
#define BIT_DLL_DELAY_SRC                                 ( BIT(30) )
#define BIT_DLL_REFRESH_SW                                ( BIT(29) )
#define BIT_DLL_REFRESH_SWEN                              ( BIT(28) )
#define BIT_DLL_REFRESH_ENABLE                            ( BIT(27) )
#define BITS_DLL_STEP_CTRL(_X_)                           ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DLL_DELAY_CTRL(_X_)                          ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DLL_VREG_CTRL(_X_)                           ( (_X_) << 6 & (BIT(6)|BIT(7)) )
#define BITS_DLL_FULLDLY_RANGE(_X_)                       ( (_X_) << 4 & (BIT(4)|BIT(5)) )
#define BITS_DLL_PREDLY_NUM(_X_)                          ( (_X_) << 2 & (BIT(2)|BIT(3)) )
#define BIT_DLL_BYPASS_ENABLE                             ( BIT(1) )
#define BIT_DLL_REFRESH_METHOD                            ( BIT(0) )

/* bits definitions for register REG_SD3_SDHC_PHY_DLLCFG1_REG */
#define BITS_DLL_REG3_CTRL(_X_)                           ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DLL_REG2_CTRL(_X_)                           ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_SD3_SDHC_PHY_DLLSTS_REG */
#define BITS_DLL_WORK_MODE(_X_)                           ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BIT_DLL_REFRESH_STATE                             ( BIT(1) )
#define BIT_DLL_LOCK_STATE                                ( BIT(0) )

/* bits definitions for register REG_SD3_SDHC_PHY_DLLSTS1_REG */
#define BITS_DLL_MASTER_DELAY(_X_)                        ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)) )
#define BITS_DLL_SLAVE_DELAY(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_SD3_SDHC_PHY_PADCFG_REG */
#define BITS_CLK_PU(_X_)                                  ( (_X_) << 20 & (BIT(20)|BIT(21)) )
#define BITS_DS_PU(_X_)                                   ( (_X_) << 18 & (BIT(18)|BIT(19)) )
#define BITS_CMD_PU(_X_)                                  ( (_X_) << 16 & (BIT(16)|BIT(17)) )
#define BITS_CLK_PD(_X_)                                  ( (_X_) << 12 & (BIT(12)|BIT(13)) )
#define BITS_DS_PD(_X_)                                   ( (_X_) << 10 & (BIT(10)|BIT(11)) )
#define BITS_CMD_PD(_X_)                                  ( (_X_) << 8 & (BIT(8)|BIT(9)) )
#define BITS_SLEW_RATE(_X_)                               ( (_X_) << 3 & (BIT(3)|BIT(4)) )
#define BITS_DRIVE_SEL(_X_)                               ( (_X_) & (BIT(0)|BIT(1)|BIT(2)) )

/* bits definitions for register REG_SD3_SDHC_PHY_PADCFG1_REG */
#define BITS_DQX_PU(_X_)                                  ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DQX_PD(_X_)                                  ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SDHC_PHY_LBCTRL_REG */
#define BIT_CLEAR_LB_ERR_STATUS                           ( BIT(31) )
#define BIT_START_STUCK0_DET_CLK                          ( BIT(2) )
#define BIT_START_STUCK1_DET_CLK                          ( BIT(1) )
#define BIT_LB_TEST_TRIGGER                               ( BIT(0) )

/* bits definitions for register REG_SD3_SDHC_PHY_LBFUNC_REG */
#define BITS_LB_DS_CNT(_X_)                               ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_LB_FILTER_CNT(_X_)                           ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BIT_LB_CMD_MASK                                   ( BIT(16) )
#define BITS_LB_DQ_MASK(_X_)                              ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BIT_LB_INVERT_CLK                                 ( BIT(3) )
#define BIT_CLK_PASSTH_DS                                 ( BIT(2) )
#define BIT_LB_PATTERN_SEL                                ( BIT(1) )
#define BIT_LB_MODE_EN                                    ( BIT(0) )

/* bits definitions for register REG_SD3_SDHC_PHY_LBCNT_REG */
#define BITS_LB_COMP_CNT(_X_)                             (_X_)

/* bits definitions for register REG_SD3_SDHC_PHY_LBSTS_REG */
#define BIT_LB_CLK_STUCK0_ERR                             ( BIT(21) )
#define BIT_LB_CLK_STUCK1_ERR                             ( BIT(20) )
#define BIT_LB_CMD_EVEN_ERR                               ( BIT(17) )
#define BIT_LB_CMD_ODD_ERR                                ( BIT(16) )
#define BITS_LB_DQ_EVEN_ERR(_X_)                          ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_LB_DQ_ODD_ERR(_X_)                           ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_SD3_SDHC_PHY_LBDATA_REG */
#define BIT_LB_PATTERN_RST                                ( BIT(31) )
#define BIT_LB_PATTERN_WRITE                              ( BIT(30) )
#define BITS_LB_CMD_PATTERN(_X_)                          ( (_X_) << 16 & (BIT(16)|BIT(17)) )
#define BITS_LB_DATA_PATTERN(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_SD3_SDHC_PHY_LBDATA_REG */
#define BIT_CQE_FSM_RST                                   ( BIT(31) )
#define BITS_CQE_DEBUG_SEL(_X_)                           ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_SD3_CQE_CQBDCTRL_REG */
#define BITS_CQE_DEBUG_INFO(_X_)                          (_X_)

#endif
