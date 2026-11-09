/* LEVEL_01:0x12EE10 -- scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_00206EF8[4];
extern unsigned D_00206F08[4];
extern float D_00206F18[];
extern int func_12EC10(int *a, int *b);
extern int func_12F110(int a, int b, int c);
extern int func_1EB278(float x);

int func_12EE10(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_12EC10(&x, &y))
        return 0;
    if (idx < 0)
        k = func_12F110(x, y, idx);
    else
        k = idx;
    tab = D_00206EF8;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_00206F08;
    return func_1EB278(D_00206F18[k] * (float)tab[x]);
}
