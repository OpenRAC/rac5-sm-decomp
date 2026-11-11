extern char *D_001F5C4C;

unsigned int func_1296B0(void)
{
    unsigned int flags = *(unsigned int *)(D_001F5C4C + 0x94);
    if ((flags & 0x20000u) != 0)
        return 0x20000u;
    if ((flags & 0x10000u) != 0)
        return 0x10000u;
    return 0;
}
