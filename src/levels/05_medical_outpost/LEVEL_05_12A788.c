/* LEVEL_05:0x12A788 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_001F5F78[4];
extern unsigned D_001F5F88[4];
extern float D_001F5F98[];
extern int func_12A588(int *a, int *b);
extern int func_12AA88(int a, int b, int c);
extern int func_1DA670(float x);

int func_12A788(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_12A588(&x, &y))
        return 0;
    if (idx < 0)
        k = func_12AA88(x, y, idx);
    else
        k = idx;
    tab = D_001F5F78;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_001F5F88;
    return func_1DA670(D_001F5F98[k] * (float)tab[x]);
}
