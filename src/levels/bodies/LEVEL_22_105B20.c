/* LEVEL_22:0x105B20 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_00165ED8[4];
extern unsigned D_00165EE8[4];
extern float D_00165EF8[];
extern int func_105800(int *a, int *b);
extern int func_105EC0(int a, int b, int c);
extern int func_14A630(float x);

int func_105B20(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_105800(&x, &y))
        return 0;
    if (idx < 0)
        k = func_105EC0(x, y, idx);
    else
        k = idx;
    tab = D_00165ED8;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_00165EE8;
    return func_14A630(D_00165EF8[k] * (float)tab[x]);
}
