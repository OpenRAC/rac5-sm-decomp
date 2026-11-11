extern int *D_001B5FDC;

int func_10E808(int mode, int arg);

int func_10E848(void)
{
    if (func_10E808(0x10, 0)) {
        int *p = D_001B5FDC;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
