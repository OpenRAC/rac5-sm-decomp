/* LEVEL_16:0x174EC0 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_001BE2F8;
extern unsigned int D_001BE2FC;
extern int D_001BE2F4;
extern int D_0024E2C0;
extern int func_106E98(unsigned int value);

void func_174EC0(void)
{
    D_001BE2F8 = (D_001BE2F8 & 0xF800FFFF) | (D_0024E2C0 << 16);
    D_001BE2FC = (D_001BE2FC & 0xF800FFFF) | (D_0024E2C0 << 16);
    D_001BE2F4 = func_106E98(0x9D12A611u);
}
