/* LEVEL_09:0x127DA8 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_001F09F8[4];
extern unsigned D_001F0A08[4];
extern float D_001F0A18[];
extern int func_127BA8(int *a, int *b);
extern int func_1280A8(int a, int b, int c);
extern int func_1D50E0(float x);

int func_127DA8(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_127BA8(&x, &y))
        return 0;
    if (idx < 0)
        k = func_1280A8(x, y, idx);
    else
        k = idx;
    tab = D_001F09F8;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_001F0A08;
    return func_1D50E0(D_001F0A18[k] * (float)tab[x]);
}
