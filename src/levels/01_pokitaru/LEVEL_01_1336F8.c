extern char D_0020704C[];

unsigned int func_1336F8(void)
{
    unsigned int *p = *(unsigned int **)D_0020704C;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
