/* LEVEL_16:0x10BC50 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_001B4A08[4];
extern unsigned D_001B4A18[4];
extern float D_001B4A28[];
extern int func_10BA50(int *a, int *b);
extern int func_10BF50(int a, int b, int c);
extern int func_196D18(float x);

int func_10BC50(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_10BA50(&x, &y))
        return 0;
    if (idx < 0)
        k = func_10BF50(x, y, idx);
    else
        k = idx;
    tab = D_001B4A08;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_001B4A18;
    return func_196D18(D_001B4A28[k] * (float)tab[x]);
}
