extern char D_001F60CC[];

unsigned int func_12F070(void)
{
    unsigned int *p = *(unsigned int **)D_001F60CC;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
