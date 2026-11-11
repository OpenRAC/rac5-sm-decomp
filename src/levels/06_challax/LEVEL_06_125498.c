/* LEVEL_06:0x125498 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_001F5AF8[4];
extern unsigned D_001F5B08[4];
extern float D_001F5B18[];
extern int func_125268(int *a, int *b);
extern int func_125798(int a, int b, int c);
extern int func_1DA1C0(float x);

int func_125498(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_125268(&x, &y))
        return 0;
    if (idx < 0)
        k = func_125798(x, y, idx);
    else
        k = idx;
    tab = D_001F5AF8;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_001F5B08;
    return func_1DA1C0(D_001F5B18[k] * (float)tab[x]);
}
