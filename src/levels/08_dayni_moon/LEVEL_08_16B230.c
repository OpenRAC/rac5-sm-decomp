/* LEVEL_08:0x16B230 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0025063C;
extern unsigned int D_002E72B8;

void func_16B230(void)
{
    D_0025063C = (D_0025063C & 0xF800FFFFU) | (D_002E72B8 << 16);
}
