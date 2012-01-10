/*
 * drivers/media/video/mt9p004_regs.h
 * 
 * mt9p004_regs.h - mt9p004 sensor register address file
 * 
 */


#ifndef __VIDEO_MT9P004_REGS_H
#define __VIDEO_MT9P004_REGS_H

#define REG_MODEL_ID			0x0000
#define REG_REVISION_NUMBER		0x0002
#define REG_MANUFACTURER_ID		0x0003

#define REG_MODE_SELECT			0x0100
#define REG_IMAGE_ORIENTATION		0x0101
#define REG_SOFTWARE_RESET		0x0103
#define REG_GROUPED_PAR_HOLD		0x0104
#define REG_CCP_DATA_FORMAT		0x0112

#define REG_ANALOG_GAIN_GLOBAL		0x3028
#define REG_ANALOG_GAIN_GREENR		0x302A
#define REG_ANALOG_GAIN_RED		0x302C
#define REG_ANALOG_GAIN_BLUE		0x302E
#define REG_ANALOG_GAIN_GREENB		0x3030
#define REG_DIGITAL_GAIN_GREENR		0x3032
#define REG_DIGITAL_GAIN_RED		0x3034
#define REG_DIGITAL_GAIN_BLUE		0x3036
#define REG_DIGITAL_GAIN_GREENB		0x3038

#define REG_GAIN_GLOBAL		0x3056
#define REG_GAIN_GREEN1		0x3058
#define REG_GAIN_RED		0x305A
#define REG_GAIN_BLUE		0x305C
#define REG_GAIN_GREEN2		0x305E

#define REG_VT_PIX_CLK_DIV		0x0300
#define REG_VT_SYS_CLK_DIV		0x0302
#define REG_PRE_PLL_CLK_DIV		0x0304
#define REG_PLL_MULTIPLIER		0x0306
#define REG_OP_PIX_CLK_DIV		0x0308
#define REG_OP_SYS_CLK_DIV		0x030A

#define REG_X_OUTPUT_SIZE		0x034C
#define REG_Y_OUTPUT_SIZE		0x034E
#define REG_X_ODD_INC			0x0382
#define REG_Y_ODD_INC			0x0386

#define REG_SCALING_MODE		0x0400
#define REG_SCALE_M		0x0404
#define REG_SCALE_N		0x0406

#define REG_Y_ADDR_START		0x3002
#define REG_X_ADDR_START		0x3004
#define REG_Y_ADDR_END			0x3006
#define REG_X_ADDR_END			0x3008

#define REG_FRAME_LEN_LINES		0x300A
#define REG_LINE_LEN_PCK		0x300C
#define REG_FINE_CORRECT		0x3010
#define REG_COARSE_INT_TIME		0x3012
#define REG_FINE_INT_TIME		0x3014

#define REG_ROW_SPEED			0x3016
#define REG_RESET_REGISTER		0x301A
#define REG_PIXEL_ORDER			0x3024
#define REG_READ_MODE			0x3040

#define REG_DATAPATH_STATUS		0x306A
#define REG_DATAPATH_SELECT		0x306E

#define REG_RESERVED_MFR_3064		0x3064
#define REG_TEST_PATTERN		0x3070

#define REG_PARALL_INTERFACE		0x31AE
#endif /* __VIDEO_MT9P004_REGS_H */
