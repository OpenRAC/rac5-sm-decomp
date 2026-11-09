/* LEVEL_10:0x12CC70 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_0020FB58[4];
extern unsigned D_0020FB68[4];
extern float D_0020FB78[];
extern int func_12CA70(int *a, int *b);
extern int func_12CF70(int a, int b, int c);
extern int func_1F42D0(float x);

int func_12CC70(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_12CA70(&x, &y))
        return 0;
    if (idx < 0)
        k = func_12CF70(x, y, idx);
    else
        k = idx;
    tab = D_0020FB58;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_0020FB68;
    return func_1F42D0(D_0020FB78[k] * (float)tab[x]);
}
