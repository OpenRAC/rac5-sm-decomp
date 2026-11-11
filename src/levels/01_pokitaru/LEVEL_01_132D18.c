extern int *D_0020704C;

int func_132CD8(int mode, int arg);

int func_132D18(void)
{
    if (func_132CD8(0x10, 0)) {
        int *p = D_0020704C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
