extern char *D_001DA44C;

unsigned int func_124758(void)
{
    unsigned int flags = *(unsigned int *)(D_001DA44C + 0x94);
    if ((flags & 0x20000u) != 0)
        return 0x20000u;
    if ((flags & 0x10000u) != 0)
        return 0x10000u;
    return 0;
}
