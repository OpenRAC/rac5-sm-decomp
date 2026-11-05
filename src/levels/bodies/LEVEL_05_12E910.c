extern char *D_001F60CC;

int func_12E910(void)
{
    int flags = *(int *)(D_001F60CC + 0x94);
    return (flags & 0x40000) > 0;
}
