/* LEVEL_19:0x125B68 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_001BE628;
extern int D_001BE624;

void func_125B68(void)
{
    int *v;
    int value;

    if (D_001BE628 != 0) {
        D_001BE628--;
    }
    v = &D_001BE624;
    if (D_001BE628 == 0) {
        value = D_001BE624 - 8;
    } else {
        value = D_001BE624 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001BE624 > hi) {
            D_001BE624 = hi;
        }
    }
    if (D_001BE624 < 0) {
        D_001BE624 = 0;
    }
}
