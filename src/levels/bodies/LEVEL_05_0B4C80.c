/* LEVEL_05:0x0B4C80 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_001EBA7C;
extern int D_001EBA88;

void func_0B4C80(void)
{
    int *v;
    int value;

    if (D_001EBA7C != 0) {
        D_001EBA7C--;
    }
    v = &D_001EBA88;
    if (D_001EBA7C == 0) {
        value = D_001EBA88 - 8;
    } else {
        value = D_001EBA88 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001EBA88 > hi) {
            D_001EBA88 = hi;
        }
    }
    if (D_001EBA88 < 0) {
        D_001EBA88 = 0;
    }
}
