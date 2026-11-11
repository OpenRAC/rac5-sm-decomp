/* LEVEL_04:0x1E7898 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_003B3F10;
extern unsigned int D_0022290C;
extern unsigned int D_002B28E4;

void func_1E7898(void)
{
    D_003B3F10.word4 = 0;
    D_003B3F10.byte10 = 0;
    D_003B3F10.wordc = 0;
    D_0022290C = (D_0022290C & 0xf800ffffu) | (D_002B28E4 << 16);
}
