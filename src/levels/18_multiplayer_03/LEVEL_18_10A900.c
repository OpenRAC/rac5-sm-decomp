/* LEVEL_18:0x10A900 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_001B5E88[4];
extern unsigned D_001B5E98[4];
extern float D_001B5EA8[];
extern int func_10A700(int *a, int *b);
extern int func_10AC00(int a, int b, int c);
extern int func_1981B8(float x);

int func_10A900(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_10A700(&x, &y))
        return 0;
    if (idx < 0)
        k = func_10AC00(x, y, idx);
    else
        k = idx;
    tab = D_001B5E88;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_001B5E98;
    return func_1981B8(D_001B5EA8[k] * (float)tab[x]);
}
