extern int *D_0015B9AC;

int func_0F1BA0(int mode, int arg);

int func_0F1BE0(void)
{
    if (func_0F1BA0(0x10, 0)) {
        int *p = D_0015B9AC;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
