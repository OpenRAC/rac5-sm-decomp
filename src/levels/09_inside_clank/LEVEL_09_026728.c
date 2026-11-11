extern char *D_001DDDAC;

int func_026728(void)
{
    int index;
    char *base = D_001DDDAC + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
