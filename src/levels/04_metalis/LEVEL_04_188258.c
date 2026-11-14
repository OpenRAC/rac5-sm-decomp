/* LEVEL_04:0x188258 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_002212C4;
extern unsigned int D_002B25DC;

void func_188258(void)
{
    D_002212C4 = (D_002212C4 & 0xF800FFFFU) | (D_002B25DC << 16);
}
