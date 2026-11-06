extern int D_00245224;
extern int D_00245228;

void func_0BFAE0(void)
{
    int *v;
    int value;

    if (D_00245224 != 0) {
        D_00245224--;
    }
    v = &D_00245228;
    if (D_00245224 == 0) {
        value = D_00245228 - 8;
    } else {
        value = D_00245228 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00245228 > hi) {
            D_00245228 = hi;
        }
    }
    if (D_00245228 < 0) {
        D_00245228 = 0;
    }
}
