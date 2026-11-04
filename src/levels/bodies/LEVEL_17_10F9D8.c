extern char D_001A815C[];

unsigned int func_10F9D8(void)
{
    unsigned int *p = *(unsigned int **)D_001A815C;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
