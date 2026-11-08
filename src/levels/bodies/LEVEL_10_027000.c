extern char *D_001FCFAC;

int func_027000(void)
{
    int index;
    char *base = D_001FCFAC + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
