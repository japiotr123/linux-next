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

#ifndef ASIC_REG_DCORE0_MME_SBTE0_MASKS_H_
#define ASIC_REG_DCORE0_MME_SBTE0_MASKS_H_

/*
 *****************************************
 *   DCORE0_MME_SBTE0
 *   (Prototype: SB)
 *****************************************
 */

/* DCORE0_MME_SBTE0_MAX_SIZE */
#define DCORE0_MME_SBTE0_MAX_SIZE_DATA_SHIFT 0
#define DCORE0_MME_SBTE0_MAX_SIZE_DATA_MASK 0xFFFF
#define DCORE0_MME_SBTE0_MAX_SIZE_MD_SHIFT 16
#define DCORE0_MME_SBTE0_MAX_SIZE_MD_MASK 0xFFFF0000

/* DCORE0_MME_SBTE0_FORCE_MISS */
#define DCORE0_MME_SBTE0_FORCE_MISS_R_SHIFT 0
#define DCORE0_MME_SBTE0_FORCE_MISS_R_MASK 0x1

/* DCORE0_MME_SBTE0_MAX */
#define DCORE0_MME_SBTE0_MAX_OS_SHIFT 0
#define DCORE0_MME_SBTE0_MAX_OS_MASK 0xFFFF

/* DCORE0_MME_SBTE0_RL */
#define DCORE0_MME_SBTE0_RL_SATURATION_SHIFT 0
#define DCORE0_MME_SBTE0_RL_SATURATION_MASK 0xFF
#define DCORE0_MME_SBTE0_RL_TIMEOUT_SHIFT 8
#define DCORE0_MME_SBTE0_RL_TIMEOUT_MASK 0xFF00
#define DCORE0_MME_SBTE0_RL_RATE_LIMITER_EN_SHIFT 16
#define DCORE0_MME_SBTE0_RL_RATE_LIMITER_EN_MASK 0x10000

/* DCORE0_MME_SBTE0_SB_STALL */
#define DCORE0_MME_SBTE0_SB_STALL_R_SHIFT 0
#define DCORE0_MME_SBTE0_SB_STALL_R_MASK 0x1

/* DCORE0_MME_SBTE0_INTR */
#define DCORE0_MME_SBTE0_INTR_I0_SHIFT 0
#define DCORE0_MME_SBTE0_INTR_I0_MASK 0x1

/* DCORE0_MME_SBTE0_ARUSER */
#define DCORE0_MME_SBTE0_ARUSER_ASID_SHIFT 0
#define DCORE0_MME_SBTE0_ARUSER_ASID_MASK 0x3FF
#define DCORE0_MME_SBTE0_ARUSER_MMBP_SHIFT 10
#define DCORE0_MME_SBTE0_ARUSER_MMBP_MASK 0x400
#define DCORE0_MME_SBTE0_ARUSER_DUMMY_SHIFT 11
#define DCORE0_MME_SBTE0_ARUSER_DUMMY_MASK 0xFFFFF800

/* DCORE0_MME_SBTE0_ARCACHE */
#define DCORE0_MME_SBTE0_ARCACHE_N_SHIFT 0
#define DCORE0_MME_SBTE0_ARCACHE_N_MASK 0xF

/* DCORE0_MME_SBTE0_STATUS */
#define DCORE0_MME_SBTE0_STATUS_DROP_CNT_SHIFT 0
#define DCORE0_MME_SBTE0_STATUS_DROP_CNT_MASK 0xFFFFFFFF

/* DCORE0_MME_SBTE0_PRTN */
#define DCORE0_MME_SBTE0_PRTN_CLK_EN_SHIFT 0
#define DCORE0_MME_SBTE0_PRTN_CLK_EN_MASK 0x1

/* DCORE0_MME_SBTE0_CFG_SB_INFLIGHTS */
#define DCORE0_MME_SBTE0_CFG_SB_INFLIGHTS_W_SHIFT 0
#define DCORE0_MME_SBTE0_CFG_SB_INFLIGHTS_W_MASK 0xFFFFFFFF

/* DCORE0_MME_SBTE0_PROT */
#define DCORE0_MME_SBTE0_PROT_W_SHIFT 0
#define DCORE0_MME_SBTE0_PROT_W_MASK 0x7

/* DCORE0_MME_SBTE0_INTR_MASK */
#define DCORE0_MME_SBTE0_INTR_MASK_W_SHIFT 0
#define DCORE0_MME_SBTE0_INTR_MASK_W_MASK 0x1

/* DCORE0_MME_SBTE0_ARUSER_MSB */
#define DCORE0_MME_SBTE0_ARUSER_MSB_VAL_SHIFT 0
#define DCORE0_MME_SBTE0_ARUSER_MSB_VAL_MASK 0xFFFFFFFF

/* DCORE0_MME_SBTE0_CFG_SB_OCCUPIENCY */
#define DCORE0_MME_SBTE0_CFG_SB_OCCUPIENCY_VAL_SHIFT 0
#define DCORE0_MME_SBTE0_CFG_SB_OCCUPIENCY_VAL_MASK 0xFFFFFFFF

/* DCORE0_MME_SBTE0_ENABLE_CGATE */
#define DCORE0_MME_SBTE0_ENABLE_CGATE_TE_EN_SHIFT 0
#define DCORE0_MME_SBTE0_ENABLE_CGATE_TE_EN_MASK 0x1
#define DCORE0_MME_SBTE0_ENABLE_CGATE_SB_EN_SHIFT 4
#define DCORE0_MME_SBTE0_ENABLE_CGATE_SB_EN_MASK 0x10

/* DCORE0_MME_SBTE0_INTF_VLD_DBG */
#define DCORE0_MME_SBTE0_INTF_VLD_DBG_VLD_SHIFT 0
#define DCORE0_MME_SBTE0_INTF_VLD_DBG_VLD_MASK 0xFFFFFFFF

/* DCORE0_MME_SBTE0_INTF_RDY_DBG */
#define DCORE0_MME_SBTE0_INTF_RDY_DBG_RDY_SHIFT 0
#define DCORE0_MME_SBTE0_INTF_RDY_DBG_RDY_MASK 0xFFFFFFFF

#endif /* ASIC_REG_DCORE0_MME_SBTE0_MASKS_H_ */
