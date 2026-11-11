extern char *D_002082AC;

int func_027A80(void)
{
    int index;
    char *base = D_002082AC + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
