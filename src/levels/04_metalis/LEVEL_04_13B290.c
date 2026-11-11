/* LEVEL_04:0x13B290 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_00220318[4];
extern unsigned D_00220328[4];
extern float D_00220338[];
extern int func_13B090(int *a, int *b);
extern int func_13B590(int a, int b, int c);
extern int func_204438(float x);

int func_13B290(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_13B090(&x, &y))
        return 0;
    if (idx < 0)
        k = func_13B590(x, y, idx);
    else
        k = idx;
    tab = D_00220318;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_00220328;
    return func_204438(D_00220338[k] * (float)tab[x]);
}
