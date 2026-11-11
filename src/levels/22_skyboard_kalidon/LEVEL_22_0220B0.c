extern char *D_0015332C;

int func_0220B0(void)
{
    int index;
    char *base = D_0015332C + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
