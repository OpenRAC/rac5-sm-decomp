extern int *D_001F60CC;

int func_12E650(int mode, int arg);

int func_12E690(void)
{
    if (func_12E650(0x10, 0)) {
        int *p = D_001F60CC;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
