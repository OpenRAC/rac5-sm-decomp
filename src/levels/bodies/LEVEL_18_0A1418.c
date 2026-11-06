extern unsigned char *D_001A2F34;

int func_0A1418(int index)
{
    unsigned char *start = D_001A2F34 + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
