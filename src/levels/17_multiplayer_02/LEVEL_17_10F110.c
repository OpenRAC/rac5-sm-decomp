extern int *D_001A815C;

int func_10F0D0(int mode, int arg);

int func_10F110(void)
{
    if (func_10F0D0(0x10, 0)) {
        int *p = D_001A815C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
