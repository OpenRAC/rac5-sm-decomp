extern char *D_0021C00C;

unsigned int func_139390(void)
{
    unsigned int flags = *(unsigned int *)(D_0021C00C + 0x94);
    if ((flags & 0x20000u) != 0)
        return 0x20000u;
    if ((flags & 0x10000u) != 0)
        return 0x10000u;
    return 0;
}
