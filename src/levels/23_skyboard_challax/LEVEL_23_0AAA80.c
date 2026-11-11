extern unsigned char *D_001C73AC;

int func_0AAA80(int index)
{
    unsigned char *start = D_001C73AC + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
