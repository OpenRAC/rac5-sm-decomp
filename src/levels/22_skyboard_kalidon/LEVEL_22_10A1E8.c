extern int *D_0016602C;

int func_10A1A8(int mode, int arg);

int func_10A1E8(void)
{
    if (func_10A1A8(0x10, 0)) {
        int *p = D_0016602C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
