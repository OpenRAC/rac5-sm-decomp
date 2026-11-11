extern char *D_0020D12C;

int func_0273B0(void)
{
    int index;
    char *base = D_0020D12C + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
