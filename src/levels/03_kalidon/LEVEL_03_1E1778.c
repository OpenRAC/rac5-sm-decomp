/* LEVEL_03:0x1E1778 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_002B2C74;
extern int D_00221FC4;
extern int D_00221EF8[];
extern char D_003B3A60[];
extern char D_003B3BA0[];
extern int func_06CDA8(int a);

void func_1E1778(void)
{
    unsigned int i;
    int v;

    v = (D_00221FC4 & 0xF800FFFF) | (D_002B2C74 << 16);
    D_00221FC4 = v;
    for (i = 0; i < 3; i++) {
        D_00221EF8[4 + i * 0x11] = func_06CDA8(D_00221FC4);
    }
    D_003B3A60[0x138] = 0;
    D_003B3BA0[0xD0] = 0;
}
