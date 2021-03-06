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

#ifndef ASIC_REG_DCORE0_EDMA0_CORE_REGS_H_
#define ASIC_REG_DCORE0_EDMA0_CORE_REGS_H_

/*
 *****************************************
 *   DCORE0_EDMA0_CORE
 *   (Prototype: DMA_CORE)
 *****************************************
 */

#define mmDCORE0_EDMA0_CORE_CFG_0 0x41CB000

#define mmDCORE0_EDMA0_CORE_CFG_1 0x41CB004

#define mmDCORE0_EDMA0_CORE_PROT 0x41CB008

#define mmDCORE0_EDMA0_CORE_CKG 0x41CB00C

#define mmDCORE0_EDMA0_CORE_RD_GLBL 0x41CB07C

#define mmDCORE0_EDMA0_CORE_RD_HBW_MAX_OUTSTAND 0x41CB080

#define mmDCORE0_EDMA0_CORE_RD_HBW_MAX_SIZE 0x41CB084

#define mmDCORE0_EDMA0_CORE_RD_HBW_ARCACHE 0x41CB088

#define mmDCORE0_EDMA0_CORE_RD_HBW_INFLIGHTS 0x41CB090

#define mmDCORE0_EDMA0_CORE_RD_HBW_RATE_LIM_CFG 0x41CB094

#define mmDCORE0_EDMA0_CORE_RD_LBW_MAX_OUTSTAND 0x41CB0C0

#define mmDCORE0_EDMA0_CORE_RD_LBW_MAX_SIZE 0x41CB0C4

#define mmDCORE0_EDMA0_CORE_RD_LBW_ARCACHE 0x41CB0C8

#define mmDCORE0_EDMA0_CORE_RD_LBW_INFLIGHTS 0x41CB0D0

#define mmDCORE0_EDMA0_CORE_RD_LBW_RATE_LIM_CFG 0x41CB0D4

#define mmDCORE0_EDMA0_CORE_WR_HBW_MAX_OUTSTAND 0x41CB100

#define mmDCORE0_EDMA0_CORE_WR_HBW_MAX_AWID 0x41CB104

#define mmDCORE0_EDMA0_CORE_WR_HBW_AWCACHE 0x41CB108

#define mmDCORE0_EDMA0_CORE_WR_HBW_INFLIGHTS 0x41CB10C

#define mmDCORE0_EDMA0_CORE_WR_HBW_RATE_LIM_CFG 0x41CB110

#define mmDCORE0_EDMA0_CORE_WR_LBW_MAX_OUTSTAND 0x41CB140

#define mmDCORE0_EDMA0_CORE_WR_LBW_MAX_AWID 0x41CB144

#define mmDCORE0_EDMA0_CORE_WR_LBW_AWCACHE 0x41CB148

#define mmDCORE0_EDMA0_CORE_WR_LBW_INFLIGHTS 0x41CB14C

#define mmDCORE0_EDMA0_CORE_WR_LBW_RATE_LIM_CFG 0x41CB150

#define mmDCORE0_EDMA0_CORE_WR_COMP_MAX_OUTSTAND 0x41CB180

#define mmDCORE0_EDMA0_CORE_WR_COMP_AWUSER 0x41CB184

#define mmDCORE0_EDMA0_CORE_ERR_CFG 0x41CB300

#define mmDCORE0_EDMA0_CORE_ERR_CAUSE 0x41CB304

#define mmDCORE0_EDMA0_CORE_ERRMSG_ADDR_LO 0x41CB308

#define mmDCORE0_EDMA0_CORE_ERRMSG_ADDR_HI 0x41CB30C

#define mmDCORE0_EDMA0_CORE_ERRMSG_WDATA 0x41CB310

#define mmDCORE0_EDMA0_CORE_STS0 0x41CB380

#define mmDCORE0_EDMA0_CORE_STS1 0x41CB384

#define mmDCORE0_EDMA0_CORE_STS_RD_CTX_SEL 0x41CB400

#define mmDCORE0_EDMA0_CORE_STS_RD_CTX_SIZE 0x41CB404

#define mmDCORE0_EDMA0_CORE_STS_RD_CTX_BASE_LO 0x41CB408

#define mmDCORE0_EDMA0_CORE_STS_RD_CTX_BASE_HI 0x41CB40C

#define mmDCORE0_EDMA0_CORE_STS_RD_CTX_ID 0x41CB410

#define mmDCORE0_EDMA0_CORE_STS_RD_HB_AXI_ADDR_LO 0x41CB414

#define mmDCORE0_EDMA0_CORE_STS_RD_HB_AXI_ADDR_HI 0x41CB418

#define mmDCORE0_EDMA0_CORE_STS_RD_LB_AXI_ADDR 0x41CB41C

#define mmDCORE0_EDMA0_CORE_STS_WR_CTX_SEL 0x41CB420

#define mmDCORE0_EDMA0_CORE_STS_WR_CTX_SIZE 0x41CB424

#define mmDCORE0_EDMA0_CORE_STS_WR_CTX_BASE_LO 0x41CB428

#define mmDCORE0_EDMA0_CORE_STS_WR_CTX_BASE_HI 0x41CB42C

#define mmDCORE0_EDMA0_CORE_STS_WR_CTX_ID 0x41CB430

#define mmDCORE0_EDMA0_CORE_STS_WR_HB_AXI_ADDR_LO 0x41CB434

#define mmDCORE0_EDMA0_CORE_STS_WR_HB_AXI_ADDR_HI 0x41CB438

#define mmDCORE0_EDMA0_CORE_STS_WR_LB_AXI_ADDR 0x41CB43C

#define mmDCORE0_EDMA0_CORE_PWRLP_CFG 0x41CB700

#define mmDCORE0_EDMA0_CORE_PWRLP_STS 0x41CB704

#define mmDCORE0_EDMA0_CORE_DBG_DESC_CNT 0x41CB710

#define mmDCORE0_EDMA0_CORE_DBG_STS 0x41CB714

#define mmDCORE0_EDMA0_CORE_DBG_BUF_STS 0x41CB718

#define mmDCORE0_EDMA0_CORE_DBG_RD_DESC_ID 0x41CB720

#define mmDCORE0_EDMA0_CORE_DBG_WR_DESC_ID 0x41CB724

#define mmDCORE0_EDMA0_CORE_APB_DMA_LBW_BASE 0x41CB728

#define mmDCORE0_EDMA0_CORE_APB_MSTR_IF_LBW_BASE 0x41CB72C

#define mmDCORE0_EDMA0_CORE_E2E_CRED_ASYNC_CFG 0x41CB730

#define mmDCORE0_EDMA0_CORE_DBG_APB_ENABLER 0x41CBE1C

#define mmDCORE0_EDMA0_CORE_L2H_CMPR_LO 0x41CBE20

#define mmDCORE0_EDMA0_CORE_L2H_CMPR_HI 0x41CBE24

#define mmDCORE0_EDMA0_CORE_L2H_MASK_LO 0x41CBE28

#define mmDCORE0_EDMA0_CORE_L2H_MASK_HI 0x41CBE2C

#define mmDCORE0_EDMA0_CORE_IDLE_IND_MASK 0x41CBE30

#define mmDCORE0_EDMA0_CORE_APB_ENABLER 0x41CBE34

#endif /* ASIC_REG_DCORE0_EDMA0_CORE_REGS_H_ */
