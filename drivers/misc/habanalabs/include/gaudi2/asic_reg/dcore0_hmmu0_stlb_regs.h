/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

/************************************
 ** This is an auto-generated file **
 **       DO NOT EDIT BELOW        **
 ************************************/

#ifndef ASIC_REG_DCORE0_HMMU0_STLB_REGS_H_
#define ASIC_REG_DCORE0_HMMU0_STLB_REGS_H_

/*
 *****************************************
 *   DCORE0_HMMU0_STLB
 *   (Prototype: STLB)
 *****************************************
 */

#define mmDCORE0_HMMU0_STLB_BUSY 0x4081000

#define mmDCORE0_HMMU0_STLB_ASID 0x4081004

#define mmDCORE0_HMMU0_STLB_HOP0_PA43_12 0x4081008

#define mmDCORE0_HMMU0_STLB_HOP0_PA63_44 0x408100C

#define mmDCORE0_HMMU0_STLB_CACHE_INV 0x4081010

#define mmDCORE0_HMMU0_STLB_CACHE_INV_BASE_39_8 0x4081014

#define mmDCORE0_HMMU0_STLB_CACHE_INV_BASE_63_40 0x4081018

#define mmDCORE0_HMMU0_STLB_STLB_FEATURE_EN 0x408101C

#define mmDCORE0_HMMU0_STLB_STLB_AXI_CACHE 0x4081020

#define mmDCORE0_HMMU0_STLB_HOP_CONFIGURATION 0x4081024

#define mmDCORE0_HMMU0_STLB_LINK_LIST_LOOKUP_MASK_63_32 0x4081028

#define mmDCORE0_HMMU0_STLB_LINK_LIST_LOOKUP_MASK_31_0 0x408102C

#define mmDCORE0_HMMU0_STLB_INV_ALL_START 0x4081034

#define mmDCORE0_HMMU0_STLB_INV_ALL_SET 0x4081038

#define mmDCORE0_HMMU0_STLB_INV_PS 0x408103C

#define mmDCORE0_HMMU0_STLB_INV_CONSUMER_INDEX 0x4081040

#define mmDCORE0_HMMU0_STLB_INV_HIT_COUNT 0x4081044

#define mmDCORE0_HMMU0_STLB_INV_SET 0x4081048

#define mmDCORE0_HMMU0_STLB_SRAM_INIT 0x408104C

#define mmDCORE0_HMMU0_STLB_MEM_CACHE_INVALIDATION 0x4081050

#define mmDCORE0_HMMU0_STLB_MEM_CACHE_INV_STATUS 0x4081054

#define mmDCORE0_HMMU0_STLB_MEM_CACHE_BASE_38_7 0x4081058

#define mmDCORE0_HMMU0_STLB_MEM_CACHE_BASE_63_39 0x408105C

#define mmDCORE0_HMMU0_STLB_MEM_CACHE_CONFIG 0x4081060

#define mmDCORE0_HMMU0_STLB_SET_THRESHOLD_HOP5 0x4081064

#define mmDCORE0_HMMU0_STLB_SET_THRESHOLD_HOP4 0x4081068

#define mmDCORE0_HMMU0_STLB_SET_THRESHOLD_HOP3 0x408106C

#define mmDCORE0_HMMU0_STLB_SET_THRESHOLD_HOP2 0x4081070

#define mmDCORE0_HMMU0_STLB_SET_THRESHOLD_HOP1 0x4081074

#define mmDCORE0_HMMU0_STLB_SET_THRESHOLD_HOP0 0x4081078

#define mmDCORE0_HMMU0_STLB_MULTI_HIT_INTERRUPT_CLR 0x408107C

#define mmDCORE0_HMMU0_STLB_MULTI_HIT_INTERRUPT_MASK 0x4081080

#define mmDCORE0_HMMU0_STLB_MEM_L0_CACHE_CFG 0x4081084

#define mmDCORE0_HMMU0_STLB_MEM_READ_ARPROT 0x4081088

#define mmDCORE0_HMMU0_STLB_RANGE_CACHE_INVALIDATION 0x408108C

#define mmDCORE0_HMMU0_STLB_RANGE_INV_START_LSB 0x4081090

#define mmDCORE0_HMMU0_STLB_RANGE_INV_START_MSB 0x4081094

#define mmDCORE0_HMMU0_STLB_RANGE_INV_END_LSB 0x4081098

#define mmDCORE0_HMMU0_STLB_RANGE_INV_END_MSB 0x408109C

#define mmDCORE0_HMMU0_STLB_ASID_SCRAMBLER_CTRL 0x4081100

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MATRIX_H3_0 0x4081104

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MATRIX_H3_1 0x4081108

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MATRIX_H3_2 0x408110C

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MATRIX_H3_3 0x4081110

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MATRIX_H3_4 0x4081114

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MATRIX_H3_5 0x4081118

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MATRIX_H3_6 0x408111C

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MATRIX_H3_7 0x4081120

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MATRIX_H3_8 0x4081124

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MATRIX_H3_9 0x4081128

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MAT_H3_10 0x408112C

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MAT_H3_11 0x4081130

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MAT_H3_12 0x4081134

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MAT_H3_13 0x4081138

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MAT_H3_14 0x408113C

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MAT_H3_15 0x4081140

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MAT_H3_16 0x4081144

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MAT_H3_17 0x4081148

#define mmDCORE0_HMMU0_STLB_ASID_SCR_POLY_MAT_H3_18 0x408114C

#endif /* ASIC_REG_DCORE0_HMMU0_STLB_REGS_H_ */
