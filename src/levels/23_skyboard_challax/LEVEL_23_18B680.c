/* LEVEL_23:0x18B680 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_001DC118;
extern unsigned int D_001DC11C;
extern int D_001DC114;
extern int D_00269280;
extern int func_11AEE0(unsigned int value);

void func_18B680(void)
{
    D_001DC118 = (D_001DC118 & 0xF800FFFF) | (D_00269280 << 16);
    D_001DC11C = (D_001DC11C & 0xF800FFFF) | (D_00269280 << 16);
    D_001DC114 = func_11AEE0(0x9D12A611u);
}
