/* LEVEL_04:0x1B7DB8 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_002223F8;
extern unsigned int D_002223FC;
extern int D_002223F4;
extern int D_002B2640;
extern int func_1364E8(unsigned int value);

void func_1B7DB8(void)
{
    D_002223F8 = (D_002223F8 & 0xF800FFFF) | (D_002B2640 << 16);
    D_002223FC = (D_002223FC & 0xF800FFFF) | (D_002B2640 << 16);
    D_002223F4 = func_1364E8(0x9D12A611u);
}
