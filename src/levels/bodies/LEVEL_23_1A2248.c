/* LEVEL_23:0x1A2248 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_003666F8;
extern unsigned int D_001DC2A4;
extern unsigned int D_00269524;

void func_1A2248(void)
{
    D_003666F8.word4 = 0;
    D_003666F8.byte10 = 0;
    D_003666F8.wordc = 0;
    D_001DC2A4 = (D_001DC2A4 & 0xf800ffffu) | (D_00269524 << 16);
}
