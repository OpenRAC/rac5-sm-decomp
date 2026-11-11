extern char *D_001C4C2C;

int func_025050(void)
{
    int index;
    char *base = D_001C4C2C + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
