extern char *D_001D7CCC;

int func_128A98(void)
{
    int flags = *(int *)(D_001D7CCC + 0x94);
    return (flags & 0x40000) > 0;
}
