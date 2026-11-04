extern int *D_001F5C4C;

int func_1293A8(int mode, int arg);

int func_1293E8(void)
{
    if (func_1293A8(0x10, 0)) {
        int *p = D_001F5C4C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
