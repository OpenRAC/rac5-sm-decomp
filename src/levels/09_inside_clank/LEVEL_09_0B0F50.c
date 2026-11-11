extern unsigned char *D_001DDDAC;

int func_0B0F50(int index)
{
    unsigned char *start = D_001DDDAC + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
