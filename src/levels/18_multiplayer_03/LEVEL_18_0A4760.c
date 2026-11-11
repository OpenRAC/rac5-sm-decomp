/* LEVEL_18:0x0A4760 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_001ABBFC;
extern int D_001ABC08;

void func_0A4760(void)
{
    int *v;
    int value;

    if (D_001ABBFC != 0) {
        D_001ABBFC--;
    }
    v = &D_001ABC08;
    if (D_001ABBFC == 0) {
        value = D_001ABC08 - 8;
    } else {
        value = D_001ABC08 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001ABC08 > hi) {
            D_001ABC08 = hi;
        }
    }
    if (D_001ABC08 < 0) {
        D_001ABC08 = 0;
    }
}
