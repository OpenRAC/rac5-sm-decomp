/* LEVEL_06:0x14E580 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001F6034;
extern unsigned int D_00284DB8;

void func_14E580(void)
{
    D_001F6034 = (D_001F6034 & 0xF800FFFFU) | (D_00284DB8 << 16);
}
