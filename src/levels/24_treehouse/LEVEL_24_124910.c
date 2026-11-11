/* LEVEL_24:0x124910 -- placement copy of LEVEL_01_12EE10.c: scales a table float by an unsigned table entry and forwards the product. */
extern unsigned D_001D7B78[4];
extern unsigned D_001D7B88[4];
extern float D_001D7B98[];
extern int func_124710(int *a, int *b);
extern int func_124C10(int a, int b, int c);
extern int func_1BBF50(float x);

int func_124910(int a, int b, int idx)
{
    int x = a;
    int y = b;
    unsigned *tab;
    int k;

    if (!func_124710(&x, &y))
        return 0;
    if (idx < 0)
        k = func_124C10(x, y, idx);
    else
        k = idx;
    tab = D_001D7B78;
    if (y != 3 && y != 0x16 && (y == 6 || y == 0x17))
        tab = D_001D7B88;
    return func_1BBF50(D_001D7B98[k] * (float)tab[x]);
}
