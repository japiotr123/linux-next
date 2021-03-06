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

#ifndef ASIC_REG_DCORE3_MME_CTRL_LO_REGS_H_
#define ASIC_REG_DCORE3_MME_CTRL_LO_REGS_H_

/*
 *****************************************
 *   DCORE3_MME_CTRL_LO
 *   (Prototype: MME_CTRL_LO)
 *****************************************
 */

#define mmDCORE3_MME_CTRL_LO_ARCH_STATUS 0x46CB000

#define mmDCORE3_MME_CTRL_LO_CMD 0x46CB004

#define mmDCORE3_MME_CTRL_LO_ARCH_SYNC_OBJ_DW0 0x46CB148

#define mmDCORE3_MME_CTRL_LO_ARCH_SYNC_OBJ_ADDR0 0x46CB14C

#define mmDCORE3_MME_CTRL_LO_ARCH_SYNC_OBJ_VAL0 0x46CB150

#define mmDCORE3_MME_CTRL_LO_ARCH_SYNC_OBJ_ADDR1 0x46CB154

#define mmDCORE3_MME_CTRL_LO_ARCH_SYNC_OBJ_VAL1 0x46CB158

#define mmDCORE3_MME_CTRL_LO_ARCH_A_SS 0x46CB224

#define mmDCORE3_MME_CTRL_LO_ARCH_B_SS 0x46CB228

#define mmDCORE3_MME_CTRL_LO_ARCH_COUT_SS 0x46CB27C

#define mmDCORE3_MME_CTRL_LO_QM_STALL 0x46CB400

#define mmDCORE3_MME_CTRL_LO_LOG_SHADOW_LO 0x46CB404

#define mmDCORE3_MME_CTRL_LO_LOG_SHADOW_HI 0x46CB408

#define mmDCORE3_MME_CTRL_LO_SYNC_OBJECT_FIFO_TH 0x46CB40C

#define mmDCORE3_MME_CTRL_LO_REDUN 0x46CB410

#define mmDCORE3_MME_CTRL_LO_EUS_LOCAL_FIFO_TH 0x46CB414

#define mmDCORE3_MME_CTRL_LO_EUS_ROLLUP_DLY_DW0 0x46CB418

#define mmDCORE3_MME_CTRL_LO_EUS_ROLLUP_DLY_DW1 0x46CB41C

#define mmDCORE3_MME_CTRL_LO_EUS_ROLLUP_CD_PROT_F16 0x46CB420

#define mmDCORE3_MME_CTRL_LO_EUS_ROLLUP_CD_PROT_F8 0x46CB424

#define mmDCORE3_MME_CTRL_LO_EUS_ROLLUP_CD_PROT_FP32 0x46CB428

#define mmDCORE3_MME_CTRL_LO_EUS_ROLLUP_CD_PROT_FP32I 0x46CB42C

#define mmDCORE3_MME_CTRL_LO_EUS_ROLLUP_CD_PROT_TF32 0x46CB430

#define mmDCORE3_MME_CTRL_LO_PCU_RL_DESC0 0x46CB434

#define mmDCORE3_MME_CTRL_LO_PCU_RL_TOKEN_UPDATE 0x46CB438

#define mmDCORE3_MME_CTRL_LO_PCU_RL_TH 0x46CB43C

#define mmDCORE3_MME_CTRL_LO_PCU_RL_MIN 0x46CB440

#define mmDCORE3_MME_CTRL_LO_PCU_RL_CTRL_EN 0x46CB444

#define mmDCORE3_MME_CTRL_LO_PCU_RL_HISTORY_LOG_SIZE 0x46CB448

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_A_BF16 0x46CB44C

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_B_BF16 0x46CB450

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_A_FP16 0x46CB454

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_B_FP16 0x46CB458

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_F8 0x46CB45C

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_A_FP32_ODD 0x46CB460

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_A_FP32_EVEN 0x46CB464

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_B_FP32_ODD 0x46CB468

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_B_FP32_EVEN 0x46CB46C

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_A_TF32_ODD 0x46CB470

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_A_TF32_EVEN 0x46CB474

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_B_TF32_ODD 0x46CB478

#define mmDCORE3_MME_CTRL_LO_PCU_DUMMY_B_TF32_EVEN 0x46CB47C

#define mmDCORE3_MME_CTRL_LO_PROT 0x46CB480

#define mmDCORE3_MME_CTRL_LO_EU 0x46CB484

#define mmDCORE3_MME_CTRL_LO_SBTE 0x46CB488

#define mmDCORE3_MME_CTRL_LO_AGU_SM_INFLIGHT_CNTR 0x46CB48C

#define mmDCORE3_MME_CTRL_LO_AGU_SM_TOTAL_CNTR 0x46CB490

#define mmDCORE3_MME_CTRL_LO_PCU_RL_SAT_SEC 0x46CB494

#define mmDCORE3_MME_CTRL_LO_FMA_FUNC_REDUN_CLK_EN32 0x46CB498

#define mmDCORE3_MME_CTRL_LO_FMA_FUNC_REDUN_CLK_EN33 0x46CB49C

#define mmDCORE3_MME_CTRL_LO_EU_ISOLATION_DIS 0x46CB4A0

#define mmDCORE3_MME_CTRL_LO_QM_SLV_CLK_EN 0x46CB4A4

#define mmDCORE3_MME_CTRL_LO_HBW_CLK_ENABLER_DIS 0x46CB4A8

#define mmDCORE3_MME_CTRL_LO_AGU 0x46CB4AC

#define mmDCORE3_MME_CTRL_LO_QM 0x46CB4B0

#define mmDCORE3_MME_CTRL_LO_EARLY_RELEASE_STATUS 0x46CB4B4

#define mmDCORE3_MME_CTRL_LO_INTR_CAUSE 0x46CB4B8

#define mmDCORE3_MME_CTRL_LO_INTR_MASK 0x46CB4BC

#define mmDCORE3_MME_CTRL_LO_INTR_CLEAR 0x46CB4C0

#define mmDCORE3_MME_CTRL_LO_REDUN_PSOC_SEL_SEC 0x46CB4C4

#define mmDCORE3_MME_CTRL_LO_BIST 0x46CB4C8

#define mmDCORE3_MME_CTRL_LO_EU_RL_ENABLE 0x46CB4CC

#define mmDCORE3_MME_CTRL_LO_EU_RL_TOKEN_SEL 0x46CB4D0

#define mmDCORE3_MME_CTRL_LO_EU_RL_CFG 0x46CB4D4

#define mmDCORE3_MME_CTRL_LO_PCU_DBG_DW0 0x46CB4D8

#define mmDCORE3_MME_CTRL_LO_PCU_DBG_DW1 0x46CB4DC

#define mmDCORE3_MME_CTRL_LO_PCU_DBG_DW2 0x46CB4E0

#define mmDCORE3_MME_CTRL_LO_PCU_DBG_DW3 0x46CB4E4

#define mmDCORE3_MME_CTRL_LO_PCU_DBG_WKL_ID 0x46CB4E8

#define mmDCORE3_MME_CTRL_LO_ETF_MEM_WRAP_RM 0x46CB4EC

#endif /* ASIC_REG_DCORE3_MME_CTRL_LO_REGS_H_ */
