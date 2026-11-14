/* LEVEL_07:0x15B408 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0021B754;
extern unsigned int D_002AD938;

void func_15B408(void)
{
    D_0021B754 = (D_0021B754 & 0xF800FFFFU) | (D_002AD938 << 16);
}
