/* LEVEL_01:0x141E78 -- merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0020718C;
extern unsigned int D_00297DDC;

void func_141E78(void)
{
    D_0020718C = (D_0020718C & 0xF800FFFFU) | (D_00297DDC << 16);
}
