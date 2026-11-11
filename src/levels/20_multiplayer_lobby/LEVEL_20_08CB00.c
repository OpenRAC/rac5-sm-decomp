extern unsigned char *D_00104194;

int func_08CB00(int index)
{
    unsigned char *start = D_00104194 + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
