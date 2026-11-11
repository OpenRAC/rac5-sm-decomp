/* LEVEL_23:0x0AD4A0 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_001CFAFC;
extern int D_001CFB08;

void func_0AD4A0(void)
{
    int *v;
    int value;

    if (D_001CFAFC != 0) {
        D_001CFAFC--;
    }
    v = &D_001CFB08;
    if (D_001CFAFC == 0) {
        value = D_001CFB08 - 8;
    } else {
        value = D_001CFB08 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001CFB08 > hi) {
            D_001CFB08 = hi;
        }
    }
    if (D_001CFB08 < 0) {
        D_001CFB08 = 0;
    }
}
