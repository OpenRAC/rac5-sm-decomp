/* LEVEL_03:0x1E1048 -- placement copy of LEVEL_01_1D08B0.c: clears two counters and repacks a 16-bit field into a word. */
struct Block_003988F8 {
    unsigned int pad0;
    unsigned int word4;
    unsigned int pad8;
    unsigned int wordc;
    unsigned char byte10;
};
extern struct Block_003988F8 D_003B3A38;
extern unsigned int D_00221EEC;
extern unsigned int D_002B2F64;

void func_1E1048(void)
{
    D_003B3A38.word4 = 0;
    D_003B3A38.byte10 = 0;
    D_003B3A38.wordc = 0;
    D_00221EEC = (D_00221EEC & 0xf800ffffu) | (D_002B2F64 << 16);
}
