/* LEVEL_15:0x0F0200 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_0015B858[4];
extern unsigned D_0015B868[4];
extern float D_0015B878[];
extern int func_0F0000(int *a, int *b);
extern int func_0F0500(int a, int b, int c);
extern int func_13FF70(float x);

int func_0F0200(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_0F0000(&x, &y))
        return 0;
    if (idx < 0)
        k = func_0F0500(x, y, idx);
    else
        k = idx;
    tab = D_0015B858;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_0015B868;
    return func_13FF70(D_0015B878[k] * (float)tab[x]);
}
