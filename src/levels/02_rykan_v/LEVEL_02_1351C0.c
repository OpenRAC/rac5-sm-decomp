/* LEVEL_02:0x1351C0 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_0021BEB8[4];
extern unsigned D_0021BEC8[4];
extern float D_0021BED8[];
extern int func_134FC0(int *a, int *b);
extern int func_1354C0(int a, int b, int c);
extern int func_1FFF10(float x);

int func_1351C0(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_134FC0(&x, &y))
        return 0;
    if (idx < 0)
        k = func_1354C0(x, y, idx);
    else
        k = idx;
    tab = D_0021BEB8;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_0021BEC8;
    return func_1FFF10(D_0021BED8[k] * (float)tab[x]);
}
