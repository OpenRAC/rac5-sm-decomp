extern char *D_001F0B4C;

int func_12BF30(void)
{
    int flags = *(int *)(D_001F0B4C + 0x94);
    return (flags & 0x40000) > 0;
}
