extern int *D_0021B34C;

int func_135CD8(int mode, int arg);

int func_135D18(void)
{
    if (func_135CD8(0x10, 0)) {
        int *p = D_0021B34C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
