extern char D_0011721C[];

unsigned int func_0E3248(void)
{
    unsigned int *p = *(unsigned int **)D_0011721C;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
