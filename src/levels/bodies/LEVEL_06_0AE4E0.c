extern unsigned char *D_001E2EAC;

int func_0AE4E0(int index)
{
    unsigned char *start = D_001E2EAC + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
