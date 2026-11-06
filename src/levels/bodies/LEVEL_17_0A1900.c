extern unsigned char *D_001950B4;

int func_0A1900(int index)
{
    unsigned char *start = D_001950B4 + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
