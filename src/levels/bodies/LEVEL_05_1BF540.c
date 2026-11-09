/* LEVEL_05:0x1BF540 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_0038FC78;
extern unsigned int D_001F7F94;
extern unsigned int D_00283FA4;

void func_1BF540(void)
{
    D_0038FC78.word4 = 0;
    D_0038FC78.byte10 = 0;
    D_0038FC78.wordc = 0;
    D_001F7F94 = (D_001F7F94 & 0xf800ffffu) | (D_00283FA4 << 16);
}
