extern int *D_0021F6CC;

int func_1310A0(int mode, int arg);

int func_1310E0(void)
{
    if (func_1310A0(0x10, 0)) {
        int *p = D_0021F6CC;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
