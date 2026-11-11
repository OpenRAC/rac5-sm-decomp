extern unsigned char *D_001F3FAC;

int func_0B3CA0(int index)
{
    unsigned char *start = D_001F3FAC + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
