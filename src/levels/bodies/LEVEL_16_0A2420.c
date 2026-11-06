extern unsigned char *D_001A1AB4;

int func_0A2420(int index)
{
    unsigned char *start = D_001A1AB4 + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
