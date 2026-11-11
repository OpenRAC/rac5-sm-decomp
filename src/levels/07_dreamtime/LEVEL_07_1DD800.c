/* LEVEL_07:0x1DD800 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_003AE2E8;
extern unsigned int D_0021DCFC;
extern unsigned int D_002AD9E4;

void func_1DD800(void)
{
    D_003AE2E8.word4 = 0;
    D_003AE2E8.byte10 = 0;
    D_003AE2E8.wordc = 0;
    D_0021DCFC = (D_0021DCFC & 0xf800ffffu) | (D_002AD9E4 << 16);
}
