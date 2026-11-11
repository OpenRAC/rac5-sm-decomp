extern int *D_001B5CDC[];

int func_110118(int);

int func_1101C8(void)
{
    int v = func_110118(1);

    if (v == 0)
        return D_001B5CDC[0][0x2B];
    return -1;
}
