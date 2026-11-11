extern int *D_001B4B5C;

int func_10FB58(int mode, int arg);

int func_10FB98(void)
{
    if (func_10FB58(0x10, 0)) {
        int *p = D_001B4B5C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
