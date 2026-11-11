extern char *D_001F60CC;

unsigned int func_12E958(void)
{
    unsigned int flags = *(unsigned int *)(D_001F60CC + 0x94);
    if ((flags & 0x20000u) != 0)
        return 0x20000u;
    if ((flags & 0x10000u) != 0)
        return 0x10000u;
    return 0;
}
