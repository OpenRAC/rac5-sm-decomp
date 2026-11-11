extern char D_001B5FDC[];

unsigned int func_10F110(void)
{
    unsigned int *p = *(unsigned int **)D_001B5FDC;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
