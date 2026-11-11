/* LEVEL_19:0x10C2F0 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_001B5B88[4];
extern unsigned D_001B5B98[4];
extern float D_001B5BA8[];
extern int func_10C0F0(int *a, int *b);
extern int func_10C5F0(int a, int b, int c);
extern int func_197EE0(float x);

int func_10C2F0(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_10C0F0(&x, &y))
        return 0;
    if (idx < 0)
        k = func_10C5F0(x, y, idx);
    else
        k = idx;
    tab = D_001B5B88;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_001B5B98;
    return func_197EE0(D_001B5BA8[k] * (float)tab[x]);
}
