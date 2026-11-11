extern int D_001B8550;
extern int D_001B854C;

void func_11CCA0(void)
{
    int *v;
    int value;

    if (D_001B8550 != 0) {
        D_001B8550--;
    }
    v = &D_001B854C;
    if (D_001B8550 == 0) {
        value = D_001B854C - 8;
    } else {
        value = D_001B854C + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001B854C > hi) {
            D_001B854C = hi;
        }
    }
    if (D_001B854C < 0) {
        D_001B854C = 0;
    }
}
