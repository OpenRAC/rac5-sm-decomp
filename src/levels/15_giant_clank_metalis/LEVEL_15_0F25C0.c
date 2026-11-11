extern char D_0015B9AC[];

unsigned int func_0F25C0(void)
{
    unsigned int *p = *(unsigned int **)D_0015B9AC;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
