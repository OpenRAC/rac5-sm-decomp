/* LEVEL_20:0x0E0F58 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_001170C8[4];
extern unsigned D_001170D8[4];
extern float D_001170E8[];
extern int func_0E0D58(int *a, int *b);
extern int func_0E1258(int a, int b, int c);
extern int func_0F9448(float x);

int func_0E0F58(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_0E0D58(&x, &y))
        return 0;
    if (idx < 0)
        k = func_0E1258(x, y, idx);
    else
        k = idx;
    tab = D_001170C8;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_001170D8;
    return func_0F9448(D_001170E8[k] * (float)tab[x]);
}
