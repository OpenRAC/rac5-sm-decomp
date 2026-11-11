extern unsigned char *D_001C4C2C;

int func_0AD518(int index)
{
    unsigned char *start = D_001C4C2C + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
