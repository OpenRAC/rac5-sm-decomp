/* LEVEL_10:0x1D4C58 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_003A2000;
extern unsigned int D_00211F9C;
extern unsigned int D_002A14E4;

void func_1D4C58(void)
{
    D_003A2000.word4 = 0;
    D_003A2000.byte10 = 0;
    D_003A2000.wordc = 0;
    D_00211F9C = (D_00211F9C & 0xf800ffffu) | (D_002A14E4 << 16);
}
