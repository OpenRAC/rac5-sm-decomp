extern int *D_0024FF0C;

int func_144210(int mode, int arg);

int func_144250(void)
{
    if (func_144210(0x10, 0)) {
        int *p = D_0024FF0C;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
