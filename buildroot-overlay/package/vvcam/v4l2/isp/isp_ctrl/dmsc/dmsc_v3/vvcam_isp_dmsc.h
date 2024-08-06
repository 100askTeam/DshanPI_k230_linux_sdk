/****************************************************************************
*
*    The MIT License (MIT)
*
*    Copyright (c) 2014 - 2024 Vivante Corporation
*
*    Permission is hereby granted, free of charge, to any person obtaining a
*    copy of this software and associated documentation files (the "Software"),
*    to deal in the Software without restriction, including without limitation
*    the rights to use, copy, modify, merge, publish, distribute, sublicense,
*    and/or sell copies of the Software, and to permit persons to whom the
*    Software is furnished to do so, subject to the following conditions:
*
*    The above copyright notice and this permission notice shall be included in
*    all copies or substantial portions of the Software.
*
*    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
*    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
*    DEALINGS IN THE SOFTWARE.
*
*****************************************************************************
*
*    The GPL License (GPL)
*
*    Copyright (C) 2014 - 2024 Vivante Corporation
*
*    This program is free software; you can redistribute it and/or
*    modify it under the terms of the GNU General Public License
*    as published by the Free Software Foundation; either version 2
*    of the License, or (at your option) any later version.
*
*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with this program; if not, write to the Free Software Foundation,
*    Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*
*****************************************************************************
*
*    Note: This software is released under dual MIT and GPL licenses. A
*    recipient may use this file under the terms of either the MIT license or
*    GPL License. If you wish to use only one license not the other, you can
*    indicate your decision by deleting one of the above license notices in your
*    version of this file.
*
*****************************************************************************/


#ifndef __VVCAM_ISP_DMSC_H__
#define __VVCAM_ISP_DMSC_H__

#include "vvcam_isp_ctrl.h"

#define VVCAM_ISP_CID_DMSC_ENABLE           (VVCAM_ISP_CID_DMSC_BASE + 0x0000)
#define VVCAM_ISP_CID_DMSC_CAC_ENABLE       (VVCAM_ISP_CID_DMSC_BASE + 0x0001)
#define VVCAM_ISP_CID_DMSC_DEMOIRE_ENABLE   (VVCAM_ISP_CID_DMSC_BASE + 0x0002)
#define VVCAM_ISP_CID_DMSC_DEPURPLE_ENABLE  (VVCAM_ISP_CID_DMSC_BASE + 0x0003)
#define VVCAM_ISP_CID_DMSC_SHARPEN_ENABLE   (VVCAM_ISP_CID_DMSC_BASE + 0x0004)
#define VVCAM_ISP_CID_DMSC_SHARPEN_LINE_ENABLE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0005)
#define VVCAM_ISP_CID_DMSC_DEFALSE_ENABLE   (VVCAM_ISP_CID_DMSC_BASE + 0x0006)
#define VVCAM_ISP_CID_DMSC_INTERP_CORNER_ENABLE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0007)
#define VVCAM_ISP_CID_DMSC_DECLINE_ENABLE   (VVCAM_ISP_CID_DMSC_BASE + 0x0008)
#define VVCAM_ISP_CID_DMSC_RESET            (VVCAM_ISP_CID_DMSC_BASE + 0x0009)
#define VVCAM_ISP_CID_DMSC_MODE             (VVCAM_ISP_CID_DMSC_BASE + 0x000A)
#define VVCAM_ISP_CID_DMSC_AUTO_LEVEL       (VVCAM_ISP_CID_DMSC_BASE + 0x000B)
#define VVCAM_ISP_CID_DMSC_AUTO_GAIN        (VVCAM_ISP_CID_DMSC_BASE + 0x000C)
#define VVCAM_ISP_CID_DMSC_AUTO_INTERP_DIR_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x000D)
#define VVCAM_ISP_CID_DMSC_AUTO_INTERP_LARGE_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x000E)
#define VVCAM_ISP_CID_DMSC_AUTO_DECLINE_ENABLE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x000F)
#define VVCAM_ISP_CID_DMSC_AUTO_HIGH_LIGHT_THRESHOLD \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0010)
#define VVCAM_ISP_CID_DMSC_AUTO_DEPURPLE_ENABLE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0011)
#define VVCAM_ISP_CID_DMSC_AUTO_DEPURPLE_THRESHOLD \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0012)
#define VVCAM_ISP_CID_DMSC_AUTO_DEPURPLE_SAT_SHRINK \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0013)
#define VVCAM_ISP_CID_DMSC_AUTO_DEPURPLE_CBCR_RANGE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0014)
#define VVCAM_ISP_CID_DMSC_AUTO_DENOISE_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0015)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_ENABLE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0016)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_FACTOR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0017)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CLIP \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0018)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE0_T1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0019)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE0_T2_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x001A)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE0_T3 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x001B)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE0_T4_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x001C)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE0_R1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x001D)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE0_R2 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x001E)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE0_R3 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x001F)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE1_T1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0020)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE1_T2_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0021)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE1_T3 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0022)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE1_T4_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0023)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE1_R1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0024)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE1_R2 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0025)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE1_R3 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0026)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE2_T1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0027)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE2_T2_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0028)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE2_T3 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0029)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE2_T4_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x002A)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE2_R1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x002B)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE2_R2 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x002C)
#define VVCAM_ISP_CID_DMSC_AUTO_SHARPEN_CURVE2_R3 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x002D)
#define VVCAM_ISP_CID_DMSC_MANU_GRAD_THR_MIN \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x002E)
#define VVCAM_ISP_CID_DMSC_MANU_GRAD_THR_MAX \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x002F)
#define VVCAM_ISP_CID_DMSC_MANU_DIFF_COLOR_COEF \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0030)
#define VVCAM_ISP_CID_DMSC_MANU_ADAP_COEF_MODE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0031)
#define VVCAM_ISP_CID_DMSC_MANU_ADAP_COEF_THR_LOW \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0032)
#define VVCAM_ISP_CID_DMSC_MANU_ADAP_COEF_THR_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0033)
#define VVCAM_ISP_CID_DMSC_MANU_ADAP_COEF_MIN \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0034)
#define VVCAM_ISP_CID_DMSC_MANU_ADAP_COEF_MAX \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0035)
#define VVCAM_ISP_CID_DMSC_MANU_HIGH_LIGH_CONTROL_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0036)
#define VVCAM_ISP_CID_DMSC_MANU_HIGH_LIGH_CONTROL_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0037)
#define VVCAM_ISP_CID_DMSC_MANU_DEBURST_MODE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0038)
#define VVCAM_ISP_CID_DMSC_MANU_PURE_G_WEIGHT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0039)
#define VVCAM_ISP_CID_DMSC_MANU_PURE_RB_WEIGHT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x003A)
#define VVCAM_ISP_CID_DMSC_MANU_PURE_G_WEIGHT_ISO \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x003B)
#define VVCAM_ISP_CID_DMSC_MANU_PURE_RB_WEIGHT_ISO \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x003C)
#define VVCAM_ISP_CID_DMSC_MANU_CAC_A_BLUE  (VVCAM_ISP_CID_DMSC_BASE + 0x003D)
#define VVCAM_ISP_CID_DMSC_MANU_CAC_A_RED   (VVCAM_ISP_CID_DMSC_BASE + 0x003E)
#define VVCAM_ISP_CID_DMSC_MANU_CAC_B_BLUE  (VVCAM_ISP_CID_DMSC_BASE + 0x003F)
#define VVCAM_ISP_CID_DMSC_MANU_CAC_B_RED   (VVCAM_ISP_CID_DMSC_BASE + 0x0040)
#define VVCAM_ISP_CID_DMSC_MANU_CAC_C_BLUE  (VVCAM_ISP_CID_DMSC_BASE + 0x0041)
#define VVCAM_ISP_CID_DMSC_MANU_CAC_C_RED   (VVCAM_ISP_CID_DMSC_BASE + 0x0042)
#define VVCAM_ISP_CID_DMSC_MANU_CAC_CENTER_H_OFFSET \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0043)
#define VVCAM_ISP_CID_DMSC_MANU_CAC_CENTER_V_OFFSET \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0044)
#define VVCAM_ISP_CID_DMSC_MANU_DEMOIRE_REFINE_G_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0045)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_LINE_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0046)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_LINE_T1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0047)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_LINE_SHIFT1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0048)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_LINE_R1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0049)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_LINE_R2 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x004A)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_DENOISE_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x004B)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_FACTOR_WHITE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x004C)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_FACTOR_BLACK \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x004D)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_CLIP_WHITE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x004E)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_CLIP_BLACK \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x004F)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_CURVE_T1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0050)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_CURVE_T2_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0051)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_CURVE_T3 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0052)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_CURVE_T4_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0053)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_CURVE_R1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0054)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_CURVE_R2 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0055)
#define VVCAM_ISP_CID_DMSC_MANU_SHARPEN_CURVE_R3 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0056)
#define VVCAM_ISP_CID_DMSC_MANU_DEFALSE_COLOR_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0057)
#define VVCAM_ISP_CID_DMSC_MANU_DEFALSE_CBCR_CLASS_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0058)
#define VVCAM_ISP_CID_DMSC_MANU_DEFALSE_GRAY_PROTECT_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0059)
#define VVCAM_ISP_CID_DMSC_MANU_DEPURPLE_GRAD_CONTROL \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x005A)
#define VVCAM_ISP_CID_DMSC_MANU_DEPURPLE_PROTECT_THR_LOW \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x005B)
#define VVCAM_ISP_CID_DMSC_MANU_DEPURPLE_PROTECT_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x005C)
#define VVCAM_ISP_CID_DMSC_MANU_DEPURPLE_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x005D)
#define VVCAM_ISP_CID_DMSC_MANU_DEPURPLE_CBCR_MODE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x005E)
#define VVCAM_ISP_CID_DMSC_MANU_DEPURPLE_SAT_SHRINK \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x005F)
#define VVCAM_ISP_CID_DMSC_MANU_DEPURPLE_COLOR_RANGE_MODE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0060)
#define VVCAM_ISP_CID_DMSC_MANU_DEPURPLE_CB_LOW_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0061)
#define VVCAM_ISP_CID_DMSC_MANU_DEPURPLE_CB_HIGH_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0062)
#define VVCAM_ISP_CID_DMSC_MANU_DEPURPLE_CR_LOW_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0063)
#define VVCAM_ISP_CID_DMSC_MANU_DEPURPLE_CR_HIGH_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0064)
#define VVCAM_ISP_CID_DMSC_MANU_INTERP_CORNER_DIR_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0065)
#define VVCAM_ISP_CID_DMSC_MANU_INTERP_CORNER_LARGE_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0066)
#define VVCAM_ISP_CID_DMSC_MANU_INTERP_CORNER_DIR0_INTERP_TYPE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0067)
#define VVCAM_ISP_CID_DMSC_MANU_DECLINE_CORNER_LOW_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0068)
#define VVCAM_ISP_CID_DMSC_MANU_DECLINE_CORNER_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0069)
#define VVCAM_ISP_CID_DMSC_STAT_GRAD_THR_MIN \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x006A)
#define VVCAM_ISP_CID_DMSC_STAT_GRAD_THR_MAX \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x006B)
#define VVCAM_ISP_CID_DMSC_STAT_DIFF_COLOR_COEF \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x006C)
#define VVCAM_ISP_CID_DMSC_STAT_ADAP_COEF_MODE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x006D)
#define VVCAM_ISP_CID_DMSC_STAT_ADAP_COEF_THR_LOW \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x006E)
#define VVCAM_ISP_CID_DMSC_STAT_ADAP_COEF_THR_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x006F)
#define VVCAM_ISP_CID_DMSC_STAT_ADAP_COEF_MIN \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0070)
#define VVCAM_ISP_CID_DMSC_STAT_ADAP_COEF_MAX \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0071)
#define VVCAM_ISP_CID_DMSC_STAT_HIGH_LIGH_CONTROL_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0072)
#define VVCAM_ISP_CID_DMSC_STAT_HIGH_LIGH_CONTROL_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0073)
#define VVCAM_ISP_CID_DMSC_STAT_DEBURST_MODE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0074)
#define VVCAM_ISP_CID_DMSC_STAT_PURE_G_WEIGHT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0075)
#define VVCAM_ISP_CID_DMSC_STAT_PURE_RB_WEIGHT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0076)
#define VVCAM_ISP_CID_DMSC_STAT_PURE_G_WEIGHT_ISO \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0077)
#define VVCAM_ISP_CID_DMSC_STAT_PURE_RB_WEIGHT_ISO \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0078)
#define VVCAM_ISP_CID_DMSC_STAT_CAC_A_BLUE  (VVCAM_ISP_CID_DMSC_BASE + 0x0079)
#define VVCAM_ISP_CID_DMSC_STAT_CAC_A_RED   (VVCAM_ISP_CID_DMSC_BASE + 0x007A)
#define VVCAM_ISP_CID_DMSC_STAT_CAC_B_BLUE  (VVCAM_ISP_CID_DMSC_BASE + 0x007B)
#define VVCAM_ISP_CID_DMSC_STAT_CAC_B_RED   (VVCAM_ISP_CID_DMSC_BASE + 0x007C)
#define VVCAM_ISP_CID_DMSC_STAT_CAC_C_BLUE  (VVCAM_ISP_CID_DMSC_BASE + 0x007D)
#define VVCAM_ISP_CID_DMSC_STAT_CAC_C_RED   (VVCAM_ISP_CID_DMSC_BASE + 0x007E)
#define VVCAM_ISP_CID_DMSC_STAT_CAC_CENTER_H_OFFSET\
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x007F)
#define VVCAM_ISP_CID_DMSC_STAT_CAC_CENTER_V_OFFSET \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0080)
#define VVCAM_ISP_CID_DMSC_STAT_DEMOIRE_REFINE_G_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0081)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_LINE_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0082)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_LINE_T1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0083)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_LINE_SHIFT1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0084)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_LINE_R1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0085)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_LINE_R2 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0086)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_DENOISE_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0087)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_FACTOR_WHITE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0088)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_FACTOR_BLACK \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0089)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_CLIP_WHITE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x008A)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_CLIP_BLACK \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x008B)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_CURVE_T1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x008C)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_CURVE_T2_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x008D)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_CURVE_T3 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x008E)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_CURVE_T4_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x008F)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_CURVE_R1 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0090)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_CURVE_R2 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0091)
#define VVCAM_ISP_CID_DMSC_STAT_SHARPEN_CURVE_R3 \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0092)
#define VVCAM_ISP_CID_DMSC_STAT_DEFALSE_COLOR_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0093)
#define VVCAM_ISP_CID_DMSC_STAT_DEFALSE_CBCR_CLASS_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0094)
#define VVCAM_ISP_CID_DMSC_STAT_DEFALSE_GRAY_PROTECT_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0095)
#define VVCAM_ISP_CID_DMSC_STAT_DEPURPLE_GRAD_CONTROL \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0096)
#define VVCAM_ISP_CID_DMSC_STAT_DEPURPLE_PROTECT_THR_LOW \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0097)
#define VVCAM_ISP_CID_DMSC_STAT_DEPURPLE_PROTECT_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0098)
#define VVCAM_ISP_CID_DMSC_STAT_DEPURPLE_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x0099)
#define VVCAM_ISP_CID_DMSC_STAT_DEPURPLE_CBCR_MODE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x009A)
#define VVCAM_ISP_CID_DMSC_STAT_DEPURPLE_SAT_SHRINK \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x009B)
#define VVCAM_ISP_CID_DMSC_STAT_DEPURPLE_COLOR_RANGE_MODE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x009C)
#define VVCAM_ISP_CID_DMSC_STAT_DEPURPLE_CB_LOW_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x009D)
#define VVCAM_ISP_CID_DMSC_STAT_DEPURPLE_CB_HIGH_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x009E)
#define VVCAM_ISP_CID_DMSC_STAT_DEPURPLE_CR_LOW_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x009F)
#define VVCAM_ISP_CID_DMSC_STAT_DEPURPLE_CR_HIGH_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x00A0)
#define VVCAM_ISP_CID_DMSC_STAT_INTERP_CORNER_DIR_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x00A1)
#define VVCAM_ISP_CID_DMSC_STAT_INTERP_CORNER_LARGE_STRENGTH \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x00A2)
#define VVCAM_ISP_CID_DMSC_STAT_INTERP_CORNER_DIR0_INTERP_TYPE \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x00A3)
#define VVCAM_ISP_CID_DMSC_STAT_DECLINE_CORNER_LOW_THR \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x00A4)
#define VVCAM_ISP_CID_DMSC_STAT_DECLINE_CORNER_SHIFT \
                                            (VVCAM_ISP_CID_DMSC_BASE + 0x00A5)

#ifdef __KERNEL__
int vvcam_isp_dmsc_ctrl_count(void);
int vvcam_isp_dmsc_ctrl_create(struct vvcam_isp_dev *isp_dev);
#endif

#endif