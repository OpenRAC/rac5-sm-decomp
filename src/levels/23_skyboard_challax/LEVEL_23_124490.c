extern int *D_001DA44C;

int func_124450(int mode, int arg);

int func_124490(void)
{
    if (func_124450(0x10, 0)) {
        int *p = D_001DA44C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
