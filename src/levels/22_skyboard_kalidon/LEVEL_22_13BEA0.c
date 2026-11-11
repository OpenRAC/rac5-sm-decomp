/* LEVEL_22:0x13BEA0 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_002E8310;
extern unsigned int D_00166944;
extern unsigned int D_001EDCA4;

void func_13BEA0(void)
{
    D_002E8310.word4 = 0;
    D_002E8310.byte10 = 0;
    D_002E8310.wordc = 0;
    D_00166944 = (D_00166944 & 0xf800ffffu) | (D_001EDCA4 << 16);
}
