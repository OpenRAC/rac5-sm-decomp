/* LEVEL_01:0x0B66D8 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_001FC6FC;
extern int D_001FC708;

void func_0B66D8(void)
{
    int *v;
    int value;

    if (D_001FC6FC != 0) {
        D_001FC6FC--;
    }
    v = &D_001FC708;
    if (D_001FC6FC == 0) {
        value = D_001FC708 - 8;
    } else {
        value = D_001FC708 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001FC708 > hi) {
            D_001FC708 = hi;
        }
    }
    if (D_001FC708 < 0) {
        D_001FC708 = 0;
    }
}
