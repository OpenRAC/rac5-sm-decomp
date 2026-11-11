extern char *D_001F0B4C;

unsigned int func_12BF78(void)
{
    unsigned int flags = *(unsigned int *)(D_001F0B4C + 0x94);
    if ((flags & 0x20000u) != 0)
        return 0x20000u;
    if ((flags & 0x10000u) != 0)
        return 0x10000u;
    return 0;
}
