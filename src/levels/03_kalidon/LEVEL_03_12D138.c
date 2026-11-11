/* LEVEL_03:0x12D138 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_0021F578[4];
extern unsigned D_0021F588[4];
extern float D_0021F598[];
extern int func_12CE78(int *a, int *b);
extern int func_12D4D8(int a, int b, int c);
extern int func_203908(float x);

int func_12D138(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_12CE78(&x, &y))
        return 0;
    if (idx < 0)
        k = func_12D4D8(x, y, idx);
    else
        k = idx;
    tab = D_0021F578;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_0021F588;
    return func_203908(D_0021F598[k] * (float)tab[x]);
}
