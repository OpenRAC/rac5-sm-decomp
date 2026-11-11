/* LEVEL_09:0x1B77B0 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_003800E0;
extern unsigned int D_001F2CA4;
extern unsigned int D_0027F864;

void func_1B77B0(void)
{
    D_003800E0.word4 = 0;
    D_003800E0.byte10 = 0;
    D_003800E0.wordc = 0;
    D_001F2CA4 = (D_001F2CA4 & 0xf800ffffu) | (D_0027F864 << 16);
}
