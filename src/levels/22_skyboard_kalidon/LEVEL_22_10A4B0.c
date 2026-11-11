extern char *D_0016602C;

unsigned int func_10A4B0(void)
{
    unsigned int flags = *(unsigned int *)(D_0016602C + 0x94);
    if ((flags & 0x20000u) != 0)
        return 0x20000u;
    if ((flags & 0x10000u) != 0)
        return 0x10000u;
    return 0;
}
