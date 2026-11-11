/* LEVEL_24:0x0AFF68 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_001CD37C;
extern int D_001CD388;

void func_0AFF68(void)
{
    int *v;
    int value;

    if (D_001CD37C != 0) {
        D_001CD37C--;
    }
    v = &D_001CD388;
    if (D_001CD37C == 0) {
        value = D_001CD388 - 8;
    } else {
        value = D_001CD388 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001CD388 > hi) {
            D_001CD388 = hi;
        }
    }
    if (D_001CD388 < 0) {
        D_001CD388 = 0;
    }
}
