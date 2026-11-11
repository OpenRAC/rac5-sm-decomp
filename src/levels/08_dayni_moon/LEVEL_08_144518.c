extern char *D_0024FF0C;

unsigned int func_144518(void)
{
    unsigned int flags = *(unsigned int *)(D_0024FF0C + 0x94);
    if ((flags & 0x20000u) != 0)
        return 0x20000u;
    if ((flags & 0x10000u) != 0)
        return 0x10000u;
    return 0;
}
