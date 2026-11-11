/* LEVEL_20:0x08FD68 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_0010CE5C;
extern int D_0010CE68;

void func_08FD68(void)
{
    int *v;
    int value;

    if (D_0010CE5C != 0) {
        D_0010CE5C--;
    }
    v = &D_0010CE68;
    if (D_0010CE5C == 0) {
        value = D_0010CE68 - 8;
    } else {
        value = D_0010CE68 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_0010CE68 > hi) {
            D_0010CE68 = hi;
        }
    }
    if (D_0010CE68 < 0) {
        D_0010CE68 = 0;
    }
}
