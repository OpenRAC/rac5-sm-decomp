extern char D_001F0B4C[];

unsigned int func_12C690(void)
{
    unsigned int *p = *(unsigned int **)D_001F0B4C;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
