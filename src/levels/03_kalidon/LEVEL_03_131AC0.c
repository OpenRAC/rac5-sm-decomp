extern char D_0021F6CC[];

unsigned int func_131AC0(void)
{
    unsigned int *p = *(unsigned int **)D_0021F6CC;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
