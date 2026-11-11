extern char D_001DA44C[];

unsigned int func_124E70(void)
{
    unsigned int *p = *(unsigned int **)D_001DA44C;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
