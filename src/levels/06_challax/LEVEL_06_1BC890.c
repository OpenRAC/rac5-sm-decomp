/* LEVEL_06:0x1BC890 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_00385308;
extern unsigned int D_001F7EDC;
extern unsigned int D_00284E64;

void func_1BC890(void)
{
    D_00385308.word4 = 0;
    D_00385308.byte10 = 0;
    D_00385308.wordc = 0;
    D_001F7EDC = (D_001F7EDC & 0xf800ffffu) | (D_00284E64 << 16);
}
