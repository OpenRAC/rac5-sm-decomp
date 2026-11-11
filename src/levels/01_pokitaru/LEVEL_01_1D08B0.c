/* LEVEL_01:0x1D08B0 -- clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_003988F8;
extern unsigned int D_00209024;
extern unsigned int D_002980E4;

void func_1D08B0(void)
{
    D_003988F8.word4 = 0;
    D_003988F8.byte10 = 0;
    D_003988F8.wordc = 0;
    D_00209024 = (D_00209024 & 0xf800ffffu) | (D_002980E4 << 16);
}
