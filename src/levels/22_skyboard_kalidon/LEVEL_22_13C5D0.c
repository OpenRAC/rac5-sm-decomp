/* LEVEL_22:0x13C5D0 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_001ED9B4;
extern int D_00166A1C;
extern int D_00166950[];
extern char D_002E8338[];
extern char D_002E8478[];
extern int func_063738(int a);

void func_13C5D0(void)
{
    unsigned int i;
    int v;

    v = (D_00166A1C & 0xF800FFFF) | (D_001ED9B4 << 16);
    D_00166A1C = v;
    for (i = 0; i < 3; i++) {
        D_00166950[4 + i * 0x11] = func_063738(D_00166A1C);
    }
    D_002E8338[0x138] = 0;
    D_002E8478[0xD0] = 0;
}
