extern char D_0021C00C[];

unsigned int func_139AA8(void)
{
    unsigned int *p = *(unsigned int **)D_0021C00C;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
