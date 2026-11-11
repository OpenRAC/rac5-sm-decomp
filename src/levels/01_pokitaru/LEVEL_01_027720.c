extern char *D_001F3FAC;

int func_027720(void)
{
    int index;
    char *base = D_001F3FAC + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
