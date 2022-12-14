/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __TD4375_BOE_PARAM_H__
#define __TD4375_BOE_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>

#define LCD_TYPE_VENDOR		"BOE"

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

#define LDI_REG_BRIGHTNESS	0x51
#define LDI_REG_ID		0xDA
#define LDI_LEN_BRIGHTNESS	((u16)ARRAY_SIZE(SEQ_TD4375_BOE_BRIGHTNESS))

/* len is read length */
#define LDI_LEN_ID		3

#define TYPE_WRITE		I2C_SMBUS_WRITE
#define TYPE_DELAY		U8_MAX

static u8 KTZ8864_INIT[] = {
	TYPE_WRITE, 0x0C, 0x24,
	TYPE_WRITE, 0x0D, 0x1E,
	TYPE_WRITE, 0x0E, 0x1E,
	TYPE_WRITE, 0x09, 0x99,
	TYPE_WRITE, 0x02, 0x6B,
	TYPE_WRITE, 0x03, 0x0D,
	TYPE_WRITE, 0x11, 0x74,
	TYPE_WRITE, 0x04, 0x03,
	TYPE_WRITE, 0x05, 0xC2,
	TYPE_WRITE, 0x10, 0x66,
	TYPE_WRITE, 0x08, 0x13,
};

static u8 KTZ8864_EXIT[] = {
	TYPE_WRITE, 0x09, 0x9C,
	TYPE_WRITE, 0x09, 0x18,
	TYPE_DELAY, 1, 0,
	TYPE_WRITE, 0x08, 0x00,
};

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

static unsigned char SEQ_TD4375_BOE_SLEEP_OUT[] = { 0x11 };
static unsigned char SEQ_TD4375_BOE_SLEEP_IN[] = { 0x10 };
static unsigned char SEQ_TD4375_BOE_DISPLAY_OFF[] = { 0x28 };
static unsigned char SEQ_TD4375_BOE_DISPLAY_ON[] = { 0x29 };

static unsigned char SEQ_TD4375_BOE_BRIGHTNESS[] = {
	0x51,
	0x00,
};

static unsigned char SEQ_TD4375_BOE_001[] = {
	0xB0,
	0x04,
};

static unsigned char SEQ_TD4375_BOE_002[] = {
	0xB6,
	0x30, 0x6B, 0x00, 0x86, 0x03, 0x0A, 0x13, 0x1A, 0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_003[] = {
	0xB7,
	0x51, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_004[] = {
	0xB8,
	0x57, 0x3D, 0x19, 0xBE, 0x1E, 0x0A, 0x0A,
};

static unsigned char SEQ_TD4375_BOE_005[] = {
	0xB9,
	0x6F, 0x3D, 0x28, 0xBE, 0x3C, 0x14, 0x0A,
};

static unsigned char SEQ_TD4375_BOE_006[] = {
	0xBA,
	0x23, 0x57, 0x00, 0x00, 0x00, 0x00, 0x0A,
};

static unsigned char SEQ_TD4375_BOE_007[] = {
	0xBB,
	0x44, 0x26, 0xC3, 0x1F, 0x19, 0x06, 0x03, 0xC0, 0x00, 0x00,
	0x10,
};

static unsigned char SEQ_TD4375_BOE_008[] = {
	0xBC,
	0x32, 0x4C, 0xC3, 0x52, 0x32, 0x1F, 0x03, 0xF2, 0x00, 0x00,
	0x13,
};

static unsigned char SEQ_TD4375_BOE_009[] = {
	0xBD,
	0x24, 0x68, 0xC3, 0xAA, 0x3F, 0x32, 0x03, 0xFF, 0x00, 0x00,
	0x25,
};

static unsigned char SEQ_TD4375_BOE_010[] = {
	0xBE,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_011[] = {
	0xC0,
	0x00, 0xD0, 0x01, 0x2C, 0x0A, 0x09, 0x68, 0x00, 0x0C, 0x22,
	0x00, 0x08, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x02,
};

static unsigned char SEQ_TD4375_BOE_012[] = {
	0xC1,
	0x30, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00,
	0x05, 0x20, 0x00, 0x80, 0xFA, 0x40, 0x00, 0x84, 0x0F, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x2C, 0x08, 0x08, 0x00, 0x0A, 0x28, 0x0F, 0x3C,
	0x14, 0x50,
};

static unsigned char SEQ_TD4375_BOE_013[] = {
	0xC2,
	0x00, 0x30, 0xC7, 0x02, 0x02, 0x10, 0x03, 0x05, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xC5,
	0x04, 0x04, 0x01, 0x01, 0xC1, 0x00, 0xA0, 0x0A, 0x00, 0x00,
	0x02, 0x08, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0xA0, 0x0A,
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00,
};

static unsigned char SEQ_TD4375_BOE_014[] = {
	0xC3,
	0x00, 0x00, 0xC1, 0x01, 0x97, 0xC9, 0xA2, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xCE, 0x01, 0x00, 0x0A, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xAA, 0xAA, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xC0,
	0x00, 0x0A, 0x00, 0xD0, 0x00, 0x00, 0x01, 0x00, 0x00, 0xC0,
	0x00, 0x0A, 0x00, 0xD0, 0x00, 0x00, 0x01, 0x00, 0x00, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_015[] = {
	0xC4,
	0x00, 0x00, 0x45, 0x45, 0x4D, 0x4D, 0x61, 0x5F, 0x5D, 0x61,
	0x5F, 0x5D, 0x53, 0x0F, 0x0E, 0x11, 0x10, 0x44, 0x4F, 0x4F,
	0xBF, 0xBE, 0x03, 0x02, 0x00, 0x00, 0x45, 0x45, 0x4D, 0x4D,
	0x61, 0x5F, 0x5D, 0x61, 0x5F, 0x5D, 0x53, 0x0F, 0x0E, 0x11,
	0x10, 0x44, 0x4F, 0x4F, 0xBF, 0xBE, 0x03, 0x02, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xC3, 0xFD, 0xFF, 0xC3,
	0x00, 0x00, 0x3C, 0x00, 0x00, 0x3C, 0xC0, 0x0F, 0x00, 0xC0,
	0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58,
	0x55, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_016[] = {
	0xC5,
	0x08, 0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_017[] = {
	0xC6,
	0x02, 0x0A, 0x08, 0xFC, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x13,
	0x01, 0xAF, 0x00, 0x01, 0x00, 0x43, 0x3D, 0x3C, 0x00, 0x00,
	0x00, 0x34, 0x05, 0x09, 0x28, 0x28, 0x03, 0x00, 0x43, 0x3D,
	0x3C, 0x01, 0x0B, 0x00, 0x00, 0x00, 0x1E, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 0x12, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x00,
};

static unsigned char SEQ_TD4375_BOE_018[] = {
	0xC7,
	0x00, 0x00, 0x00, 0xA2, 0x01, 0x01, 0x01, 0x28, 0x01, 0x41,
	0x01, 0x4C, 0x01, 0x5A, 0x01, 0x59, 0x01, 0x73, 0x01, 0x43,
	0x01, 0x97, 0x01, 0x59, 0x01, 0x9C, 0x01, 0x56, 0x01, 0xBF,
	0x01, 0xBF, 0x02, 0x41, 0x02, 0xA4, 0x02, 0xAD, 0x00, 0x00,
	0x00, 0xA2, 0x01, 0x01, 0x01, 0x28, 0x01, 0x41, 0x01, 0x4C,
	0x01, 0x5A, 0x01, 0x59, 0x01, 0x73, 0x01, 0x43, 0x01, 0x97,
	0x01, 0x59, 0x01, 0x9C, 0x01, 0x56, 0x01, 0xBF, 0x01, 0xBF,
	0x02, 0x41, 0x02, 0xA4, 0x02, 0xAD,
};

static unsigned char SEQ_TD4375_BOE_019[] = {
	0xCB,
	0x20, 0x80, 0x70, 0x00, 0x20, 0x00, 0x00, 0x2D, 0x41, 0x00,
	0x00, 0x00, 0x00, 0xFF,
};

static unsigned char SEQ_TD4375_BOE_020[] = {
	0xCD,
	0x00,
};

static unsigned char SEQ_TD4375_BOE_021[] = {
	0xCE,
	0x7D, 0x40, 0x49, 0x53, 0x59, 0x5E, 0x63, 0x68, 0x6E, 0x74,
	0x7E, 0x8A, 0x98, 0xA8, 0xBB, 0xD0, 0xE7, 0xFF, 0x31, 0x5F,
	0x00, 0x00, 0x45, 0x00, 0x69, 0x5A, 0x40, 0x11, 0xF4, 0x00,
	0x00, 0x04, 0xFA, 0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_022[] = {
	0xCF,
	0x00, 0x00, 0x80, 0x46, 0x61, 0x00,
};

static unsigned char SEQ_TD4375_BOE_023[] = {
	0xD0,
	0xCC, 0x14, 0xD5, 0x66, 0x09, 0xB0, 0x00, 0xCF, 0xEF, 0xE5,
	0xD4, 0x0B, 0x52, 0xFE, 0x09, 0x09, 0xCF, 0x00,
};

static unsigned char SEQ_TD4375_BOE_024[] = {
	0xD1,
	0xD3, 0xD3, 0x1B, 0xB0, 0x07, 0x07, 0x3B, 0x11, 0x31, 0x33,
	0x31, 0x05, 0x33, 0x7B, 0x07, 0x33, 0x3B, 0x78, 0xD2, 0xD2,
	0x06, 0x96, 0x13, 0x93, 0x22, 0x22, 0x22, 0xB3, 0xBB, 0x80,
	0x00, 0xBB, 0xBB, 0x11, 0x08, 0x08, 0x84, 0xC0, 0x09, 0x77,
	0xFF, 0x11, 0x44,
};

static unsigned char SEQ_TD4375_BOE_025[] = {
	0xD2,
	0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_026[] = {
	0xD4,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_027[] = {
	0xD7,
	0x21, 0x10, 0x52, 0x52, 0x00, 0xD0, 0x00, 0x0C, 0x00, 0xD0,
	0x04, 0xFD, 0x01, 0x00, 0x03, 0x03, 0x05, 0x05, 0x00, 0x03,
	0x04, 0x05, 0x00, 0x04, 0x03, 0x08, 0x02, 0x08, 0x06, 0x03,
	0x08, 0x04, 0x08, 0x10, 0x0C, 0x0B, 0x0A, 0x0A, 0x0A, 0x07,
	0x08, 0x0A, 0x06, 0x00, 0x08, 0x00, 0x04, 0x05, 0x09, 0x00,
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x04,
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x06, 0x06,
	0x05, 0x05, 0x05, 0x00,
};

static unsigned char SEQ_TD4375_BOE_028[] = {
	0xD8,
	0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_029[] = {
	0xD9,
	0x40, 0x97, 0x26, 0xED, 0x0E, 0xBA, 0x16, 0x6C, 0x16, 0x6C,
	0x00, 0x30, 0x00, 0x14, 0x00, 0x14, 0x00, 0x0C, 0x00, 0x00,
	0x01, 0x00,
};

static unsigned char SEQ_TD4375_BOE_030[] = {
	0xDD,
	0x30, 0x06, 0x23, 0x65,
};

static unsigned char SEQ_TD4375_BOE_031[] = {
	0xDE,
	0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x10,
};

static unsigned char SEQ_TD4375_BOE_032[] = {
	0xE6,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_033[] = {
	0xE7,
	0x11, 0x00, 0x89, 0x30, 0x80, 0x09, 0x68, 0x04, 0x38, 0x00,
	0x08, 0x02, 0x1C, 0x02, 0x1C, 0x02, 0x00, 0x02, 0x0E, 0x20,
	0x00, 0xBB, 0x00, 0x07, 0x0C, 0x0D, 0xB7, 0x0C, 0xB7, 0x18,
	0x00, 0x10, 0xF0, 0x03, 0x0C, 0x20, 0x00, 0x06, 0x0B, 0x0B,
	0x33, 0x0E, 0x1C, 0x2A, 0x38, 0x46, 0x54, 0x62, 0x69, 0x70,
	0x77, 0x79, 0x7B, 0x7D, 0x7E, 0x01, 0x02, 0x01, 0x00, 0x09,
	0x40, 0x09, 0xBE, 0x19, 0xFC, 0x19, 0xFA, 0x19, 0xF8, 0x1A,
	0x38, 0x1A, 0x78, 0x1A, 0xB6, 0x2A, 0xF6, 0x2B, 0x34, 0x2B,
	0x74, 0x3B, 0x74, 0x6B, 0xF4, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x00, 0x06, 0x0F,
	0x0F, 0x33, 0x0E, 0x1C, 0x2A, 0x38, 0x46, 0x54, 0x62, 0x69,
	0x70, 0x77, 0x79, 0x7B, 0x7D, 0x7E, 0x01, 0xC2, 0x22, 0x00,
	0x2A, 0x40, 0x2A, 0xBE, 0x3A, 0xFC, 0x3A, 0xFA, 0x3A, 0xF8,
	0x3B, 0x38, 0x3B, 0x78, 0x3B, 0x76, 0x4B, 0xB6, 0x4B, 0xB6,
	0x4B, 0xF4, 0x63, 0xF4, 0x7C, 0x34, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_034[] = {
	0xE8,
	0x00, 0x30, 0x63, 0x00,
};

static unsigned char SEQ_TD4375_BOE_035[] = {
	0xEA,
	0x01, 0x0E, 0x09, 0x60, 0x0A, 0x80, 0x00, 0x00, 0x09, 0x00,
	0x01, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0xC2, 0x00, 0x12, 0x00, 0xD0, 0x0D, 0x00, 0x86, 0x00,
};

static unsigned char SEQ_TD4375_BOE_036[] = {
	0xEB,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x11,
};

static unsigned char SEQ_TD4375_BOE_037[] = {
	0xEC,
	0x05, 0xF0, 0x00, 0x10, 0x9F, 0x0A, 0x80, 0x00, 0x02, 0x3A,
};

static unsigned char SEQ_TD4375_BOE_038[] = {
	0xED,
	0x01, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x4A,
	0x00, 0x00, 0x00, 0x50, 0x00, 0x01, 0x4A, 0x00, 0x00, 0xA0,
	0x10, 0x00,
};

static unsigned char SEQ_TD4375_BOE_039[] = {
	0xEE,
	0x01, 0x17, 0x00, 0x00, 0x00, 0x75, 0x01, 0x00, 0x00, 0x00,
	0x00, 0xF2, 0x43, 0x5D, 0xC0, 0x05, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x43, 0x0D, 0x70, 0x01, 0x10, 0x09,
	0x09, 0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_040[] = {
	0xEF,
	0x00, 0x70, 0x42, 0x07, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x2F,
	0x2F, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x70, 0x42, 0x07, 0xD0, 0x2F, 0x2F, 0x2F, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x08,
	0x10, 0x00, 0x10, 0x00, 0x0A, 0x06, 0x40, 0x00, 0x00, 0x00,
	0x00, 0x4B, 0x00, 0x03, 0x51, 0x00, 0x00, 0x05, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_041[] = {
	0xF1,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00,
};

static unsigned char SEQ_TD4375_BOE_042[] = {
	0xF9,
	0x44, 0x3F, 0x00, 0x8D, 0xBF, 0x00, 0x09, 0x1D,
};

static unsigned char SEQ_TD4375_BOE_043[] = {
	0xB0,
	0x03,
};

static unsigned char SEQ_TD4375_BOE_044[] = {
	0x53,
	0x0C,
};

static unsigned char SEQ_TD4375_BOE_045[] = {
	0x55,
	0x03,
};

static unsigned char SEQ_TD4375_BOE_046[] = {
	0x5E,
	0x30,
};

static struct lcd_seq_info LCD_SEQ_INIT_1[] = {
	{SEQ_TD4375_BOE_001, ARRAY_SIZE(SEQ_TD4375_BOE_001), 0, },
	{SEQ_TD4375_BOE_002, ARRAY_SIZE(SEQ_TD4375_BOE_002), 0, },
	{SEQ_TD4375_BOE_003, ARRAY_SIZE(SEQ_TD4375_BOE_003), 0, },
	{SEQ_TD4375_BOE_004, ARRAY_SIZE(SEQ_TD4375_BOE_004), 0, },
	{SEQ_TD4375_BOE_005, ARRAY_SIZE(SEQ_TD4375_BOE_005), 0, },
	{SEQ_TD4375_BOE_006, ARRAY_SIZE(SEQ_TD4375_BOE_006), 0, },
	{SEQ_TD4375_BOE_007, ARRAY_SIZE(SEQ_TD4375_BOE_007), 0, },
	{SEQ_TD4375_BOE_008, ARRAY_SIZE(SEQ_TD4375_BOE_008), 0, },
	{SEQ_TD4375_BOE_009, ARRAY_SIZE(SEQ_TD4375_BOE_009), 0, },
	{SEQ_TD4375_BOE_010, ARRAY_SIZE(SEQ_TD4375_BOE_010), 0, },
	{SEQ_TD4375_BOE_011, ARRAY_SIZE(SEQ_TD4375_BOE_011), 0, },
	{SEQ_TD4375_BOE_012, ARRAY_SIZE(SEQ_TD4375_BOE_012), 0, },
	{SEQ_TD4375_BOE_013, ARRAY_SIZE(SEQ_TD4375_BOE_013), 0, },
	{SEQ_TD4375_BOE_014, ARRAY_SIZE(SEQ_TD4375_BOE_014), 0, },
	{SEQ_TD4375_BOE_015, ARRAY_SIZE(SEQ_TD4375_BOE_015), 0, },
	{SEQ_TD4375_BOE_016, ARRAY_SIZE(SEQ_TD4375_BOE_016), 0, },
	{SEQ_TD4375_BOE_017, ARRAY_SIZE(SEQ_TD4375_BOE_017), 0, },
	{SEQ_TD4375_BOE_018, ARRAY_SIZE(SEQ_TD4375_BOE_018), 0, },
	{SEQ_TD4375_BOE_019, ARRAY_SIZE(SEQ_TD4375_BOE_019), 0, },
	{SEQ_TD4375_BOE_020, ARRAY_SIZE(SEQ_TD4375_BOE_020), 0, },
	{SEQ_TD4375_BOE_021, ARRAY_SIZE(SEQ_TD4375_BOE_021), 0, },
	{SEQ_TD4375_BOE_022, ARRAY_SIZE(SEQ_TD4375_BOE_022), 0, },
	{SEQ_TD4375_BOE_023, ARRAY_SIZE(SEQ_TD4375_BOE_023), 0, },
	{SEQ_TD4375_BOE_024, ARRAY_SIZE(SEQ_TD4375_BOE_024), 0, },
	{SEQ_TD4375_BOE_025, ARRAY_SIZE(SEQ_TD4375_BOE_025), 0, },
	{SEQ_TD4375_BOE_026, ARRAY_SIZE(SEQ_TD4375_BOE_026), 0, },
	{SEQ_TD4375_BOE_027, ARRAY_SIZE(SEQ_TD4375_BOE_027), 0, },
	{SEQ_TD4375_BOE_028, ARRAY_SIZE(SEQ_TD4375_BOE_028), 0, },
	{SEQ_TD4375_BOE_029, ARRAY_SIZE(SEQ_TD4375_BOE_029), 0, },
	{SEQ_TD4375_BOE_030, ARRAY_SIZE(SEQ_TD4375_BOE_030), 0, },
	{SEQ_TD4375_BOE_031, ARRAY_SIZE(SEQ_TD4375_BOE_031), 0, },
	{SEQ_TD4375_BOE_032, ARRAY_SIZE(SEQ_TD4375_BOE_032), 0, },
	{SEQ_TD4375_BOE_033, ARRAY_SIZE(SEQ_TD4375_BOE_033), 0, },
	{SEQ_TD4375_BOE_034, ARRAY_SIZE(SEQ_TD4375_BOE_034), 0, },
	{SEQ_TD4375_BOE_035, ARRAY_SIZE(SEQ_TD4375_BOE_035), 0, },
	{SEQ_TD4375_BOE_036, ARRAY_SIZE(SEQ_TD4375_BOE_036), 0, },
	{SEQ_TD4375_BOE_037, ARRAY_SIZE(SEQ_TD4375_BOE_037), 0, },
	{SEQ_TD4375_BOE_038, ARRAY_SIZE(SEQ_TD4375_BOE_038), 0, },
	{SEQ_TD4375_BOE_039, ARRAY_SIZE(SEQ_TD4375_BOE_039), 0, },
	{SEQ_TD4375_BOE_040, ARRAY_SIZE(SEQ_TD4375_BOE_040), 0, },
	{SEQ_TD4375_BOE_041, ARRAY_SIZE(SEQ_TD4375_BOE_041), 0, },
	{SEQ_TD4375_BOE_042, ARRAY_SIZE(SEQ_TD4375_BOE_042), 0, },
	{SEQ_TD4375_BOE_043, ARRAY_SIZE(SEQ_TD4375_BOE_043), 0, },
	{SEQ_TD4375_BOE_044, ARRAY_SIZE(SEQ_TD4375_BOE_044), 0, },
	{SEQ_TD4375_BOE_045, ARRAY_SIZE(SEQ_TD4375_BOE_045), 0, },
	{SEQ_TD4375_BOE_046, ARRAY_SIZE(SEQ_TD4375_BOE_046), 0, },
	{SEQ_TD4375_BOE_BRIGHTNESS, ARRAY_SIZE(SEQ_TD4375_BOE_BRIGHTNESS), 0, },
	{SEQ_TD4375_BOE_SLEEP_OUT, ARRAY_SIZE(SEQ_TD4375_BOE_SLEEP_OUT), 88*1000, },	/* After 4 frames */
	{SEQ_TD4375_BOE_DISPLAY_ON, ARRAY_SIZE(SEQ_TD4375_BOE_DISPLAY_ON), 0, },
};

static struct lcd_seq_info LCD_SEQ_EXIT_1[] = {
	{SEQ_TD4375_BOE_DISPLAY_OFF, ARRAY_SIZE(SEQ_TD4375_BOE_DISPLAY_OFF), 0, },
	{SEQ_TD4375_BOE_SLEEP_IN, ARRAY_SIZE(SEQ_TD4375_BOE_SLEEP_IN), 0, },
};

static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	2, 2, 3, 3, 4, 4, 5, 5, 6, 6, /* 1: 2 */
	7, 7, 8, 8, 9, 9, 10, 10, 11, 11,
	12, 12, 13, 13, 14, 14, 15, 15, 16, 16,
	17, 17, 18, 18, 19, 20, 20, 21, 21, 22,
	23, 23, 24, 24, 25, 26, 26, 27, 27, 28,
	29, 29, 30, 30, 31, 32, 32, 33, 33, 34,
	35, 35, 36, 36, 37, 38, 38, 39, 39, 40,
	41, 41, 42, 42, 43, 44, 44, 45, 45, 46,
	47, 48, 48, 49, 50, 51, 52, 52, 53, 54,
	55, 56, 56, 57, 58, 59, 59, 60, 61, 62,
	63, 63, 64, 65, 66, 67, 67, 68, 69, 70,
	71, 71, 72, 73, 74, 75, 75, 76, 77, 78,
	78, 79, 80, 81, 82, 82, 83, 84, 85, 86, /* 128: 84 */
	87, 88, 89, 90, 91, 92, 93, 94, 95, 96,
	97, 98, 99, 100, 101, 102, 103, 104, 105, 106,
	107, 108, 109, 110, 111, 112, 113, 114, 115, 117,
	118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
	128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
	138, 139, 140, 141, 142, 143, 144, 145, 146, 147,
	148, 149, 150, 151, 152, 153, 154, 155, 156, 157,
	158, 159, 160, 161, 162, 163, 164, 165, 166, 167,
	168, 169, 170, 171, 172, 173, 174, 175, 176, 177,
	178, 179, 180, 182, 183, 184, 185, 186, 187, 188,
	189, 190, 191, 192, 193, 194, 195, 196, 197, 198,
	199, 200, 201, 202, 203, 204, 205, 206, 207, 208,
	209, 210, 211, 212, 213, 214, 215, 216, 216, 217, /* 255: 213 */
	218, 219, 220, 221, 221, 222, 223, 224, 225, 226,
	226, 227, 228, 229, 230, 231, 232, 232, 233, 234,
	235, 236, 237, 237, 238, 239, 240, 241, 241, 242,
	243, 244, 245, 245, 246, 247, 248, 249, 249, 250,
	251, 252, 252, 253, 254, 255,
};

#endif /* __TD4375_BOE_PARAM_H__ */
