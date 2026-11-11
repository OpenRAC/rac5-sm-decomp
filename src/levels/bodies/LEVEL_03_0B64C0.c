/* LEVEL_03:0x0B64C0 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_00214D7C;
extern int D_00214D88;

void func_0B64C0(void)
{
    int *v;
    int value;

    if (D_00214D7C != 0) {
        D_00214D7C--;
    }
    v = &D_00214D88;
    if (D_00214D7C == 0) {
        value = D_00214D88 - 8;
    } else {
        value = D_00214D88 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00214D88 > hi) {
            D_00214D88 = hi;
        }
    }
    if (D_00214D88 < 0) {
        D_00214D88 = 0;
    }
}
