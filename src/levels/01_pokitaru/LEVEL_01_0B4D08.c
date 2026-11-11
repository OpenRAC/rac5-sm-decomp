/* LEVEL_01:0x0B4D08 -- placement copy of LEVEL_02_0B8B30.c. */
extern int D_001FC364;
extern int D_001FC368;

void func_0B4D08(void)
{
    int *v;
    int value;

    if (D_001FC364 != 0) {
        D_001FC364--;
    }
    v = &D_001FC368;
    if (D_001FC364 == 0) {
        value = D_001FC368 - 8;
    } else {
        value = D_001FC368 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001FC368 > hi) {
            D_001FC368 = hi;
        }
    }
    if (D_001FC368 < 0) {
        D_001FC368 = 0;
    }
}
