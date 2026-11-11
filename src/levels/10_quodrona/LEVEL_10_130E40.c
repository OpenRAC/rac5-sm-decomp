extern char *D_0020FCAC;

unsigned int func_130E40(void)
{
    unsigned int flags = *(unsigned int *)(D_0020FCAC + 0x94);
    if ((flags & 0x20000u) != 0)
        return 0x20000u;
    if ((flags & 0x10000u) != 0)
        return 0x10000u;
    return 0;
}
