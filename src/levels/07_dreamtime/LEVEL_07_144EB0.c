/* LEVEL_07:0x144EB0 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0021B48C;
extern unsigned int D_002AD6DC;

void func_144EB0(void)
{
    D_0021B48C = (D_0021B48C & 0xF800FFFFU) | (D_002AD6DC << 16);
}
