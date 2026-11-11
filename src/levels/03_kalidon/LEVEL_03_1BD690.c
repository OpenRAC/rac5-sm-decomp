/* LEVEL_03:0x1BD690 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_00221CA0;
extern unsigned int D_00221CA4;
extern int D_00221C9C;
extern int D_002B2CC0;
extern int func_1282D0(unsigned int value);

void func_1BD690(void)
{
    D_00221CA0 = (D_00221CA0 & 0xF800FFFF) | (D_002B2CC0 << 16);
    D_00221CA4 = (D_00221CA4 & 0xF800FFFF) | (D_002B2CC0 << 16);
    D_00221C9C = func_1282D0(0x9D12A611u);
}
