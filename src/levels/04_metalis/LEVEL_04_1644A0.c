/* LEVEL_04:0x1644A0 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_00220B7C;
extern unsigned int D_002B2838;

void func_1644A0(void)
{
    D_00220B7C = (D_00220B7C & 0xF800FFFFU) | (D_002B2838 << 16);
}
