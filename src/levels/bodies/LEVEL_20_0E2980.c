extern int *D_0011721C;

int func_0E2940(int mode, int arg);

int func_0E2980(void)
{
    if (func_0E2940(0x10, 0)) {
        int *p = D_0011721C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
