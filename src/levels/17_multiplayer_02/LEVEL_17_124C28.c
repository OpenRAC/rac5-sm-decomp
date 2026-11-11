/* LEVEL_17:0x124C28 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_001B0AA8;
extern int D_001B0AA4;

void func_124C28(void)
{
    int *v;
    int value;

    if (D_001B0AA8 != 0) {
        D_001B0AA8--;
    }
    v = &D_001B0AA4;
    if (D_001B0AA8 == 0) {
        value = D_001B0AA4 - 8;
    } else {
        value = D_001B0AA4 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001B0AA4 > hi) {
            D_001B0AA4 = hi;
        }
    }
    if (D_001B0AA4 < 0) {
        D_001B0AA4 = 0;
    }
}
