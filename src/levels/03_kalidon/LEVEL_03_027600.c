extern char *D_0020C62C;

int func_027600(void)
{
    int index;
    char *base = D_0020C62C + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
