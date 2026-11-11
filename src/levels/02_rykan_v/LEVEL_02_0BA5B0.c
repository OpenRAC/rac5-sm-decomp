extern unsigned char *D_00208C2C;

int func_0BA5B0(int index)
{
    unsigned char *start = D_00208C2C + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
