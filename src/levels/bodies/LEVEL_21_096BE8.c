/* LEVEL_21:0x096BE8 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_0015137C;
extern int D_00151388;

void func_096BE8(void)
{
    int *v;
    int value;

    if (D_0015137C != 0) {
        D_0015137C--;
    }
    v = &D_00151388;
    if (D_0015137C == 0) {
        value = D_00151388 - 8;
    } else {
        value = D_00151388 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00151388 > hi) {
            D_00151388 = hi;
        }
    }
    if (D_00151388 < 0) {
        D_00151388 = 0;
    }
}
