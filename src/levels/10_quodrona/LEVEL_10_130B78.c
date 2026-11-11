extern int *D_0020FCAC;

int func_130B38(int mode, int arg);

int func_130B78(void)
{
    if (func_130B38(0x10, 0)) {
        int *p = D_0020FCAC;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
