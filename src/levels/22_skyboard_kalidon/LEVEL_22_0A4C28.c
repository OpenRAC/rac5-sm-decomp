/* LEVEL_22:0x0A4C28 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_0015BA7C;
extern int D_0015BA88;

void func_0A4C28(void)
{
    int *v;
    int value;

    if (D_0015BA7C != 0) {
        D_0015BA7C--;
    }
    v = &D_0015BA88;
    if (D_0015BA7C == 0) {
        value = D_0015BA88 - 8;
    } else {
        value = D_0015BA88 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_0015BA88 > hi) {
            D_0015BA88 = hi;
        }
    }
    if (D_0015BA88 < 0) {
        D_0015BA88 = 0;
    }
}
