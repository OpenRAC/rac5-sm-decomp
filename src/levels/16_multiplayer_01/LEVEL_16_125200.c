/* LEVEL_16:0x125200 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_001BD4B0;
extern int D_001BD4AC;

void func_125200(void)
{
    int *v;
    int value;

    if (D_001BD4B0 != 0) {
        D_001BD4B0--;
    }
    v = &D_001BD4AC;
    if (D_001BD4B0 == 0) {
        value = D_001BD4AC - 8;
    } else {
        value = D_001BD4AC + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001BD4AC > hi) {
            D_001BD4AC = hi;
        }
    }
    if (D_001BD4AC < 0) {
        D_001BD4AC = 0;
    }
}
