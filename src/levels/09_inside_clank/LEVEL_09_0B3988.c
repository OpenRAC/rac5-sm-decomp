/* LEVEL_09:0x0B3988 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_001E64FC;
extern int D_001E6508;

void func_0B3988(void)
{
    int *v;
    int value;

    if (D_001E64FC != 0) {
        D_001E64FC--;
    }
    v = &D_001E6508;
    if (D_001E64FC == 0) {
        value = D_001E6508 - 8;
    } else {
        value = D_001E6508 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001E6508 > hi) {
            D_001E6508 = hi;
        }
    }
    if (D_001E6508 < 0) {
        D_001E6508 = 0;
    }
}
