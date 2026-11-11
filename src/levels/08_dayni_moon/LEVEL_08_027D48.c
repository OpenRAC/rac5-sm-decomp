extern char *D_0023CB2C;

int func_027D48(void)
{
    int index;
    char *base = D_0023CB2C + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
