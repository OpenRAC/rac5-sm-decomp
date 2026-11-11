extern int D_001B99D0;
extern int D_001B99CC;

void func_11BC90(void)
{
    int *v;
    int value;

    if (D_001B99D0 != 0) {
        D_001B99D0--;
    }
    v = &D_001B99CC;
    if (D_001B99D0 == 0) {
        value = D_001B99CC - 8;
    } else {
        value = D_001B99CC + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001B99CC > hi) {
            D_001B99CC = hi;
        }
    }
    if (D_001B99CC < 0) {
        D_001B99CC = 0;
    }
}
