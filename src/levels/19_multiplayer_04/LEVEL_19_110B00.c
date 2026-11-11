extern char D_001B5CDC[];

unsigned int func_110B00(void)
{
    unsigned int *p = *(unsigned int **)D_001B5CDC;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
