/* LEVEL_01:0x1ABDE0 -- merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_00208D00;
extern unsigned int D_00208D04;
extern int D_00208CFC;
extern int D_00297E40;
extern int func_12A068(unsigned int value);

void func_1ABDE0(void)
{
    D_00208D00 = (D_00208D00 & 0xF800FFFF) | (D_00297E40 << 16);
    D_00208D04 = (D_00208D04 & 0xF800FFFF) | (D_00297E40 << 16);
    D_00208CFC = func_12A068(0x9D12A611u);
}
