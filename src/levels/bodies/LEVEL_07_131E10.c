/* LEVEL_07:0x131E10 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_0021B1F8[4];
extern unsigned D_0021B208[4];
extern float D_0021B218[];
extern int func_131C10(int *a, int *b);
extern int func_132110(int a, int b, int c);
extern int func_1FF5F0(float x);

int func_131E10(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_131C10(&x, &y))
        return 0;
    if (idx < 0)
        k = func_132110(x, y, idx);
    else
        k = idx;
    tab = D_0021B1F8;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_0021B208;
    return func_1FF5F0(D_0021B218[k] * (float)tab[x]);
}
