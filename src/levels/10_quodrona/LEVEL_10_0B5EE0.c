extern int D_00205364;
extern int D_00205368;

void func_0B5EE0(void)
{
    int *v;
    int value;

    if (D_00205364 != 0) {
        D_00205364--;
    }
    v = &D_00205368;
    if (D_00205364 == 0) {
        value = D_00205368 - 8;
    } else {
        value = D_00205368 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00205368 > hi) {
            D_00205368 = hi;
        }
    }
    if (D_00205368 < 0) {
        D_00205368 = 0;
    }
}
