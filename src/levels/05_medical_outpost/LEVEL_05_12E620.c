extern int *D_001F60CC[];

int func_12E570(int);

int func_12E620(void)
{
    int v = func_12E570(1);

    if (v == 0)
        return D_001F60CC[0][0x2B];
    return -1;
}
