extern char D_0016602C[];

unsigned int func_10ABC8(void)
{
    unsigned int *p = *(unsigned int **)D_0016602C;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
