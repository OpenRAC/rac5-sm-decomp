extern unsigned char *D_0023CB2C;

int func_0BEA78(int index)
{
    unsigned char *start = D_0023CB2C + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
