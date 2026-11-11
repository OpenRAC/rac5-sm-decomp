/* LEVEL_02:0x1E5548 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_003B0850;
extern unsigned int D_0021DF74;
extern unsigned int D_002AF5E4;

void func_1E5548(void)
{
    D_003B0850.word4 = 0;
    D_003B0850.byte10 = 0;
    D_003B0850.wordc = 0;
    D_0021DF74 = (D_0021DF74 & 0xf800ffffu) | (D_002AF5E4 << 16);
}
