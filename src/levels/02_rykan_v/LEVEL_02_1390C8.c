extern int *D_0021C00C;

int func_139088(int mode, int arg);

int func_1390C8(void)
{
    if (func_139088(0x10, 0)) {
        int *p = D_0021C00C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
