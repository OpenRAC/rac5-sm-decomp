/* LEVEL_03:0x1567F0 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0021FADC;
extern unsigned int D_002B2EB8;

void func_1567F0(void)
{
    D_0021FADC = (D_0021FADC & 0xF800FFFFU) | (D_002B2EB8 << 16);
}
