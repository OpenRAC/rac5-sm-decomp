extern int D_001ABB48;
extern int D_001ABB44;

void func_11C618(void)
{
    int *v;
    int value;

    if (D_001ABB48 != 0) {
        D_001ABB48--;
    }
    v = &D_001ABB44;
    if (D_001ABB48 == 0) {
        value = D_001ABB44 - 8;
    } else {
        value = D_001ABB44 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001ABB44 > hi) {
            D_001ABB44 = hi;
        }
    }
    if (D_001ABB44 < 0) {
        D_001ABB44 = 0;
    }
}
