extern char *D_001D7CCC;

unsigned int func_128AE0(void)
{
    unsigned int flags = *(unsigned int *)(D_001D7CCC + 0x94);
    if ((flags & 0x20000u) != 0)
        return 0x20000u;
    if ((flags & 0x10000u) != 0)
        return 0x10000u;
    return 0;
}
