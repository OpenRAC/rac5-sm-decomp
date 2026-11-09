/* LEVEL_24:0x1A14E0 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_00263CB4;
extern int D_001D9F64;
extern int D_001D9E98[];
extern char D_00362670[];
extern char D_003627B0[];
extern int func_067A60(int a);

void func_1A14E0(void)
{
    unsigned int i;
    int v;

    v = (D_001D9F64 & 0xF800FFFF) | (D_00263CB4 << 16);
    D_001D9F64 = v;
    for (i = 0; i < 3; i++) {
        D_001D9E98[4 + i * 0x11] = func_067A60(D_001D9F64);
    }
    D_00362670[0x138] = 0;
    D_003627B0[0xD0] = 0;
}
