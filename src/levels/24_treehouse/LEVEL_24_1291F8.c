extern char D_001D7CCC[];

unsigned int func_1291F8(void)
{
    unsigned int *p = *(unsigned int **)D_001D7CCC;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
