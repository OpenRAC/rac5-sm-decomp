/* LEVEL_18:0x1242B8 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_001BE930;
extern int D_001BE92C;

void func_1242B8(void)
{
    int *v;
    int value;

    if (D_001BE930 != 0) {
        D_001BE930--;
    }
    v = &D_001BE92C;
    if (D_001BE930 == 0) {
        value = D_001BE92C - 8;
    } else {
        value = D_001BE92C + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001BE92C > hi) {
            D_001BE92C = hi;
        }
    }
    if (D_001BE92C < 0) {
        D_001BE92C = 0;
    }
}
