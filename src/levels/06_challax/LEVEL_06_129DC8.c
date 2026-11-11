extern char D_001F5C4C[];

unsigned int func_129DC8(void)
{
    unsigned int *p = *(unsigned int **)D_001F5C4C;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
