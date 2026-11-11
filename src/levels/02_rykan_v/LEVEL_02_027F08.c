extern char *D_00208C2C;

int func_027F08(void)
{
    int index;
    char *base = D_00208C2C + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
