/* LEVEL_08:0x140348 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_0024FDB8[4];
extern unsigned D_0024FDC8[4];
extern float D_0024FDD8[];
extern int func_140148(int *a, int *b);
extern int func_140648(int a, int b, int c);
extern int func_233E00(float x);

int func_140348(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_140148(&x, &y))
        return 0;
    if (idx < 0)
        k = func_140648(x, y, idx);
    else
        k = idx;
    tab = D_0024FDB8;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_0024FDC8;
    return func_233E00(D_0024FDD8[k] * (float)tab[x]);
}
