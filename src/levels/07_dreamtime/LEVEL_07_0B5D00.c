extern unsigned char *D_002082AC;

int func_0B5D00(int index)
{
    unsigned char *start = D_002082AC + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
