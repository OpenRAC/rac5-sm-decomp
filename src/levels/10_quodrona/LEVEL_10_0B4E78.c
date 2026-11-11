extern unsigned char *D_001FCFAC;

int func_0B4E78(int index)
{
    unsigned char *start = D_001FCFAC + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
