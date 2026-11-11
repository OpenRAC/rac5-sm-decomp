/* LEVEL_24:0x1A0DB0 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_00362648;
extern unsigned int D_001D9E8C;
extern unsigned int D_00263FA4;

void func_1A0DB0(void)
{
    D_00362648.word4 = 0;
    D_00362648.byte10 = 0;
    D_00362648.wordc = 0;
    D_001D9E8C = (D_001D9E8C & 0xf800ffffu) | (D_00263FA4 << 16);
}
