/* LEVEL_08:0x2103A0 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_003EB488;
extern unsigned int D_00252B14;
extern unsigned int D_002E7364;

void func_2103A0(void)
{
    D_003EB488.word4 = 0;
    D_003EB488.byte10 = 0;
    D_003EB488.wordc = 0;
    D_00252B14 = (D_00252B14 & 0xf800ffffu) | (D_002E7364 << 16);
}
