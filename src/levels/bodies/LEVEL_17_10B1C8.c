/* LEVEL_17:0x10B1C8 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_001A8008[4];
extern unsigned D_001A8018[4];
extern float D_001A8028[];
extern int func_10AFC8(int *a, int *b);
extern int func_10B4C8(int a, int b, int c);
extern int func_18A360(float x);

int func_10B1C8(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_10AFC8(&x, &y))
        return 0;
    if (idx < 0)
        k = func_10B4C8(x, y, idx);
    else
        k = idx;
    tab = D_001A8008;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_001A8018;
    return func_18A360(D_001A8028[k] * (float)tab[x]);
}
