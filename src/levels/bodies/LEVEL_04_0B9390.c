extern unsigned char *D_0020D12C;

int func_0B9390(int index)
{
    unsigned char *start = D_0020D12C + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
