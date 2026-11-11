/* LEVEL_20:0x0F7300 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_0011FB50;
extern int D_0011FB4C;

void func_0F7300(void)
{
    int *v;
    int value;

    if (D_0011FB50 != 0) {
        D_0011FB50--;
    }
    v = &D_0011FB4C;
    if (D_0011FB50 == 0) {
        value = D_0011FB4C - 8;
    } else {
        value = D_0011FB4C + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_0011FB4C > hi) {
            D_0011FB4C = hi;
        }
    }
    if (D_0011FB4C < 0) {
        D_0011FB4C = 0;
    }
}
