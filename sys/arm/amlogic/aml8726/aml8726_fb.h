/*-
 * Copyright 2013-2015 John Wehle <john@feith.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef	_ARM_AMLOGIC_AML8726_FB_H
#define	_ARM_AMLOGIC_AML8726_FB_H

#define	AML_CAV_OSD1_INDEX			0x40

#define	AML_CAV_LUT_DATAL_REG			0
#define	AML_CAV_LUT_DATAL_WIDTH_MASK		(7 << 29)
#define	AML_CAV_LUT_DATAL_WIDTH_SHIFT		29
#define	AML_CAV_LUT_DATAL_WIDTH_WIDTH		3
#define	AML_CAV_LUT_DATAL_ADDR_MASK		0x1fffffff
#define	AML_CAV_LUT_DATAL_ADDR_SHIFT		0

#define	AML_CAV_LUT_DATAH_REG			4
#define	AML_CAV_LUT_DATAH_BLKMODE_MASK		(3 << 24)
#define	AML_CAV_LUT_DATAH_BLKMODE_SHIFT		24
#define	AML_CAV_LUT_DATAH_BLKMODE_LINEAR	(0 << 24)
#define	AML_CAV_LUT_DATAH_BLKMODE_32x32		(1 << 24)
#define	AML_CAV_LUT_DATAH_BLKMODE_64x32		(2 << 24)
#define	AML_CAV_LUT_DATAH_WRAP_X		(1 << 23)
#define	AML_CAV_LUT_DATAH_WRAP_Y		(1 << 22)
#define	AML_CAV_LUT_DATAH_HEIGHT_MASK		(0x1fff << 9)
#define	AML_CAV_LUT_DATAH_HEIGHT_SHIFT		9
#define	AML_CAV_LUT_DATAH_WIDTH_MASK		0x1ff
#define	AML_CAV_LUT_DATAH_WIDTH_SHIFT		0

#define	AML_CAV_LUT_ADDR_REG			8
#define	AML_CAV_LUT_ADDR_WR_EN			(1 << 9)
#define	AML_CAV_LUT_ADDR_RD_EN			(1 << 8)
#define	AML_CAV_LUT_ADDR_INDEX_MASK		0xff
#define	AML_CAV_LUT_ADDR_INDEX_SHIFT		0

#define	AML_VIU_OSD1_CTRL_REG			64
#define	AML_VIU_OSD_CTRL_OSD_EN			(1 << 21)
#define	AML_VIU_OSD_CTRL_GLOBAL_ALPHA_MASK	(0x1ff << 12)
#define	AML_VIU_OSD_CTRL_GLOBAL_ALPHA_SHIFT	12
#define	AML_VIU_OSD_CTRL_OSD_BLK_EN_MASK	(0xf << 0)
#define	AML_VIU_OSD_CTRL_OSD_BLK_EN_SHIFT	0

#define	AML_VIU_OSD1_BLK0_CFG_W0_REG		108
#define	AML_VIU_OSD1_BLK1_CFG_W0_REG		124
#define	AML_VIU_OSD1_BLK2_CFG_W0_REG		140
#define	AML_VIU_OSD1_BLK3_CFG_W0_REG		156
#define	AML_VIU_OSD_BLK_CFG_W0_INDEX_MASK	(0xff << 16)
#define	AML_VIU_OSD_BLK_CFG_W0_INDEX_SHIFT	16
#define	AML_VIU_OSD_BLK_CFG_W0_LITTLE_ENDIAN	(1 << 15)
#define	AML_VIU_OSD_BLK_CFG_W0_BLKMODE_24	(7 << 8)
#define	AML_VIU_OSD_BLK_CFG_W0_RGB_EN		(1 << 7)
#define	AML_VIU_OSD_BLK_CFG_W0_CMATRIX_RGB	(0 << 2)

#define	AML_VIU_OSD1_BLK0_CFG_W1_REG		112
#define	AML_VIU_OSD1_BLK1_CFG_W1_REG		128
#define	AML_VIU_OSD1_BLK2_CFG_W1_REG		144
#define	AML_VIU_OSD1_BLK3_CFG_W1_REG		160
#define	AML_VIU_OSD_BLK_CFG_W1_X_END_MASK	(0x1fff << 16)
#define	AML_VIU_OSD_BLK_CFG_W1_X_END_SHIFT	16
#define	AML_VIU_OSD_BLK_CFG_W1_X_START_MASK	0x1fff
#define	AML_VIU_OSD_BLK_CFG_W1_X_START_SHIFT	0

#define	AML_VIU_OSD1_BLK0_CFG_W2_REG		116
#define	AML_VIU_OSD1_BLK1_CFG_W2_REG		132
#define	AML_VIU_OSD1_BLK2_CFG_W2_REG		148
#define	AML_VIU_OSD1_BLK3_CFG_W2_REG		164
#define	AML_VIU_OSD_BLK_CFG_W2_Y_END_MASK	(0x1fff << 16)
#define	AML_VIU_OSD_BLK_CFG_W2_Y_END_SHIFT	16
#define	AML_VIU_OSD_BLK_CFG_W2_Y_START_MASK	0x1fff
#define	AML_VIU_OSD_BLK_CFG_W2_Y_START_SHIFT	0

#define	AML_VIU_OSD1_BLK0_CFG_W3_REG		120
#define	AML_VIU_OSD1_BLK1_CFG_W3_REG		136
#define	AML_VIU_OSD1_BLK2_CFG_W3_REG		152
#define	AML_VIU_OSD1_BLK3_CFG_W3_REG		168
#define	AML_VIU_OSD_BLK_CFG_W3_H_END_MASK	(0xfff << 16)
#define	AML_VIU_OSD_BLK_CFG_W3_H_END_SHIFT	16
#define	AML_VIU_OSD_BLK_CFG_W3_H_START_MASK	0xfff
#define	AML_VIU_OSD_BLK_CFG_W3_H_START_SHIFT	0

#define	AML_VIU_OSD1_BLK0_CFG_W4_REG		76
#define	AML_VIU_OSD1_BLK1_CFG_W4_REG		80
#define	AML_VIU_OSD1_BLK2_CFG_W4_REG		84
#define	AML_VIU_OSD1_BLK3_CFG_W4_REG		88
#define	AML_VIU_OSD_BLK_CFG_W4_V_END_MASK	(0xfff << 16)
#define	AML_VIU_OSD_BLK_CFG_W4_V_END_SHIFT	16
#define	AML_VIU_OSD_BLK_CFG_W4_V_START_MASK	0xfff
#define	AML_VIU_OSD_BLK_CFG_W4_V_START_SHIFT	0

#define	AML_VIU_OSD1_FIFO_CTRL_REG		172
#define	AML_VIU_OSD_FIFO_CTRL_DEPTH_MASK	(0x3f << 12)
#define	AML_VIU_OSD_FIFO_CTRL_DEPTH_SHIFT	12
#define	AML_VIU_OSD_FIFO_CTRL_BURST_LEN_MASK	(3 << 10)
#define	AML_VIU_OSD_FIFO_CTRL_BURST_LEN_24	(0 << 10)
#define	AML_VIU_OSD_FIFO_CTRL_BURST_LEN_32	(1 << 10)
#define	AML_VIU_OSD_FIFO_CTRL_BURST_LEN_48	(2 << 10)
#define	AML_VIU_OSD_FIFO_CTRL_BURST_LEN_64	(3 << 10)
#define	AML_VIU_OSD_FIFO_CTRL_HOLD_LINES_MASK	(0x1f << 5)
#define	AML_VIU_OSD_FIFO_CTRL_HOLD_LINES_SHIFT	5
#define	AML_VIU_OSD_FIFO_CTRL_URGENT		(1 << 0)

/* OSD2 field meanings are the same as OSD1 */
#define	AML_VIU_OSD2_CTRL_REG			192
#define	AML_VIU_OSD2_BLK0_CFG_W0_REG		236
#define	AML_VIU_OSD2_BLK1_CFG_W0_REG		252
#define	AML_VIU_OSD2_BLK2_CFG_W0_REG		268
#define	AML_VIU_OSD2_BLK3_CFG_W0_REG		284
#define	AML_VIU_OSD2_BLK0_CFG_W1_REG		240
#define	AML_VIU_OSD2_BLK1_CFG_W1_REG		256
#define	AML_VIU_OSD2_BLK2_CFG_W1_REG		272
#define	AML_VIU_OSD2_BLK3_CFG_W1_REG		288
#define	AML_VIU_OSD2_BLK0_CFG_W2_REG		244
#define	AML_VIU_OSD2_BLK1_CFG_W2_REG		260
#define	AML_VIU_OSD2_BLK2_CFG_W2_REG		276
#define	AML_VIU_OSD2_BLK3_CFG_W2_REG		292
#define	AML_VIU_OSD2_BLK0_CFG_W3_REG		248
#define	AML_VIU_OSD2_BLK1_CFG_W3_REG		264
#define	AML_VIU_OSD2_BLK2_CFG_W3_REG		280
#define	AML_VIU_OSD2_BLK3_CFG_W3_REG		296
#define	AML_VIU_OSD2_BLK0_CFG_W4_REG		400
#define	AML_VIU_OSD2_BLK1_CFG_W4_REG		404
#define	AML_VIU_OSD2_BLK2_CFG_W4_REG		408
#define	AML_VIU_OSD2_BLK3_CFG_W4_REG		412
#define	AML_VIU_OSD2_FIFO_CTRL_REG		300

#define	AML_VPP_MISC_REG			152
#define	AML_VPP_MISC_OSD2_PREBLEND		(1 << 17)
#define	AML_VPP_MISC_OSD1_PREBLEND		(1 << 16)
#define	AML_VPP_MISC_VD2_PREBLEND		(1 << 15)
#define	AML_VPP_MISC_VD1_PREBLEND		(1 << 14)
#define	AML_VPP_MISC_OSD2_POSTBLEND		(1 << 13)
#define	AML_VPP_MISC_OSD1_POSTBLEND		(1 << 12)
#define	AML_VPP_MISC_VD2_POSTBLEND		(1 << 11)
#define	AML_VPP_MISC_VD1_POSTBLEND		(1 << 10)
#define	AML_VPP_MISC_POSTBLEND_EN		(1 << 7)
#define	AML_VPP_MISC_PREBLEND_EN		(1 << 6)

#endif /* _ARM_AMLOGIC_AML8726_FB_H */
