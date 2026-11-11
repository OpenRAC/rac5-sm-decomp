/* LEVEL_10:0x1B9188 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_00211B50;
extern unsigned int D_00211B54;
extern int D_00211B4C;
extern int D_002A1240;
extern int func_127EC8(unsigned int value);

void func_1B9188(void)
{
    D_00211B50 = (D_00211B50 & 0xF800FFFF) | (D_002A1240 << 16);
    D_00211B54 = (D_00211B54 & 0xF800FFFF) | (D_002A1240 << 16);
    D_00211B4C = func_127EC8(0x9D12A611u);
}
