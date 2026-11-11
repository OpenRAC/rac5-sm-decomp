extern char *D_001E2EAC;

int func_025BD0(void)
{
    int index;
    char *base = D_001E2EAC + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
