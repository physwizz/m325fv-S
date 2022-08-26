/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ILI9882N_BOE_PARAM_H__
#define __ILI9882N_BOE_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>

#define LCD_TYPE_VENDOR		"BOE"

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

#define LDI_REG_BRIGHTNESS	0x51
#define LDI_REG_ID		0xDA
#define LDI_LEN_BRIGHTNESS	((u16)ARRAY_SIZE(SEQ_ILI9882N_BOE_BRIGHTNESS))

/* len is read length */
#define LDI_LEN_ID		3

#define TYPE_WRITE		I2C_SMBUS_WRITE
#define TYPE_DELAY		U8_MAX

static u8 LM36274_INIT[] = {
	TYPE_WRITE, 0x0C, 0x2C,
	TYPE_WRITE, 0x0D, 0x26,
	TYPE_WRITE, 0x0E, 0x26,
	TYPE_WRITE, 0x09, 0xBE,
	TYPE_WRITE, 0x02, 0x6B,
	TYPE_WRITE, 0x03, 0x2F,
	TYPE_WRITE, 0x11, 0x74,
	TYPE_WRITE, 0x04, 0x05,
	TYPE_WRITE, 0x05, 0xCC,
	TYPE_WRITE, 0x10, 0x67,
	TYPE_WRITE, 0x08, 0x13,
};

static u8 LM36274_EXIT[] = {
	TYPE_WRITE, 0x09, 0x18,
	TYPE_DELAY, 1, 0,
	TYPE_WRITE, 0x08, 0x00,
};

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

static unsigned char SEQ_ILI9882N_BOE_SLEEP_OUT[] = { 0x11 };
static unsigned char SEQ_ILI9882N_BOE_SLEEP_IN[] = { 0x10 };
static unsigned char SEQ_ILI9882N_BOE_DISPLAY_OFF[] = { 0x28 };
static unsigned char SEQ_ILI9882N_BOE_DISPLAY_ON[] = { 0x29 };

static unsigned char SEQ_ILI9882N_BOE_BRIGHTNESS[] = {
	0x51,
	0x00, 0x00,
};

static unsigned char SEQ_ILI9882N_BOE_BRIGHTNESS_MODE[] = {
	0x53,
	0x2C,
};

static unsigned char SEQ_ILI9882N_BOE_001[] = {
	0xFF,
	0x98, 0x82, 0x01,
};

static unsigned char SEQ_ILI9882N_BOE_002[] = {
	0x00,
	0x4A,
};

static unsigned char SEQ_ILI9882N_BOE_003[] = {
	0x01,
	0x33,
};

static unsigned char SEQ_ILI9882N_BOE_004[] = {
	0x02,
	0x39,
};

static unsigned char SEQ_ILI9882N_BOE_005[] = {
	0x03,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_006[] = {
	0x08,
	0x86,
};

static unsigned char SEQ_ILI9882N_BOE_007[] = {
	0x09,
	0x01,
};

static unsigned char SEQ_ILI9882N_BOE_008[] = {
	0x0A,
	0x73,
};

static unsigned char SEQ_ILI9882N_BOE_009[] = {
	0x0C,
	0x39,
};

static unsigned char SEQ_ILI9882N_BOE_010[] = {
	0x0D,
	0x39,
};

static unsigned char SEQ_ILI9882N_BOE_011[] = {
	0x0E,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_012[] = {
	0x0F,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_013[] = {
	0x0B,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_014[] = {
	0x28,
	0x4B,
};

static unsigned char SEQ_ILI9882N_BOE_015[] = {
	0x2A,
	0x4B,
};

static unsigned char SEQ_ILI9882N_BOE_016[] = {
	0x29,
	0x85,
};

static unsigned char SEQ_ILI9882N_BOE_017[] = {
	0x2B,
	0x85,
};

static unsigned char SEQ_ILI9882N_BOE_018[] = {
	0xEE,
	0x10,
};

static unsigned char SEQ_ILI9882N_BOE_019[] = {
	0xEF,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_020[] = {
	0xF0,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_021[] = {
	0x31,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_022[] = {
	0x32,
	0x02,
};

static unsigned char SEQ_ILI9882N_BOE_023[] = {
	0x33,
	0x23,
};

static unsigned char SEQ_ILI9882N_BOE_024[] = {
	0x34,
	0x02,
};

static unsigned char SEQ_ILI9882N_BOE_025[] = {
	0x35,
	0x09,
};

static unsigned char SEQ_ILI9882N_BOE_026[] = {
	0x36,
	0x0B,
};

static unsigned char SEQ_ILI9882N_BOE_027[] = {
	0x37,
	0x15,
};

static unsigned char SEQ_ILI9882N_BOE_028[] = {
	0x38,
	0x17,
};

static unsigned char SEQ_ILI9882N_BOE_029[] = {
	0x39,
	0x11,
};

static unsigned char SEQ_ILI9882N_BOE_030[] = {
	0x3A,
	0x13,
};

static unsigned char SEQ_ILI9882N_BOE_031[] = {
	0x3B,
	0x22,
};

static unsigned char SEQ_ILI9882N_BOE_032[] = {
	0x3C,
	0x22,
};

static unsigned char SEQ_ILI9882N_BOE_033[] = {
	0x3D,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_034[] = {
	0x3E,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_035[] = {
	0x3F,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_036[] = {
	0x40,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_037[] = {
	0x41,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_038[] = {
	0x42,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_039[] = {
	0x43,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_040[] = {
	0x44,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_041[] = {
	0x45,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_042[] = {
	0x46,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_043[] = {
	0x47,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_044[] = {
	0x48,
	0x02,
};

static unsigned char SEQ_ILI9882N_BOE_045[] = {
	0x49,
	0x23,
};

static unsigned char SEQ_ILI9882N_BOE_046[] = {
	0x4A,
	0x02,
};

static unsigned char SEQ_ILI9882N_BOE_047[] = {
	0x4B,
	0x08,
};

static unsigned char SEQ_ILI9882N_BOE_048[] = {
	0x4C,
	0x0A,
};

static unsigned char SEQ_ILI9882N_BOE_049[] = {
	0x4D,
	0x14,
};

static unsigned char SEQ_ILI9882N_BOE_050[] = {
	0x4E,
	0x16,
};

static unsigned char SEQ_ILI9882N_BOE_051[] = {
	0x4F,
	0x10,
};

static unsigned char SEQ_ILI9882N_BOE_052[] = {
	0x50,
	0x12,
};

static unsigned char SEQ_ILI9882N_BOE_053[] = {
	0x51,
	0x22,
};

static unsigned char SEQ_ILI9882N_BOE_054[] = {
	0x52,
	0x22,
};

static unsigned char SEQ_ILI9882N_BOE_055[] = {
	0x53,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_056[] = {
	0x54,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_057[] = {
	0x55,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_058[] = {
	0x56,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_059[] = {
	0x57,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_060[] = {
	0x58,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_061[] = {
	0x59,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_062[] = {
	0x5A,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_063[] = {
	0x5B,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_064[] = {
	0x5C,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_065[] = {
	0x61,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_066[] = {
	0x62,
	0x22,
};

static unsigned char SEQ_ILI9882N_BOE_067[] = {
	0x63,
	0x23,
};

static unsigned char SEQ_ILI9882N_BOE_068[] = {
	0x64,
	0x02,
};

static unsigned char SEQ_ILI9882N_BOE_069[] = {
	0x65,
	0x0A,
};

static unsigned char SEQ_ILI9882N_BOE_070[] = {
	0x66,
	0x08,
};

static unsigned char SEQ_ILI9882N_BOE_071[] = {
	0x67,
	0x12,
};

static unsigned char SEQ_ILI9882N_BOE_072[] = {
	0x68,
	0x10,
};

static unsigned char SEQ_ILI9882N_BOE_073[] = {
	0x69,
	0x16,
};

static unsigned char SEQ_ILI9882N_BOE_074[] = {
	0x6A,
	0x14,
};

static unsigned char SEQ_ILI9882N_BOE_075[] = {
	0x6B,
	0x02,
};

static unsigned char SEQ_ILI9882N_BOE_076[] = {
	0x6C,
	0x22,
};

static unsigned char SEQ_ILI9882N_BOE_077[] = {
	0x6D,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_078[] = {
	0x6E,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_079[] = {
	0x6F,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_080[] = {
	0x70,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_081[] = {
	0x71,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_082[] = {
	0x72,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_083[] = {
	0x73,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_084[] = {
	0x74,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_085[] = {
	0x75,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_086[] = {
	0x76,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_087[] = {
	0x77,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_088[] = {
	0x78,
	0x22,
};

static unsigned char SEQ_ILI9882N_BOE_089[] = {
	0x79,
	0x23,
};

static unsigned char SEQ_ILI9882N_BOE_090[] = {
	0x7A,
	0x02,
};

static unsigned char SEQ_ILI9882N_BOE_091[] = {
	0x7B,
	0x0B,
};

static unsigned char SEQ_ILI9882N_BOE_092[] = {
	0x7C,
	0x09,
};

static unsigned char SEQ_ILI9882N_BOE_093[] = {
	0x7D,
	0x13,
};

static unsigned char SEQ_ILI9882N_BOE_094[] = {
	0x7E,
	0x11,
};

static unsigned char SEQ_ILI9882N_BOE_095[] = {
	0x7F,
	0x17,
};

static unsigned char SEQ_ILI9882N_BOE_096[] = {
	0x80,
	0x15,
};

static unsigned char SEQ_ILI9882N_BOE_097[] = {
	0x81,
	0x02,
};

static unsigned char SEQ_ILI9882N_BOE_098[] = {
	0x82,
	0x22,
};

static unsigned char SEQ_ILI9882N_BOE_099[] = {
	0x83,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_100[] = {
	0x84,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_101[] = {
	0x85,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_102[] = {
	0x86,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_103[] = {
	0x87,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_104[] = {
	0x88,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_105[] = {
	0x89,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_106[] = {
	0x8A,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_107[] = {
	0x8B,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_108[] = {
	0x8C,
	0x07,
};

static unsigned char SEQ_ILI9882N_BOE_109[] = {
	0xB9,
	0x10,
};

static unsigned char SEQ_ILI9882N_BOE_110[] = {
	0xD0,
	0x01,
};

static unsigned char SEQ_ILI9882N_BOE_111[] = {
	0xD1,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_112[] = {
	0xE2,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_113[] = {
	0xE6,
	0x22,
};

static unsigned char SEQ_ILI9882N_BOE_114[] = {
	0xE7,
	0x54,
};

static unsigned char SEQ_ILI9882N_BOE_115[] = {
	0xB0,
	0x33,
};

static unsigned char SEQ_ILI9882N_BOE_116[] = {
	0xB1,
	0x33,
};

static unsigned char SEQ_ILI9882N_BOE_117[] = {
	0xB2,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_118[] = {
	0xE7,
	0x54,
};

static unsigned char SEQ_ILI9882N_BOE_119[] = {
	0xFF,
	0x98, 0x82, 0x02,
};

static unsigned char SEQ_ILI9882N_BOE_120[] = {
	0xF1,
	0x1C,
};

static unsigned char SEQ_ILI9882N_BOE_121[] = {
	0x4B,
	0x5A,
};

static unsigned char SEQ_ILI9882N_BOE_122[] = {
	0x50,
	0xCA,
};

static unsigned char SEQ_ILI9882N_BOE_123[] = {
	0x51,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_124[] = {
	0x06,
	0x8D,
};

static unsigned char SEQ_ILI9882N_BOE_125[] = {
	0x0B,
	0xA0,
};

static unsigned char SEQ_ILI9882N_BOE_126[] = {
	0x0C,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_127[] = {
	0x0D,
	0x14,
};

static unsigned char SEQ_ILI9882N_BOE_128[] = {
	0x0E,
	0xFA,
};

static unsigned char SEQ_ILI9882N_BOE_129[] = {
	0x4E,
	0x11,
};

static unsigned char SEQ_ILI9882N_BOE_130[] = {
	0x40,
	0x4E,
};

static unsigned char SEQ_ILI9882N_BOE_131[] = {
	0xFF,
	0x98, 0x82, 0x03,
};

static unsigned char SEQ_ILI9882N_BOE_132[] = {
	0x80,
	0x36,
};

static unsigned char SEQ_ILI9882N_BOE_133[] = {
	0x83,
	0x60,
};

static unsigned char SEQ_ILI9882N_BOE_134[] = {
	0x84,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_135[] = {
	0x88,
	0xD9,
};

static unsigned char SEQ_ILI9882N_BOE_136[] = {
	0x89,
	0xE1,
};

static unsigned char SEQ_ILI9882N_BOE_137[] = {
	0x8A,
	0xE8,
};

static unsigned char SEQ_ILI9882N_BOE_138[] = {
	0x8B,
	0xF0,
};

static unsigned char SEQ_ILI9882N_BOE_139[] = {
	0xAF,
	0x18,
};

static unsigned char SEQ_ILI9882N_BOE_140[] = {
	0xC6,
	0x14,
};

static unsigned char SEQ_ILI9882N_BOE_141[] = {
	0xFF,
	0x98, 0x82, 0x05,
};

static unsigned char SEQ_ILI9882N_BOE_142[] = {
	0x03,
	0x01,
};

static unsigned char SEQ_ILI9882N_BOE_143[] = {
	0x04,
	0x4E,
};

static unsigned char SEQ_ILI9882N_BOE_144[] = {
	0x63,
	0x9C,
};

static unsigned char SEQ_ILI9882N_BOE_145[] = {
	0x64,
	0x9C,
};

static unsigned char SEQ_ILI9882N_BOE_146[] = {
	0x68,
	0x65,
};

static unsigned char SEQ_ILI9882N_BOE_147[] = {
	0x69,
	0x6B,
};

static unsigned char SEQ_ILI9882N_BOE_148[] = {
	0x6A,
	0xC9,
};

static unsigned char SEQ_ILI9882N_BOE_149[] = {
	0x6B,
	0xBB,
};

static unsigned char SEQ_ILI9882N_BOE_150[] = {
	0x85,
	0x37,
};

static unsigned char SEQ_ILI9882N_BOE_151[] = {
	0xFF,
	0x98, 0x82, 0x06,
};

static unsigned char SEQ_ILI9882N_BOE_152[] = {
	0xD9,
	0x10,
};

static unsigned char SEQ_ILI9882N_BOE_153[] = {
	0xC0,
	0x40,
};

static unsigned char SEQ_ILI9882N_BOE_154[] = {
	0xC1,
	0x16,
};

static unsigned char SEQ_ILI9882N_BOE_155[] = {
	0xD6,
	0x00,
};

static unsigned char SEQ_ILI9882N_BOE_156[] = {
	0xD7,
	0x11,
};

static unsigned char SEQ_ILI9882N_BOE_157[] = {
	0x48,
	0x35,
};

static unsigned char SEQ_ILI9882N_BOE_158[] = {
	0xD5,
	0x20,
};

static unsigned char SEQ_ILI9882N_BOE_159[] = {
	0x08,
	0x21,
};

static unsigned char SEQ_ILI9882N_BOE_160[] = {
	0xFF,
	0x98, 0x82, 0x08,
};

static unsigned char SEQ_ILI9882N_BOE_161[] = {
	0xE0,
	0x00, 0x24, 0x57, 0x7F, 0xB5, 0x54, 0xE5, 0x0C, 0x3A, 0x61,
	0xA5, 0xA0, 0xD4, 0x04, 0x32, 0xAA, 0x62, 0x9B, 0xBD, 0xE9,
	0xFF, 0x0E, 0x3C, 0x74, 0xA3, 0x03, 0xEC,
};

static unsigned char SEQ_ILI9882N_BOE_162[] = {
	0xE1,
	0x00, 0x24, 0x57, 0x7F, 0xB5, 0x54, 0xE5, 0x0C, 0x3A, 0x61,
	0xA5, 0xA0, 0xD4, 0x04, 0x32, 0xAA, 0x62, 0x9B, 0xBD, 0xE9,
	0xFF, 0x0E, 0x3C, 0x74, 0xA3, 0x03, 0xEC,
};

static unsigned char SEQ_ILI9882N_BOE_163[] = {
	0xFF,
	0x98, 0x82, 0x0B,
};

static unsigned char SEQ_ILI9882N_BOE_164[] = {
	0x9A,
	0x44,
};

static unsigned char SEQ_ILI9882N_BOE_165[] = {
	0x9B,
	0x73,
};

static unsigned char SEQ_ILI9882N_BOE_166[] = {
	0x9C,
	0x03,
};

static unsigned char SEQ_ILI9882N_BOE_167[] = {
	0x9D,
	0x03,
};

static unsigned char SEQ_ILI9882N_BOE_168[] = {
	0x9E,
	0x6F,
};

static unsigned char SEQ_ILI9882N_BOE_169[] = {
	0x9F,
	0x6F,
};

static unsigned char SEQ_ILI9882N_BOE_170[] = {
	0xAB,
	0xE0,
};

static unsigned char SEQ_ILI9882N_BOE_171[] = {
	0xFF,
	0x98, 0x82, 0x0E,
};

static unsigned char SEQ_ILI9882N_BOE_172[] = {
	0x11,
	0x10,
};

static unsigned char SEQ_ILI9882N_BOE_173[] = {
	0x13,
	0x10,
};

static unsigned char SEQ_ILI9882N_BOE_174[] = {
	0x00,
	0xA0,
};

static unsigned char SEQ_ILI9882N_BOE_175[] = {
	0xFF,
	0x98, 0x82, 0x00,
};

static unsigned char SEQ_ILI9882N_BOE_176[] = {
	0x51,
	0x0F, 0xFF,
};

static unsigned char SEQ_ILI9882N_BOE_177[] = {
	0x53,
	0x2C,
};

static unsigned char SEQ_ILI9882N_BOE_178[] = {
	0x55,
	0x01,
};

static unsigned char SEQ_ILI9882N_BOE_179[] = {
	0x35,
	0x00,
};

static struct lcd_seq_info LCD_SEQ_INIT_1[] = {
	{SEQ_ILI9882N_BOE_001, ARRAY_SIZE(SEQ_ILI9882N_BOE_001), 0, },
	{SEQ_ILI9882N_BOE_002, ARRAY_SIZE(SEQ_ILI9882N_BOE_002), 0, },
	{SEQ_ILI9882N_BOE_003, ARRAY_SIZE(SEQ_ILI9882N_BOE_003), 0, },
	{SEQ_ILI9882N_BOE_004, ARRAY_SIZE(SEQ_ILI9882N_BOE_004), 0, },
	{SEQ_ILI9882N_BOE_005, ARRAY_SIZE(SEQ_ILI9882N_BOE_005), 0, },
	{SEQ_ILI9882N_BOE_006, ARRAY_SIZE(SEQ_ILI9882N_BOE_006), 0, },
	{SEQ_ILI9882N_BOE_007, ARRAY_SIZE(SEQ_ILI9882N_BOE_007), 0, },
	{SEQ_ILI9882N_BOE_008, ARRAY_SIZE(SEQ_ILI9882N_BOE_008), 0, },
	{SEQ_ILI9882N_BOE_009, ARRAY_SIZE(SEQ_ILI9882N_BOE_009), 0, },
	{SEQ_ILI9882N_BOE_010, ARRAY_SIZE(SEQ_ILI9882N_BOE_010), 0, },
	{SEQ_ILI9882N_BOE_011, ARRAY_SIZE(SEQ_ILI9882N_BOE_011), 0, },
	{SEQ_ILI9882N_BOE_012, ARRAY_SIZE(SEQ_ILI9882N_BOE_012), 0, },
	{SEQ_ILI9882N_BOE_013, ARRAY_SIZE(SEQ_ILI9882N_BOE_013), 0, },
	{SEQ_ILI9882N_BOE_014, ARRAY_SIZE(SEQ_ILI9882N_BOE_014), 0, },
	{SEQ_ILI9882N_BOE_015, ARRAY_SIZE(SEQ_ILI9882N_BOE_015), 0, },
	{SEQ_ILI9882N_BOE_016, ARRAY_SIZE(SEQ_ILI9882N_BOE_016), 0, },
	{SEQ_ILI9882N_BOE_017, ARRAY_SIZE(SEQ_ILI9882N_BOE_017), 0, },
	{SEQ_ILI9882N_BOE_018, ARRAY_SIZE(SEQ_ILI9882N_BOE_018), 0, },
	{SEQ_ILI9882N_BOE_019, ARRAY_SIZE(SEQ_ILI9882N_BOE_019), 0, },
	{SEQ_ILI9882N_BOE_020, ARRAY_SIZE(SEQ_ILI9882N_BOE_020), 0, },
	{SEQ_ILI9882N_BOE_021, ARRAY_SIZE(SEQ_ILI9882N_BOE_021), 0, },
	{SEQ_ILI9882N_BOE_022, ARRAY_SIZE(SEQ_ILI9882N_BOE_022), 0, },
	{SEQ_ILI9882N_BOE_023, ARRAY_SIZE(SEQ_ILI9882N_BOE_023), 0, },
	{SEQ_ILI9882N_BOE_024, ARRAY_SIZE(SEQ_ILI9882N_BOE_024), 0, },
	{SEQ_ILI9882N_BOE_025, ARRAY_SIZE(SEQ_ILI9882N_BOE_025), 0, },
	{SEQ_ILI9882N_BOE_026, ARRAY_SIZE(SEQ_ILI9882N_BOE_026), 0, },
	{SEQ_ILI9882N_BOE_027, ARRAY_SIZE(SEQ_ILI9882N_BOE_027), 0, },
	{SEQ_ILI9882N_BOE_028, ARRAY_SIZE(SEQ_ILI9882N_BOE_028), 0, },
	{SEQ_ILI9882N_BOE_029, ARRAY_SIZE(SEQ_ILI9882N_BOE_029), 0, },
	{SEQ_ILI9882N_BOE_030, ARRAY_SIZE(SEQ_ILI9882N_BOE_030), 0, },
	{SEQ_ILI9882N_BOE_031, ARRAY_SIZE(SEQ_ILI9882N_BOE_031), 0, },
	{SEQ_ILI9882N_BOE_032, ARRAY_SIZE(SEQ_ILI9882N_BOE_032), 0, },
	{SEQ_ILI9882N_BOE_033, ARRAY_SIZE(SEQ_ILI9882N_BOE_033), 0, },
	{SEQ_ILI9882N_BOE_034, ARRAY_SIZE(SEQ_ILI9882N_BOE_034), 0, },
	{SEQ_ILI9882N_BOE_035, ARRAY_SIZE(SEQ_ILI9882N_BOE_035), 0, },
	{SEQ_ILI9882N_BOE_036, ARRAY_SIZE(SEQ_ILI9882N_BOE_036), 0, },
	{SEQ_ILI9882N_BOE_037, ARRAY_SIZE(SEQ_ILI9882N_BOE_037), 0, },
	{SEQ_ILI9882N_BOE_038, ARRAY_SIZE(SEQ_ILI9882N_BOE_038), 0, },
	{SEQ_ILI9882N_BOE_039, ARRAY_SIZE(SEQ_ILI9882N_BOE_039), 0, },
	{SEQ_ILI9882N_BOE_040, ARRAY_SIZE(SEQ_ILI9882N_BOE_040), 0, },
	{SEQ_ILI9882N_BOE_041, ARRAY_SIZE(SEQ_ILI9882N_BOE_041), 0, },
	{SEQ_ILI9882N_BOE_042, ARRAY_SIZE(SEQ_ILI9882N_BOE_042), 0, },
	{SEQ_ILI9882N_BOE_043, ARRAY_SIZE(SEQ_ILI9882N_BOE_043), 0, },
	{SEQ_ILI9882N_BOE_044, ARRAY_SIZE(SEQ_ILI9882N_BOE_044), 0, },
	{SEQ_ILI9882N_BOE_045, ARRAY_SIZE(SEQ_ILI9882N_BOE_045), 0, },
	{SEQ_ILI9882N_BOE_046, ARRAY_SIZE(SEQ_ILI9882N_BOE_046), 0, },
	{SEQ_ILI9882N_BOE_047, ARRAY_SIZE(SEQ_ILI9882N_BOE_047), 0, },
	{SEQ_ILI9882N_BOE_048, ARRAY_SIZE(SEQ_ILI9882N_BOE_048), 0, },
	{SEQ_ILI9882N_BOE_049, ARRAY_SIZE(SEQ_ILI9882N_BOE_049), 0, },
	{SEQ_ILI9882N_BOE_050, ARRAY_SIZE(SEQ_ILI9882N_BOE_050), 0, },
	{SEQ_ILI9882N_BOE_051, ARRAY_SIZE(SEQ_ILI9882N_BOE_051), 0, },
	{SEQ_ILI9882N_BOE_052, ARRAY_SIZE(SEQ_ILI9882N_BOE_052), 0, },
	{SEQ_ILI9882N_BOE_053, ARRAY_SIZE(SEQ_ILI9882N_BOE_053), 0, },
	{SEQ_ILI9882N_BOE_054, ARRAY_SIZE(SEQ_ILI9882N_BOE_054), 0, },
	{SEQ_ILI9882N_BOE_055, ARRAY_SIZE(SEQ_ILI9882N_BOE_055), 0, },
	{SEQ_ILI9882N_BOE_056, ARRAY_SIZE(SEQ_ILI9882N_BOE_056), 0, },
	{SEQ_ILI9882N_BOE_057, ARRAY_SIZE(SEQ_ILI9882N_BOE_057), 0, },
	{SEQ_ILI9882N_BOE_058, ARRAY_SIZE(SEQ_ILI9882N_BOE_058), 0, },
	{SEQ_ILI9882N_BOE_059, ARRAY_SIZE(SEQ_ILI9882N_BOE_059), 0, },
	{SEQ_ILI9882N_BOE_060, ARRAY_SIZE(SEQ_ILI9882N_BOE_060), 0, },
	{SEQ_ILI9882N_BOE_061, ARRAY_SIZE(SEQ_ILI9882N_BOE_061), 0, },
	{SEQ_ILI9882N_BOE_062, ARRAY_SIZE(SEQ_ILI9882N_BOE_062), 0, },
	{SEQ_ILI9882N_BOE_063, ARRAY_SIZE(SEQ_ILI9882N_BOE_063), 0, },
	{SEQ_ILI9882N_BOE_064, ARRAY_SIZE(SEQ_ILI9882N_BOE_064), 0, },
	{SEQ_ILI9882N_BOE_065, ARRAY_SIZE(SEQ_ILI9882N_BOE_065), 0, },
	{SEQ_ILI9882N_BOE_066, ARRAY_SIZE(SEQ_ILI9882N_BOE_066), 0, },
	{SEQ_ILI9882N_BOE_067, ARRAY_SIZE(SEQ_ILI9882N_BOE_067), 0, },
	{SEQ_ILI9882N_BOE_068, ARRAY_SIZE(SEQ_ILI9882N_BOE_068), 0, },
	{SEQ_ILI9882N_BOE_069, ARRAY_SIZE(SEQ_ILI9882N_BOE_069), 0, },
	{SEQ_ILI9882N_BOE_070, ARRAY_SIZE(SEQ_ILI9882N_BOE_070), 0, },
	{SEQ_ILI9882N_BOE_071, ARRAY_SIZE(SEQ_ILI9882N_BOE_071), 0, },
	{SEQ_ILI9882N_BOE_072, ARRAY_SIZE(SEQ_ILI9882N_BOE_072), 0, },
	{SEQ_ILI9882N_BOE_073, ARRAY_SIZE(SEQ_ILI9882N_BOE_073), 0, },
	{SEQ_ILI9882N_BOE_074, ARRAY_SIZE(SEQ_ILI9882N_BOE_074), 0, },
	{SEQ_ILI9882N_BOE_075, ARRAY_SIZE(SEQ_ILI9882N_BOE_075), 0, },
	{SEQ_ILI9882N_BOE_076, ARRAY_SIZE(SEQ_ILI9882N_BOE_076), 0, },
	{SEQ_ILI9882N_BOE_077, ARRAY_SIZE(SEQ_ILI9882N_BOE_077), 0, },
	{SEQ_ILI9882N_BOE_078, ARRAY_SIZE(SEQ_ILI9882N_BOE_078), 0, },
	{SEQ_ILI9882N_BOE_079, ARRAY_SIZE(SEQ_ILI9882N_BOE_079), 0, },
	{SEQ_ILI9882N_BOE_080, ARRAY_SIZE(SEQ_ILI9882N_BOE_080), 0, },
	{SEQ_ILI9882N_BOE_081, ARRAY_SIZE(SEQ_ILI9882N_BOE_081), 0, },
	{SEQ_ILI9882N_BOE_082, ARRAY_SIZE(SEQ_ILI9882N_BOE_082), 0, },
	{SEQ_ILI9882N_BOE_083, ARRAY_SIZE(SEQ_ILI9882N_BOE_083), 0, },
	{SEQ_ILI9882N_BOE_084, ARRAY_SIZE(SEQ_ILI9882N_BOE_084), 0, },
	{SEQ_ILI9882N_BOE_085, ARRAY_SIZE(SEQ_ILI9882N_BOE_085), 0, },
	{SEQ_ILI9882N_BOE_086, ARRAY_SIZE(SEQ_ILI9882N_BOE_086), 0, },
	{SEQ_ILI9882N_BOE_087, ARRAY_SIZE(SEQ_ILI9882N_BOE_087), 0, },
	{SEQ_ILI9882N_BOE_088, ARRAY_SIZE(SEQ_ILI9882N_BOE_088), 0, },
	{SEQ_ILI9882N_BOE_089, ARRAY_SIZE(SEQ_ILI9882N_BOE_089), 0, },
	{SEQ_ILI9882N_BOE_090, ARRAY_SIZE(SEQ_ILI9882N_BOE_090), 0, },
	{SEQ_ILI9882N_BOE_091, ARRAY_SIZE(SEQ_ILI9882N_BOE_091), 0, },
	{SEQ_ILI9882N_BOE_092, ARRAY_SIZE(SEQ_ILI9882N_BOE_092), 0, },
	{SEQ_ILI9882N_BOE_093, ARRAY_SIZE(SEQ_ILI9882N_BOE_093), 0, },
	{SEQ_ILI9882N_BOE_094, ARRAY_SIZE(SEQ_ILI9882N_BOE_094), 0, },
	{SEQ_ILI9882N_BOE_095, ARRAY_SIZE(SEQ_ILI9882N_BOE_095), 0, },
	{SEQ_ILI9882N_BOE_096, ARRAY_SIZE(SEQ_ILI9882N_BOE_096), 0, },
	{SEQ_ILI9882N_BOE_097, ARRAY_SIZE(SEQ_ILI9882N_BOE_097), 0, },
	{SEQ_ILI9882N_BOE_098, ARRAY_SIZE(SEQ_ILI9882N_BOE_098), 0, },
	{SEQ_ILI9882N_BOE_099, ARRAY_SIZE(SEQ_ILI9882N_BOE_099), 0, },
	{SEQ_ILI9882N_BOE_100, ARRAY_SIZE(SEQ_ILI9882N_BOE_100), 0, },
	{SEQ_ILI9882N_BOE_101, ARRAY_SIZE(SEQ_ILI9882N_BOE_101), 0, },
	{SEQ_ILI9882N_BOE_102, ARRAY_SIZE(SEQ_ILI9882N_BOE_102), 0, },
	{SEQ_ILI9882N_BOE_103, ARRAY_SIZE(SEQ_ILI9882N_BOE_103), 0, },
	{SEQ_ILI9882N_BOE_104, ARRAY_SIZE(SEQ_ILI9882N_BOE_104), 0, },
	{SEQ_ILI9882N_BOE_105, ARRAY_SIZE(SEQ_ILI9882N_BOE_105), 0, },
	{SEQ_ILI9882N_BOE_106, ARRAY_SIZE(SEQ_ILI9882N_BOE_106), 0, },
	{SEQ_ILI9882N_BOE_107, ARRAY_SIZE(SEQ_ILI9882N_BOE_107), 0, },
	{SEQ_ILI9882N_BOE_108, ARRAY_SIZE(SEQ_ILI9882N_BOE_108), 0, },
	{SEQ_ILI9882N_BOE_109, ARRAY_SIZE(SEQ_ILI9882N_BOE_109), 0, },
	{SEQ_ILI9882N_BOE_110, ARRAY_SIZE(SEQ_ILI9882N_BOE_110), 0, },
	{SEQ_ILI9882N_BOE_111, ARRAY_SIZE(SEQ_ILI9882N_BOE_111), 0, },
	{SEQ_ILI9882N_BOE_112, ARRAY_SIZE(SEQ_ILI9882N_BOE_112), 0, },
	{SEQ_ILI9882N_BOE_113, ARRAY_SIZE(SEQ_ILI9882N_BOE_113), 0, },
	{SEQ_ILI9882N_BOE_114, ARRAY_SIZE(SEQ_ILI9882N_BOE_114), 0, },
	{SEQ_ILI9882N_BOE_115, ARRAY_SIZE(SEQ_ILI9882N_BOE_115), 0, },
	{SEQ_ILI9882N_BOE_116, ARRAY_SIZE(SEQ_ILI9882N_BOE_116), 0, },
	{SEQ_ILI9882N_BOE_117, ARRAY_SIZE(SEQ_ILI9882N_BOE_117), 0, },
	{SEQ_ILI9882N_BOE_118, ARRAY_SIZE(SEQ_ILI9882N_BOE_118), 0, },
	{SEQ_ILI9882N_BOE_119, ARRAY_SIZE(SEQ_ILI9882N_BOE_119), 0, },
	{SEQ_ILI9882N_BOE_120, ARRAY_SIZE(SEQ_ILI9882N_BOE_120), 0, },
	{SEQ_ILI9882N_BOE_121, ARRAY_SIZE(SEQ_ILI9882N_BOE_121), 0, },
	{SEQ_ILI9882N_BOE_122, ARRAY_SIZE(SEQ_ILI9882N_BOE_122), 0, },
	{SEQ_ILI9882N_BOE_123, ARRAY_SIZE(SEQ_ILI9882N_BOE_123), 0, },
	{SEQ_ILI9882N_BOE_124, ARRAY_SIZE(SEQ_ILI9882N_BOE_124), 0, },
	{SEQ_ILI9882N_BOE_125, ARRAY_SIZE(SEQ_ILI9882N_BOE_125), 0, },
	{SEQ_ILI9882N_BOE_126, ARRAY_SIZE(SEQ_ILI9882N_BOE_126), 0, },
	{SEQ_ILI9882N_BOE_127, ARRAY_SIZE(SEQ_ILI9882N_BOE_127), 0, },
	{SEQ_ILI9882N_BOE_128, ARRAY_SIZE(SEQ_ILI9882N_BOE_128), 0, },
	{SEQ_ILI9882N_BOE_129, ARRAY_SIZE(SEQ_ILI9882N_BOE_129), 0, },
	{SEQ_ILI9882N_BOE_130, ARRAY_SIZE(SEQ_ILI9882N_BOE_130), 0, },
	{SEQ_ILI9882N_BOE_131, ARRAY_SIZE(SEQ_ILI9882N_BOE_131), 0, },
	{SEQ_ILI9882N_BOE_132, ARRAY_SIZE(SEQ_ILI9882N_BOE_132), 0, },
	{SEQ_ILI9882N_BOE_133, ARRAY_SIZE(SEQ_ILI9882N_BOE_133), 0, },
	{SEQ_ILI9882N_BOE_134, ARRAY_SIZE(SEQ_ILI9882N_BOE_134), 0, },
	{SEQ_ILI9882N_BOE_135, ARRAY_SIZE(SEQ_ILI9882N_BOE_135), 0, },
	{SEQ_ILI9882N_BOE_136, ARRAY_SIZE(SEQ_ILI9882N_BOE_136), 0, },
	{SEQ_ILI9882N_BOE_137, ARRAY_SIZE(SEQ_ILI9882N_BOE_137), 0, },
	{SEQ_ILI9882N_BOE_138, ARRAY_SIZE(SEQ_ILI9882N_BOE_138), 0, },
	{SEQ_ILI9882N_BOE_139, ARRAY_SIZE(SEQ_ILI9882N_BOE_139), 0, },
	{SEQ_ILI9882N_BOE_140, ARRAY_SIZE(SEQ_ILI9882N_BOE_140), 0, },
	{SEQ_ILI9882N_BOE_141, ARRAY_SIZE(SEQ_ILI9882N_BOE_141), 0, },
	{SEQ_ILI9882N_BOE_142, ARRAY_SIZE(SEQ_ILI9882N_BOE_142), 0, },
	{SEQ_ILI9882N_BOE_143, ARRAY_SIZE(SEQ_ILI9882N_BOE_143), 0, },
	{SEQ_ILI9882N_BOE_144, ARRAY_SIZE(SEQ_ILI9882N_BOE_144), 0, },
	{SEQ_ILI9882N_BOE_145, ARRAY_SIZE(SEQ_ILI9882N_BOE_145), 0, },
	{SEQ_ILI9882N_BOE_146, ARRAY_SIZE(SEQ_ILI9882N_BOE_146), 0, },
	{SEQ_ILI9882N_BOE_147, ARRAY_SIZE(SEQ_ILI9882N_BOE_147), 0, },
	{SEQ_ILI9882N_BOE_148, ARRAY_SIZE(SEQ_ILI9882N_BOE_148), 0, },
	{SEQ_ILI9882N_BOE_149, ARRAY_SIZE(SEQ_ILI9882N_BOE_149), 0, },
	{SEQ_ILI9882N_BOE_150, ARRAY_SIZE(SEQ_ILI9882N_BOE_150), 0, },
	{SEQ_ILI9882N_BOE_151, ARRAY_SIZE(SEQ_ILI9882N_BOE_151), 0, },
	{SEQ_ILI9882N_BOE_152, ARRAY_SIZE(SEQ_ILI9882N_BOE_152), 0, },
	{SEQ_ILI9882N_BOE_153, ARRAY_SIZE(SEQ_ILI9882N_BOE_153), 0, },
	{SEQ_ILI9882N_BOE_154, ARRAY_SIZE(SEQ_ILI9882N_BOE_154), 0, },
	{SEQ_ILI9882N_BOE_155, ARRAY_SIZE(SEQ_ILI9882N_BOE_155), 0, },
	{SEQ_ILI9882N_BOE_156, ARRAY_SIZE(SEQ_ILI9882N_BOE_156), 0, },
	{SEQ_ILI9882N_BOE_157, ARRAY_SIZE(SEQ_ILI9882N_BOE_157), 0, },
	{SEQ_ILI9882N_BOE_158, ARRAY_SIZE(SEQ_ILI9882N_BOE_158), 0, },
	{SEQ_ILI9882N_BOE_159, ARRAY_SIZE(SEQ_ILI9882N_BOE_159), 0, },
	{SEQ_ILI9882N_BOE_160, ARRAY_SIZE(SEQ_ILI9882N_BOE_160), 0, },
	{SEQ_ILI9882N_BOE_161, ARRAY_SIZE(SEQ_ILI9882N_BOE_161), 0, },
	{SEQ_ILI9882N_BOE_162, ARRAY_SIZE(SEQ_ILI9882N_BOE_162), 0, },
	{SEQ_ILI9882N_BOE_163, ARRAY_SIZE(SEQ_ILI9882N_BOE_163), 0, },
	{SEQ_ILI9882N_BOE_164, ARRAY_SIZE(SEQ_ILI9882N_BOE_164), 0, },
	{SEQ_ILI9882N_BOE_165, ARRAY_SIZE(SEQ_ILI9882N_BOE_165), 0, },
	{SEQ_ILI9882N_BOE_166, ARRAY_SIZE(SEQ_ILI9882N_BOE_166), 0, },
	{SEQ_ILI9882N_BOE_167, ARRAY_SIZE(SEQ_ILI9882N_BOE_167), 0, },
	{SEQ_ILI9882N_BOE_168, ARRAY_SIZE(SEQ_ILI9882N_BOE_168), 0, },
	{SEQ_ILI9882N_BOE_169, ARRAY_SIZE(SEQ_ILI9882N_BOE_169), 0, },
	{SEQ_ILI9882N_BOE_170, ARRAY_SIZE(SEQ_ILI9882N_BOE_170), 0, },
	{SEQ_ILI9882N_BOE_171, ARRAY_SIZE(SEQ_ILI9882N_BOE_171), 0, },
	{SEQ_ILI9882N_BOE_172, ARRAY_SIZE(SEQ_ILI9882N_BOE_172), 0, },
	{SEQ_ILI9882N_BOE_173, ARRAY_SIZE(SEQ_ILI9882N_BOE_173), 0, },
	{SEQ_ILI9882N_BOE_174, ARRAY_SIZE(SEQ_ILI9882N_BOE_174), 0, },
	{SEQ_ILI9882N_BOE_175, ARRAY_SIZE(SEQ_ILI9882N_BOE_175), 0, },
	{SEQ_ILI9882N_BOE_176, ARRAY_SIZE(SEQ_ILI9882N_BOE_176), 0, },
	{SEQ_ILI9882N_BOE_177, ARRAY_SIZE(SEQ_ILI9882N_BOE_177), 0, },
	{SEQ_ILI9882N_BOE_178, ARRAY_SIZE(SEQ_ILI9882N_BOE_178), 0, },
	{SEQ_ILI9882N_BOE_179, ARRAY_SIZE(SEQ_ILI9882N_BOE_179), 0, },
};

static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	1, 1, 2, 3, 3, 4, 5, 5, 6, 7, /* 1: 1 */
	7, 8, 9, 9, 10, 11, 11, 12, 13, 14,
	14, 15, 16, 16, 17, 18, 18, 19, 20, 20,
	21, 22, 22, 23, 24, 24, 25, 26, 27, 27,
	28, 29, 29, 30, 31, 31, 32, 33, 33, 34,
	35, 35, 36, 37, 37, 38, 39, 40, 40, 41,
	42, 42, 43, 44, 44, 45, 46, 46, 47, 48,
	48, 49, 50, 51, 51, 52, 53, 53, 54, 55,
	55, 56, 57, 57, 58, 59, 59, 60, 61, 61,
	62, 63, 64, 64, 65, 66, 66, 67, 68, 68,
	69, 70, 70, 71, 72, 72, 73, 74, 74, 75,
	76, 77, 77, 78, 79, 79, 80, 81, 81, 82,
	83, 83, 84, 85, 85, 86, 87, 88, 88, 89, /* 128: 88 */
	90, 91, 92, 93, 94, 95, 96, 97, 98, 99,
	100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
	110, 111, 112, 113, 114, 115, 116, 117, 118, 118,
	119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
	129, 130, 131, 132, 133, 134, 135, 136, 137, 138,
	139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
	149, 149, 150, 151, 152, 153, 154, 155, 156, 157,
	158, 159, 160, 161, 162, 163, 164, 165, 166, 167,
	168, 169, 170, 171, 172, 173, 174, 175, 176, 177,
	178, 179, 180, 180, 181, 182, 183, 184, 185, 186,
	187, 188, 189, 190, 191, 192, 193, 194, 195, 196,
	197, 198, 199, 200, 201, 202, 203, 204, 205, 206,
	207, 208, 209, 210, 211, 211, 211, 211, 211, 211, /* 255: 211 */
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 254,
};

#endif /* __ILI9882N_BOE_PARAM_H__ */
