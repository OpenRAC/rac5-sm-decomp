extern int *D_0022046C;

int func_13F158(int mode, int arg);

int func_13F198(void)
{
    if (func_13F158(0x10, 0)) {
        int *p = D_0022046C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
