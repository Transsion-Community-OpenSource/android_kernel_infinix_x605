/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
*/

#ifndef __MTK_CLK_ID_MT6763_H__
#define __MTK_CLK_ID_MT6763_H__

enum mt_cg_clk_id {
	/* INFRA0 */
	MTK_CG_INFRACFG_AO_SPI0_CG = 0 + 1,
	MTK_CG_INFRACFG_AO_MSDC0_CG = 0 + 2,
	MTK_CG_INFRACFG_AO_MSDC1_CG = 0 + 4,
	MTK_CG_INFRACFG_AO_MSDC2_CG = 0 + 5,
	MTK_CG_INFRACFG_AO_MSDC0_SCK_CG = 0 + 6,
	MTK_CG_INFRACFG_AO_DVFSRC_CG = 0 + 7,
	MTK_CG_INFRACFG_AO_GCPU_CG = 0 + 8,
	MTK_CG_INFRACFG_AO_TRNG_CG = 0 + 9,
	MTK_CG_INFRACFG_AO_AUXADC_CG = 0 + 10,
	MTK_CG_INFRACFG_AO_CPUM_CG = 0 + 11,
	MTK_CG_INFRACFG_AO_CCIF1_AP_CG = 0 + 12,
	MTK_CG_INFRACFG_AO_CCIF1_MD_CG = 0 + 13,
	MTK_CG_INFRACFG_AO_AUXADC_MD_CG = 0 + 14,
	MTK_CG_INFRACFG_AO_MSDC1_SCK_CG = 0 + 16,
	MTK_CG_INFRACFG_AO_MSDC2_SCK_CG = 0 + 17,
	MTK_CG_INFRACFG_AO_AP_DMA_CG = 0 + 18,
	MTK_CG_INFRACFG_AO_XIU_CG = 0 + 19,
	MTK_CG_INFRACFG_AO_DEVICE_APC_CG = 0 + 20,
	MTK_CG_INFRACFG_AO_CCIF_AP_CG = 0 + 23,
	MTK_CG_INFRACFG_AO_DEBUGSYS_CG = 0 + 24,
	MTK_CG_INFRACFG_AO_AUDIO_CG = 0 + 25,
	MTK_CG_INFRACFG_AO_CCIF_MD_CG = 0 + 26,
	MTK_CG_INFRACFG_AO_DXCC_SEC_CORE_CG = 0 + 27,
	MTK_CG_INFRACFG_AO_DXCC_AO_CG = 0 + 28,
	MTK_CG_INFRACFG_AO_DRAMC_F26M_CG = 0 + 31,
	/* INFRA1 */
	MTK_CG_INFRACFG_AO_PMIC_CG_TMR = 32 + 0,
	MTK_CG_INFRACFG_AO_PMIC_CG_AP = 32 + 1,
	MTK_CG_INFRACFG_AO_PMIC_CG_MD = 32 + 2,
	MTK_CG_INFRACFG_AO_PMIC_CG_CONN = 32 + 3,
	MTK_CG_INFRACFG_AO_SCPSYS_CG = 32 + 4,
	MTK_CG_INFRACFG_AO_SEJ_CG = 32 + 5,
	MTK_CG_INFRACFG_AO_APXGPT_CG = 32 + 6,
	MTK_CG_INFRACFG_AO_ICUSB_CG = 32 + 8,
	MTK_CG_INFRACFG_AO_GCE_CG = 32 + 9,
	MTK_CG_INFRACFG_AO_THERM_CG = 32 + 10,
	MTK_CG_INFRACFG_AO_I2C0_CG = 32 + 11,
	MTK_CG_INFRACFG_AO_I2C1_CG = 32 + 12,
	MTK_CG_INFRACFG_AO_I2C2_CG = 32 + 13,
	MTK_CG_INFRACFG_AO_I2C3_CG = 32 + 14,
	MTK_CG_INFRACFG_AO_PWM_HCLK_CG = 32 + 15,
	MTK_CG_INFRACFG_AO_PWM1_CG = 32 + 16,
	MTK_CG_INFRACFG_AO_PWM2_CG = 32 + 17,
	MTK_CG_INFRACFG_AO_PWM3_CG = 32 + 18,
	MTK_CG_INFRACFG_AO_PWM4_CG = 32 + 19,
	MTK_CG_INFRACFG_AO_PWM_CG = 32 + 21,
	MTK_CG_INFRACFG_AO_UART0_CG = 32 + 22,
	MTK_CG_INFRACFG_AO_UART1_CG = 32 + 23,
	MTK_CG_INFRACFG_AO_UART2_CG = 32 + 24,
	MTK_CG_INFRACFG_AO_UART3_CG = 32 + 25,
	MTK_CG_INFRACFG_AO_GCE_26M_CG = 32 + 27,
	MTK_CG_INFRACFG_AO_CQ_DMA_FPC_CG = 32 + 28,
	MTK_CG_INFRACFG_AO_BTIF_CG = 32 + 31,
	/* INFRA2 */
	MTK_CG_INFRACFG_AO_IRTX_CG = 64 + 0,
	MTK_CG_INFRACFG_AO_DISP_PWM_CG = 64 + 2,
	MTK_CG_INFRACFG_AO_CLDMA_BCLK_CK = 64 + 3,
	MTK_CG_INFRACFG_AO_AUDIO_26M_BCLK_CK = 64 + 4,
	MTK_CG_INFRACFG_AO_SPI1_CG = 64 + 6,
	MTK_CG_INFRACFG_AO_I2C4_CG = 64 + 7,
	MTK_CG_INFRACFG_AO_MODEM_TEMP_SHARE_CG = 64 + 8,
	MTK_CG_INFRACFG_AO_SPI2_CG = 64 + 9,
	MTK_CG_INFRACFG_AO_SPI3_CG = 64 + 10,
	MTK_CG_INFRACFG_AO_UNIPRO_SCK_CG = 64 + 11,
	MTK_CG_INFRACFG_AO_UNIPRO_TICK_CG = 64 + 12,
	MTK_CG_INFRACFG_AO_UFS_MP_SAP_BCLK_CG = 64 + 13,
	MTK_CG_INFRACFG_AO_MD32_BCLK_CG = 64 + 14,
	MTK_CG_INFRACFG_AO_SSPM_CG = 64 + 15,
	MTK_CG_INFRACFG_AO_UNIPRO_MBIST_CG = 64 + 16,
	MTK_CG_INFRACFG_AO_SSPM_BUS_HCLK_CG = 64 + 17,
	MTK_CG_INFRACFG_AO_I2C5_CG = 64 + 18,
	MTK_CG_INFRACFG_AO_I2C5_ARBITER_CG = 64 + 19,
	MTK_CG_INFRACFG_AO_I2C5_IMM_CG = 64 + 20,
	MTK_CG_INFRACFG_AO_I2C1_ARBITER_CG = 64 + 21,
	MTK_CG_INFRACFG_AO_I2C1_IMM_CG = 64 + 22,
	MTK_CG_INFRACFG_AO_I2C2_ARBITER_CG = 64 + 23,
	MTK_CG_INFRACFG_AO_I2C2_IMM_CG = 64 + 24,
	MTK_CG_INFRACFG_AO_SPI4_CG = 64 + 25,
	MTK_CG_INFRACFG_AO_SPI5_CG = 64 + 26,
	MTK_CG_INFRACFG_AO_CQ_DMA_CG = 64 + 27,
	MTK_CG_INFRACFG_AO_UFS_CG = 64 + 28,
	MTK_CG_INFRACFG_AO_AES_CG = 64 + 29,
	MTK_CG_INFRACFG_AO_UFS_TICK_CG = 64 + 30,
	/* MMSYS0 */
	MTK_CG_MMSYS_SMI_COMMON = 96 + 0,
	MTK_CG_MMSYS_SMI_LARB0 = 96 + 1,
	MTK_CG_MMSYS_SMI_LARB1 = 96 + 2,
	MTK_CG_MMSYS_GALS_COMM0 = 96 + 3,
	MTK_CG_MMSYS_GALS_COMM1 = 96 + 4,
	MTK_CG_MMSYS_GALS_VENC2MM = 96 + 5,
	MTK_CG_MMSYS_GALS_VDEC2MM = 96 + 6,
	MTK_CG_MMSYS_GALS_IMG2MM = 96 + 7,
	MTK_CG_MMSYS_GALS_CAM2MM = 96 + 8,
	MTK_CG_MMSYS_GALS_IPU2MM = 96 + 9,
	MTK_CG_MMSYS_MDP_DL_TXCK = 96 + 10,
	MTK_CG_MMSYS_IPU_DL_TXCK = 96 + 11,
	MTK_CG_MMSYS_MDP_RDMA0 = 96 + 12,
	MTK_CG_MMSYS_MDP_RDMA1 = 96 + 13,
	MTK_CG_MMSYS_MDP_RSZ0 = 96 + 14,
	MTK_CG_MMSYS_MDP_RSZ1 = 96 + 15,
	MTK_CG_MMSYS_MDP_TDSHP = 96 + 16,
	MTK_CG_MMSYS_MDP_WROT0 = 96 + 17,
	MTK_CG_MMSYS_MDP_WROT1 = 96 + 18,
	MTK_CG_MMSYS_FAKE_ENG = 96 + 19,
	MTK_CG_MMSYS_DISP_OVL0 = 96 + 20,
	MTK_CG_MMSYS_DISP_OVL0_2L = 96 + 21,
	MTK_CG_MMSYS_DISP_OVL1_2L = 96 + 22,
	MTK_CG_MMSYS_DISP_RDMA0 = 96 + 23,
	MTK_CG_MMSYS_DISP_RDMA1 = 96 + 24,
	MTK_CG_MMSYS_DISP_WDMA0 = 96 + 25,
	MTK_CG_MMSYS_DISP_COLOR0 = 96 + 26,
	MTK_CG_MMSYS_DISP_CCORR0 = 96 + 27,
	MTK_CG_MMSYS_DISP_AAL0 = 96 + 28,
	MTK_CG_MMSYS_DISP_GAMMA0 = 96 + 29,
	MTK_CG_MMSYS_DISP_DITHER0 = 96 + 30,
	MTK_CG_MMSYS_DISP_SPLIT = 96 + 31,
	/* MMSYS1 */
	MTK_CG_MMSYS_DSI0_MM_CK = 128 + 0,
	MTK_CG_MMSYS_DSI0_IF_CK = 128 + 1,
	MTK_CG_MMSYS_DSI1_MM_CK = 128 + 2,
	MTK_CG_MMSYS_DSI1_IF_CK = 128 + 3,
	MTK_CG_MMSYS_FAKE_ENG2 = 128 + 4,
	MTK_CG_MMSYS_MDP_DL_RX_CK = 128 + 5,
	MTK_CG_MMSYS_IPU_DL_RX_CK = 128 + 6,
	MTK_CG_MMSYS_26M = 128 + 7,
	MTK_CG_MMSYS_MMSYS_R2Y = 128 + 8,
	MTK_CG_MMSYS_DISP_RSZ = 128 + 9,
	/* IMAGE */
	MTK_CG_ISP_PWR_RST_B = 160 + 0,
	MTK_CG_ISP_PWR_ISO = 160 + 1,
	MTK_CG_ISP_PWR_ON = 160 + 2,
	MTK_CG_ISP_PWR_ON_2ND = 160 + 3,
	MTK_CG_ISP_PWR_CLK_DIS  = 160 + 4,
	MTK_CG_ISP_SRAM_PDN_0 = 160 + 8,
	MTK_CG_ISP_SRAM_PDN_1 = 160 + 9,
	MTK_CG_ISP_SRAM_PDN_2 = 160 + 10,
	MTK_CG_ISP_SRAM_PDN_3 = 160 + 11,
	MTK_CG_ISP_SRAM_PDN_ACK_0 = 160 + 12,
	MTK_CG_ISP_SRAM_PDN_ACK_1 = 160 + 13,
	MTK_CG_ISP_SRAM_PDN_ACK_2 = 160 + 14,
	MTK_CG_ISP_SRAM_PDN_ACK_3 = 160 + 15,
	/* MFG */
	MTK_CG_MFG_PWR_RST_B = 192 + 0,
	MTK_CG_MFG_PWR_ISO = 192 + 1,
	MTK_CG_MFG_PWR_ON = 192 + 2,
	MTK_CG_MFG_PWR_ON_2ND = 192 + 3,
	MTK_CG_MFG_PWR_CLK_DIS  = 192 + 4,
	MTK_CG_MFG_SRAM_PDN_0 = 192 + 8,
	MTK_CG_MFG_SRAM_PDN_1 = 192 + 9,
	MTK_CG_MFG_SRAM_PDN_2 = 192 + 10,
	MTK_CG_MFG_SRAM_PDN_3 = 192 + 11,
	MTK_CG_MFG_SRAM_PDN_4 = 192 + 12,
	MTK_CG_MFG_SRAM_PDN_5 = 192 + 13,
	MTK_CG_MFG_SRAM_PDN_ACK_0 = 192 + 16,
	MTK_CG_MFG_SRAM_PDN_ACK_1 = 192 + 17,
	MTK_CG_MFG_SRAM_PDN_ACK_2 = 192 + 18,
	MTK_CG_MFG_SRAM_PDN_ACK_3 = 192 + 19,
	MTK_CG_MFG_SRAM_PDN_ACK_4 = 192 + 20,
	MTK_CG_MFG_SRAM_PDN_ACK_5 = 192 + 21,
	/* VCODEC */
	MTK_CG_VEN_PWR_RST_B = 224 + 0,
	MTK_CG_VEN_PWR_ISO = 224 + 1,
	MTK_CG_VEN_PWR_ON = 224 + 2,
	MTK_CG_VEN_PWR_ON_2ND = 224 + 3,
	MTK_CG_VEN_PWR_CLK_DIS  = 224 + 4,
	MTK_CG_VEN_SRAM_PDN_0 = 224 + 8,
	MTK_CG_VEN_SRAM_PDN_1 = 224 + 9,
	MTK_CG_VEN_SRAM_PDN_2 = 224 + 10,
	MTK_CG_VEN_SRAM_PDN_3 = 224 + 11,
	MTK_CG_VEN_SRAM_PDN_ACK_0 = 224 + 12,
	MTK_CG_VEN_SRAM_PDN_ACK_1 = 224 + 13,
	MTK_CG_VEN_SRAM_PDN_ACK_2 = 224 + 14,
	MTK_CG_VEN_SRAM_PDN_ACK_3 = 224 + 15,
};

#endif /* __MTK_CLK_ID_MT6763_H__ */

