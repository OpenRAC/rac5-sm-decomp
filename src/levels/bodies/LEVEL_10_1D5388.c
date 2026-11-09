/* LEVEL_10:0x1D5388 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_002A11F4;
extern int D_00212074;
extern int D_00211FA8[];
extern char D_003A2028[];
extern char D_003A2168[];
extern int func_06D638(int a);

void func_1D5388(void)
{
    unsigned int i;
    int v;

    v = (D_00212074 & 0xF800FFFF) | (D_002A11F4 << 16);
    D_00212074 = v;
    for (i = 0; i < 3; i++) {
        D_00211FA8[4 + i * 0x11] = func_06D638(D_00212074);
    }
    D_003A2028[0x138] = 0;
    D_003A2168[0xD0] = 0;
}
