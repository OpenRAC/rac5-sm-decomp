/* LEVEL_09:0x1B7EE0 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_0027F574;
extern int D_001F2D7C;
extern int D_001F2CB0[];
extern char D_00380108[];
extern char D_00380248[];
extern int func_06B020(int a);

void func_1B7EE0(void)
{
    unsigned int i;
    int v;

    v = (D_001F2D7C & 0xF800FFFF) | (D_0027F574 << 16);
    D_001F2D7C = v;
    for (i = 0; i < 3; i++) {
        D_001F2CB0[4 + i * 0x11] = func_06B020(D_001F2D7C);
    }
    D_00380108[0x138] = 0;
    D_00380248[0xD0] = 0;
}
