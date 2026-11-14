/* LEVEL_05:0x152718 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001F64B4;
extern unsigned int D_00283EF8;

void func_152718(void)
{
    D_001F64B4 = (D_001F64B4 & 0xF800FFFFU) | (D_00283EF8 << 16);
}
