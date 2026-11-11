/* LEVEL_23:0x11FDC8 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_001DA2F8[4];
extern unsigned D_001DA308[4];
extern float D_001DA318[];
extern int func_11FA88(int *a, int *b);
extern int func_120168(int a, int b);
extern int func_1BE6B8(float x);

int func_11FDC8(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_11FA88(&x, &y))
        return 0;
    if (idx < 0)
        k = func_120168(x, y);
    else
        k = idx;
    tab = D_001DA2F8;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_001DA308;
    return func_1BE6B8(D_001DA318[k] * (float)tab[x]);
}
