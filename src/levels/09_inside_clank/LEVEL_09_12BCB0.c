extern int *D_001F0B4C;

int func_12BC70(int mode, int arg);

int func_12BCB0(void)
{
    if (func_12BC70(0x10, 0)) {
        int *p = D_001F0B4C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
