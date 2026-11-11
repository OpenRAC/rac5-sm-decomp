extern char D_001B4B5C[];

unsigned int func_110460(void)
{
    unsigned int *p = *(unsigned int **)D_001B4B5C;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
