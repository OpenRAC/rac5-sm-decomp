extern unsigned char *D_00148C2C;

int func_0942E0(int index)
{
    unsigned char *start = D_00148C2C + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
