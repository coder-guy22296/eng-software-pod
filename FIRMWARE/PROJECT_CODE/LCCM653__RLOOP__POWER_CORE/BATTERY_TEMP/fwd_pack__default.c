//Forward pack default configuration

#include "../power_core.h"
//https://docs.google.com/spreadsheets/d/1buZjyQRxRDtQHxGwqnknch265qBxqOecV305UWF6D5U/edit#gid=0

/** Format:
u8SerialNumber[8U];
u8ChannelIndex;
u8Resolution;
u16UserIndex;
*/
const Luint8 u8FwdPack__Default[] = {

/*Serial: 3506*/
0x28, 0xFF, 0x70, 0xF7, 0xA0, 0x16, 0x03, 0x80, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x08, 0xF4, 0xA0, 0x16, 0x05, 0x86, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x0C, 0xA1, 0xA0, 0x16, 0x03, 0x1D, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x9C, 0xBA, 0xA0, 0x16, 0x03, 0x06, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x5C, 0xB8, 0xA0, 0x16, 0x04, 0xA0, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x3C, 0x8B, 0xA0, 0x16, 0x05, 0x2F, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0xCA, 0x84, 0xA0, 0x16, 0x04, 0xD1, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xFA, 0x8D, 0xA0, 0x16, 0x05, 0x98, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xC6, 0xC8, 0xA0, 0x16, 0x04, 0x02, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x36, 0xD9, 0xA0, 0x16, 0x05, 0x4D, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xAE, 0x7F, 0xA0, 0x16, 0x03, 0xB9, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xEE, 0xD0, 0xA0, 0x16, 0x03, 0x63, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x3D, 0xBC, 0xA0, 0x16, 0x03, 0xF1, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x63, 0x6B, 0x82, 0x16, 0x04, 0x19, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x17, 0xA8, 0xA0, 0x16, 0x05, 0x5F, 0x00, 9, C_PWRCORE__6P_LOC08_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*Serial:, 0xDBB9*/
0x28, 0xFF, 0x60, 0x87, 0xA0, 0x16, 0x04, 0xD7, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x90, 0xB8, 0xA0, 0x16, 0x03, 0x20, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xF0, 0x8A, 0xA0, 0x16, 0x04, 0xFD, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x78, 0xDA, 0xA0, 0x16, 0x05, 0x8E, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xDC, 0x66, 0xA0, 0x16, 0x04, 0x7F, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x89, 0x9F, 0xA0, 0x16, 0x03, 0x59, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x39, 0xC4, 0xA0, 0x16, 0x04, 0xD9, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x95, 0x9D, 0xA0, 0x16, 0x03, 0x03, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x5D, 0x84, 0xA0, 0x16, 0x05, 0x69, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xE3, 0xF4, 0xA0, 0x16, 0x05, 0x2C, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x33, 0xC8, 0xA0, 0x16, 0x03, 0xF5, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x73, 0x8B, 0xA0, 0x16, 0x05, 0xA9, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xA7, 0xBA, 0xA0, 0x16, 0x03, 0xF2, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x37, 0xD7, 0xA0, 0x16, 0x05, 0x95, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xAF, 0x67, 0xA0, 0x16, 0x04, 0xD3, 0x00, 9, C_PWRCORE__6P_LOC06_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial:, 0x77EB*/
0x28, 0xFF, 0x80, 0xB9, 0xA0, 0x16, 0x03, 0xD3, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x90, 0xE8, 0xA0, 0x16, 0x03, 0xF8, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x86, 0xBB, 0xA0, 0x16, 0x04, 0xCB, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x7E, 0xCA, 0xA0, 0x16, 0x03, 0xF7, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xB9, 0x8E, 0xA0, 0x16, 0x05, 0xB7, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xAD, 0xA5, 0xA0, 0x16, 0x03, 0xED, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xDD, 0xE1, 0xA0, 0x16, 0x05, 0xB3, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x83, 0x8D, 0xA0, 0x16, 0x05, 0x06, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xC3, 0x6B, 0xA0, 0x16, 0x04, 0xF1, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x4B, 0xCB, 0xA0, 0x16, 0x04, 0xAD, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xAB, 0x64, 0xA0, 0x16, 0x04, 0x44, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x1B, 0xC6, 0xA0, 0x16, 0x04, 0xA5, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x07, 0xB9, 0xA0, 0x16, 0x04, 0xCA, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x0F, 0x89, 0xA0, 0x16, 0x05, 0xE2, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_NEGBUS5_MASK,
0x28, 0xFF, 0xAF, 0x8A, 0xA0, 0x16, 0x05, 0x59, 0x00, 9, C_PWRCORE__6P_LOC16_MASK, C_PWRCORE__6P_CELL2_MASK,

/*Serial:, 0x2A3C, 0x*/
0x28, 0xFF, 0x00, 0x87, 0xA0, 0x16, 0x03, 0x45, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x48, 0xBD, 0xA0, 0x16, 0x04, 0x42, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x58, 0xBA, 0xA0, 0x16, 0x04, 0xB8, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x54, 0xE6, 0xA0, 0x16, 0x03, 0xD0, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xF2, 0xD4, 0xA0, 0x16, 0x05, 0xED, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xF6, 0xDA, 0xA0, 0x16, 0x05, 0xE7, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x6E, 0xF5, 0xA0, 0x16, 0x05, 0x84, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xF9, 0xD6, 0xA0, 0x16, 0x05, 0x9A, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x05, 0xBC, 0xA0, 0x16, 0x03, 0x4B, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x95, 0xA8, 0xA0, 0x16, 0x05, 0x17, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xC3, 0xDF, 0xA0, 0x16, 0x05, 0x30, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xA3, 0xD4, 0xA0, 0x16, 0x05, 0xB5, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x93, 0xA9, 0xA0, 0x16, 0x03, 0xD9, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x3B, 0x84, 0xA0, 0x16, 0x04, 0xBA, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xCF, 0x96, 0xA0, 0x16, 0x04, 0x3C, 0x00, 9, C_PWRCORE__6P_LOC10_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial:, 0xE357*/
0x28, 0xFF, 0x90, 0xFB, 0xA0, 0x16, 0x03, 0x48, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xF4, 0x90, 0xA0, 0x16, 0x04, 0xC1, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x3C, 0x85, 0xA0, 0x16, 0x04, 0x64, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x3A, 0x96, 0xA0, 0x16, 0x04, 0x48, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xFA, 0xB8, 0xA0, 0x16, 0x03, 0x8C, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x56, 0xF4, 0xA0, 0x16, 0x05, 0xB1, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x36, 0xDD, 0xA0, 0x16, 0x05, 0x43, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x76, 0xA1, 0xA0, 0x16, 0x03, 0xCD, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x76, 0xF1, 0xA0, 0x16, 0x05, 0xC8, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x76, 0xC7, 0xA0, 0x16, 0x03, 0x54, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x76, 0x97, 0xA0, 0x16, 0x04, 0x0F, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x01, 0xF0, 0xA0, 0x16, 0x05, 0x7B, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x29, 0xB7, 0xA0, 0x16, 0x04, 0x85, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x25, 0xBF, 0xA0, 0x16, 0x04, 0xB8, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xCF, 0xD7, 0xA0, 0x16, 0x05, 0x0D, 0x00, 9, C_PWRCORE__6P_LOC04_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial:, 0x0E1C*/
0x28, 0xFF, 0x00, 0x8E, 0xA0, 0x16, 0x05, 0x0B, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x30, 0xF1, 0xA0, 0x16, 0x05, 0xBD, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x18, 0xB5, 0xA0, 0x16, 0x04, 0xCB, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x14, 0xBB, 0xA0, 0x16, 0x04, 0xFF, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x96, 0xBE, 0xA0, 0x16, 0x03, 0xB5, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xB6, 0xF5, 0xA0, 0x16, 0x03, 0x39, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x59, 0xD0, 0xA0, 0x16, 0x03, 0x7D, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xD5, 0x8B, 0xA0, 0x16, 0x05, 0x06, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xFD, 0xE6, 0xA0, 0x16, 0x03, 0x10, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x13, 0xEF, 0xA0, 0x16, 0x05, 0x26, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x8B, 0xE6, 0xA0, 0x16, 0x03, 0xE1, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x4B, 0xCA, 0xA0, 0x16, 0x04, 0x22, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xBB, 0x83, 0xA0, 0x16, 0x04, 0xF7, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x57, 0x96, 0xA0, 0x16, 0x03, 0x36, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0xEF, 0xA4, 0xA0, 0x16, 0x03, 0x08, 0x00, 9, C_PWRCORE__6P_LOC07_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*Serial:, 0x98F6*/
0x28, 0xFF, 0x90, 0xB9, 0xA0, 0x16, 0x04, 0x2C, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x04, 0x86, 0xA0, 0x16, 0x04, 0x56, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x14, 0xDB, 0xA0, 0x16, 0x05, 0x31, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x8C, 0x6D, 0xA0, 0x16, 0x04, 0x7E, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x1C, 0x85, 0xA0, 0x16, 0x05, 0xC2, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xDC, 0xCB, 0xA0, 0x16, 0x04, 0x4B, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xEE, 0xA9, 0xA0, 0x16, 0x05, 0x85, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x81, 0xE1, 0xA0, 0x16, 0x05, 0x07, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xA1, 0xE5, 0xA0, 0x16, 0x05, 0xF1, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xB9, 0x93, 0xA0, 0x16, 0x04, 0x4C, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x75, 0xB6, 0xA0, 0x16, 0x04, 0xBE, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x3D, 0xC8, 0xA0, 0x16, 0x04, 0xD4, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x43, 0x65, 0xA0, 0x16, 0x04, 0x2F, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x67, 0xAE, 0xA0, 0x16, 0x03, 0xE6, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x17, 0xB6, 0xA0, 0x16, 0x04, 0x2C, 0x00, 9, C_PWRCORE__6P_LOC02_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial:, 0x15FD
0x28, 0xFF, 0xD0, 0x85, 0xA0, 0x16, 0x04, 0x9F, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xF0, 0x9F, 0xA0, 0x16, 0x03, 0xC7, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xCC, 0xB6, 0xA0, 0x16, 0x04, 0x02, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x1C, 0x82, 0xA0, 0x16, 0x05, 0x44, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x66, 0x89, 0xA0, 0x16, 0x05, 0x00, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xE6, 0xC6, 0xA0, 0x16, 0x04, 0xEF, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x61, 0xF0, 0xA0, 0x16, 0x05, 0x6A, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xB1, 0xCB, 0xA0, 0x16, 0x04, 0xB6, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x19, 0xA9, 0xA0, 0x16, 0x05, 0x72, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xD5, 0x95, 0xA0, 0x16, 0x04, 0x75, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x43, 0xA2, 0xA0, 0x16, 0x03, 0x13, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x07, 0xC4, 0xA0, 0x16, 0x04, 0xFF, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x97, 0xBC, 0xA0, 0x16, 0x04, 0xFC, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x2F, 0xE7, 0xA0, 0x16, 0x03, 0x42, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x6F, 0xE3, 0xA0, 0x16, 0x05, 0x78, 0x00, 9, C_PWRCORE__6P_LOC??_MASK, C_PWRCORE__6P_NEGBUS5_MASK,*/

/*, 0xSerial:, 0xC838*/
0x28, 0xFF, 0x08, 0x7D, 0xA0, 0x16, 0x04, 0x92, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xE8, 0x74, 0xA0, 0x16, 0x03, 0x58, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xE4, 0xDC, 0xA0, 0x16, 0x05, 0x11, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x5C, 0x6A, 0xA0, 0x16, 0x04, 0xA6, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x12, 0xBA, 0xA0, 0x16, 0x03, 0x6F, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xAA, 0x8B, 0xA0, 0x16, 0x05, 0x04, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xAA, 0xF7, 0xA0, 0x16, 0x03, 0x63, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xD1, 0xEF, 0xA0, 0x16, 0x05, 0x87, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x65, 0x8D, 0xA0, 0x16, 0x05, 0x40, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xC3, 0x69, 0xA0, 0x16, 0x04, 0xF6, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xAB, 0xF1, 0xA0, 0x16, 0x03, 0xA7, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x47, 0xB6, 0xA0, 0x16, 0x04, 0xB9, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xB7, 0xF1, 0xA0, 0x16, 0x05, 0x27, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x8F, 0xF4, 0xA0, 0x16, 0x05, 0x1C, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_NEGBUS5_MASK,
0x28, 0xFF, 0x4F, 0xBC, 0xA0, 0x16, 0x03, 0x1F, 0x00, 9, C_PWRCORE__6P_LOC03_MASK, C_PWRCORE__6P_CELL0_MASK,

/*, 0xSerial:, 0xF2D2*/
0x28, 0xFF, 0xB0, 0xE5, 0xA0, 0x16, 0x05, 0x40, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x98, 0xA0, 0xA0, 0x16, 0x03, 0x3A, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x42, 0x8D, 0xA0, 0x16, 0x05, 0xE9, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x62, 0xA2, 0xA0, 0x16, 0x03, 0x26, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x6A, 0xE8, 0xA0, 0x16, 0x03, 0xE3, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xD6, 0x93, 0xA0, 0x16, 0x03, 0xB1, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xF6, 0x89, 0xA0, 0x16, 0x05, 0xB7, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xB9, 0x67, 0xA0, 0x16, 0x04, 0x33, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xC3, 0xBD, 0xA0, 0x16, 0x03, 0x7A, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xD3, 0x6B, 0xA0, 0x16, 0x04, 0x8D, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x8B, 0x89, 0xA0, 0x16, 0x03, 0xEB, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x2B, 0x87, 0xA0, 0x16, 0x05, 0x10, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xD7, 0xCC, 0xA0, 0x16, 0x03, 0x3E, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x77, 0x87, 0xA0, 0x16, 0x04, 0xFA, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x2F, 0x93, 0xA0, 0x16, 0x04, 0x67, 0x00, 9, C_PWRCORE__6P_LOC05_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial:, 0x7D27*/
0x28, 0xFF, 0x40, 0x67, 0xA0, 0x16, 0x04, 0x66, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x60, 0x9D, 0xA0, 0x16, 0x03, 0x77, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x54, 0xDC, 0xA0, 0x16, 0x05, 0x5E, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x4C, 0xBA, 0xA0, 0x16, 0x03, 0x58, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x5C, 0xF1, 0xA0, 0x16, 0x05, 0x8D, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xC2, 0x9B, 0xA0, 0x16, 0x03, 0xCE, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x22, 0xE5, 0xA0, 0x16, 0x05, 0x74, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x86, 0xDC, 0xA0, 0x16, 0x05, 0x83, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x66, 0x94, 0xA0, 0x16, 0x04, 0xFB, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x9E, 0xB7, 0xA0, 0x16, 0x04, 0x9B, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xA9, 0x87, 0xA0, 0x16, 0x04, 0x06, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xDD, 0xCB, 0xA0, 0x16, 0x04, 0x86, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x13, 0xCC, 0xA0, 0x16, 0x04, 0x80, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0xE7, 0xB4, 0xA0, 0x16, 0x04, 0x8D, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_NEGBUS5_MASK,
0x28, 0xFF, 0x0F, 0xCF, 0xA0, 0x16, 0x05, 0x0B, 0x00, 9, C_PWRCORE__6P_LOC01_MASK, C_PWRCORE__6P_CELL2_MASK,

/*Serial:, 0xA58A*/
0x28, 0xFF, 0xC0, 0xF4, 0xA0, 0x16, 0x05, 0x9A, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x0C, 0xB6, 0xA0, 0x16, 0x04, 0x20, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x2C, 0x7D, 0xA0, 0x16, 0x04, 0x75, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x4A, 0xB8, 0xA0, 0x16, 0x03, 0xC3, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x3E, 0x9E, 0xA0, 0x16, 0x03, 0xC8, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x69, 0x8C, 0xA0, 0x16, 0x04, 0xB0, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x59, 0xB6, 0xA0, 0x16, 0x04, 0x67, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x39, 0xF0, 0xA0, 0x16, 0x05, 0xC1, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xD5, 0xE7, 0xA0, 0x16, 0x03, 0x59, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xF5, 0x83, 0xA0, 0x16, 0x04, 0xBC, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x83, 0xD1, 0xA0, 0x16, 0x03, 0x11, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x6B, 0xF8, 0xA0, 0x16, 0x03, 0x16, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x27, 0x8B, 0xA0, 0x16, 0x05, 0x23, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xB7, 0xDE, 0xA0, 0x16, 0x03, 0x10, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xAF, 0x89, 0xA0, 0x16, 0x04, 0x8F, 0x00, 9, C_PWRCORE__6P_LOC12_MASK, C_PWRCORE__6P_NEGBUS5_MASK,


/*Serial:, 0xAC2C*/
0x28, 0xFF, 0x80, 0xD1, 0xA0, 0x16, 0x03, 0x5F, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x14, 0x93, 0xA0, 0x16, 0x04, 0x93, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x42, 0xF2, 0xA0, 0x16, 0x05, 0xDB, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x32, 0x8B, 0xA0, 0x16, 0x05, 0x8D, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x72, 0xCA, 0xA0, 0x16, 0x04, 0x55, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xDA, 0xF6, 0xA0, 0x16, 0x03, 0x81, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x56, 0xE0, 0xA0, 0x16, 0x03, 0x5A, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x36, 0xE7, 0xA0, 0x16, 0x03, 0xCD, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xAE, 0xC4, 0xA0, 0x16, 0x04, 0x3F, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x41, 0xDB, 0xA0, 0x16, 0x05, 0x76, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x99, 0x6E, 0xA0, 0x16, 0x04, 0x58, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x0D, 0xF0, 0xA0, 0x16, 0x05, 0x5A, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xDB, 0xE1, 0xA0, 0x16, 0x05, 0x2F, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x8F, 0xA3, 0xA0, 0x16, 0x03, 0x9F, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0x6F, 0x64, 0xA0, 0x16, 0x04, 0x79, 0x00, 9, C_PWRCORE__6P_LOC15_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial:, 0x2072*/
0x28, 0xFF, 0x20, 0xB8, 0xA0, 0x16, 0x04, 0xEC, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xB0, 0x8C, 0xA0, 0x16, 0x05, 0x43, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x18, 0xC0, 0xA0, 0x16, 0x04, 0xE2, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x14, 0xE7, 0xA0, 0x16, 0x03, 0xB6, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x22, 0x8B, 0xA0, 0x16, 0x05, 0xF1, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xAE, 0x65, 0xA0, 0x16, 0x04, 0x19, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x89, 0xE2, 0xA0, 0x16, 0x05, 0xB1, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xE9, 0x95, 0xA0, 0x16, 0x03, 0x53, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x19, 0x6A, 0xA0, 0x16, 0x04, 0x9D, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xD5, 0xD2, 0xA0, 0x16, 0x05, 0x4D, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xCB, 0x64, 0xA0, 0x16, 0x04, 0x55, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x9B, 0xDB, 0xA0, 0x16, 0x05, 0x95, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x07, 0xE1, 0xA0, 0x16, 0x05, 0x50, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xA7, 0x97, 0xA0, 0x16, 0x03, 0x1F, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xBF, 0xCB, 0xA0, 0x16, 0x04, 0x14, 0x00, 9, C_PWRCORE__6P_LOC17_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial:, 0x24AF*/
0x28, 0xFF, 0x90, 0xC8, 0xA0, 0x16, 0x03, 0x88, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x08, 0xBE, 0xA0, 0x16, 0x04, 0x23, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x42, 0xCE, 0xA0, 0x16, 0x03, 0x5C, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0x8A, 0xF8, 0xA0, 0x16, 0x03, 0x01, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xE6, 0xCA, 0xA0, 0x16, 0x03, 0x7E, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xCE, 0x88, 0xA0, 0x16, 0x04, 0xDC, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x51, 0xB8, 0xA0, 0x16, 0x03, 0xCF, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x69, 0x94, 0xA0, 0x16, 0x04, 0x94, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xF9, 0xF0, 0xA0, 0x16, 0x05, 0xE3, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0xBD, 0x9C, 0xA0, 0x16, 0x04, 0xC9, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xE3, 0x65, 0xA0, 0x16, 0x04, 0x1C, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x8B, 0xEB, 0xA0, 0x16, 0x03, 0x7C, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x6B, 0x8E, 0xA0, 0x16, 0x05, 0x6A, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xFB, 0xDA, 0xA0, 0x16, 0x05, 0x0B, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0xFB, 0x8B, 0xA0, 0x16, 0x05, 0x5C, 0x00, 9, C_PWRCORE__6P_LOC09_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*Serial:, 0x9D01*/
0x28, 0xFF, 0x18, 0x7E, 0xA0, 0x16, 0x04, 0x66, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xCC, 0xB8, 0xA0, 0x16, 0x04, 0x17, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x2A, 0x95, 0xA0, 0x16, 0x03, 0x3F, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x21, 0xAC, 0xA0, 0x16, 0x03, 0x94, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xD1, 0xD2, 0xA0, 0x16, 0x05, 0x52, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xA9, 0xD8, 0xA0, 0x16, 0x05, 0x1A, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xB9, 0xBB, 0xA0, 0x16, 0x03, 0xA3, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x79, 0x87, 0xA0, 0x16, 0x04, 0x58, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x3D, 0x64, 0xA0, 0x16, 0x04, 0x6F, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x63, 0xF5, 0xA0, 0x16, 0x05, 0x68, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x1B, 0xBA, 0xA0, 0x16, 0x03, 0x9C, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x87, 0x96, 0xA0, 0x16, 0x04, 0xEB, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xA7, 0xE1, 0xA0, 0x16, 0x05, 0x63, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xCF, 0xE5, 0xA0, 0x16, 0x05, 0x42, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x9F, 0x88, 0xA0, 0x16, 0x05, 0xDA, 0x00, 9, C_PWRCORE__6P_LOC14_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial:, 0xDC45*/
0x28, 0xFF, 0xF8, 0xDF, 0xA0, 0x16, 0x05, 0xC4, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x9C, 0x97, 0xA0, 0x16, 0x04, 0x68, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0x22, 0x84, 0xA0, 0x16, 0x05, 0x6B, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xB6, 0xD7, 0xA0, 0x16, 0x05, 0x93, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x5E, 0xB3, 0xA0, 0x16, 0x04, 0xB7, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xA1, 0xE4, 0xA0, 0x16, 0x05, 0x7E, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xC5, 0xC9, 0xA0, 0x16, 0x04, 0xC3, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x55, 0xDD, 0xA0, 0x16, 0x05, 0x1C, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xAD, 0xB8, 0xA0, 0x16, 0x03, 0x48, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x8B, 0x93, 0xA0, 0x16, 0x04, 0x4B, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x8B, 0x73, 0xA0, 0x16, 0x04, 0x02, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xE7, 0x84, 0xA0, 0x16, 0x04, 0xC5, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xF7, 0xA4, 0xA0, 0x16, 0x03, 0x4A, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xDF, 0x8A, 0xA0, 0x16, 0x05, 0x34, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xBF, 0x87, 0xA0, 0x16, 0x04, 0xE6, 0x00, 9, C_PWRCORE__6P_LOC00_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial:, 0x6144*/
0x28, 0xFF, 0xC0, 0x8C, 0xA0, 0x16, 0x05, 0x2E, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0x98, 0xD1, 0xA0, 0x16, 0x05, 0xC0, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0x74, 0x99, 0xA0, 0x16, 0x04, 0x99, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xCC, 0xF1, 0xA0, 0x16, 0x05, 0x3A, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xDC, 0xB8, 0xA0, 0x16, 0x03, 0xE8, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0x82, 0xB7, 0xA0, 0x16, 0x04, 0xC6, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0x32, 0x87, 0xA0, 0x16, 0x05, 0x9F, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0x9A, 0xF0, 0xA0, 0x16, 0x05, 0xBC, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0x5A, 0xAA, 0xA0, 0x16, 0x05, 0x5D, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0x96, 0xEE, 0xA0, 0x16, 0x05, 0xB0, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x31, 0x6A, 0xA0, 0x16, 0x04, 0x5B, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0x29, 0xED, 0xA0, 0x16, 0x03, 0xC5, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0xB9, 0xA3, 0xA0, 0x16, 0x03, 0x87, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xEB, 0xB5, 0xA0, 0x16, 0x04, 0x23, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0x9B, 0xEF, 0xA0, 0x16, 0x05, 0xD3, 0x00, 9, C_PWRCORE__6P_LOC13_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/*, 0xSerial:, 0x76D3*/
0x28, 0xFF, 0x78, 0xD9, 0xA0, 0x16, 0x05, 0x06, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_POSBUS0_MASK,
0x28, 0xFF, 0xC4, 0xBC, 0xA0, 0x16, 0x03, 0xA4, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_POSBUS1_MASK,
0x28, 0xFF, 0xA2, 0xF4, 0xA0, 0x16, 0x05, 0x08, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_CELL1_MASK,
0x28, 0xFF, 0xEA, 0xA2, 0xA0, 0x16, 0x03, 0xD3, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_POSBUS2_MASK,
0x28, 0xFF, 0xE6, 0xBB, 0xA0, 0x16, 0x03, 0x59, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_POSBUS3_MASK,
0x28, 0xFF, 0xFE, 0xCA, 0xA0, 0x16, 0x04, 0xBF, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_POSBUS4_MASK,
0x28, 0xFF, 0xD1, 0x70, 0xA0, 0x16, 0x03, 0x21, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_POSBUS5_MASK,
0x28, 0xFF, 0xB1, 0x93, 0xA0, 0x16, 0x04, 0x72, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_NEGBUS0_MASK,
0x28, 0xFF, 0xA5, 0x67, 0xA0, 0x16, 0x04, 0x6E, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_CELL2_MASK,
0x28, 0xFF, 0xE5, 0xB4, 0xA0, 0x16, 0x04, 0x0E, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_NEGBUS1_MASK,
0x28, 0xFF, 0x8D, 0x90, 0xA0, 0x16, 0x04, 0x5F, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_CELL0_MASK,
0x28, 0xFF, 0xFD, 0x93, 0xA0, 0x16, 0x04, 0xBA, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_NEGBUS2_MASK,
0x28, 0xFF, 0xA7, 0xD9, 0xA0, 0x16, 0x05, 0x37, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_NEGBUS3_MASK,
0x28, 0xFF, 0x77, 0xA1, 0xA0, 0x16, 0x03, 0x00, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_NEGBUS4_MASK,
0x28, 0xFF, 0xFF, 0x97, 0xA0, 0x16, 0x04, 0x37, 0x00, 9, C_PWRCORE__6P_LOC11_MASK, C_PWRCORE__6P_NEGBUS5_MASK,

/* BMS Board #1 Temp Sensor */
0x28, 0xFF, 0xC0, 0x81, 0xA0, 0x16, 0x04, 0xED, 0x00, 9, C_PWRCORE__BMS_TEMP_MASK, C_PWRCORE__BMS_BOARD0_MASK,

/* BMS Board #2 Temp Sensor */
0x28, 0xFF, 0x28, 0x9E, 0xA0, 0x16, 0x03, 0x28, 0x00, 9, C_PWRCORE__BMS_TEMP_MASK, C_PWRCORE__BMS_BOARD1_MASK,

/* BMS Board #3 Temp Sensor */
0x28, 0xFF, 0x7D, 0x72, 0xA0, 0x16, 0x04, 0xB7, 0x00, 9, C_PWRCORE__BMS_TEMP_MASK, C_PWRCORE__BMS_BOARD2_MASK,

};
