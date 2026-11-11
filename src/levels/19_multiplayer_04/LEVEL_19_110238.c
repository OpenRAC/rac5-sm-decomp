extern int *D_001B5CDC;

int func_1101F8(int mode, int arg);

int func_110238(void)
{
    if (func_1101F8(0x10, 0)) {
        int *p = D_001B5CDC;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
