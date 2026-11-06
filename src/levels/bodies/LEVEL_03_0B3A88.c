extern unsigned char *D_0020C62C;

int func_0B3A88(int index)
{
    unsigned char *start = D_0020C62C + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
