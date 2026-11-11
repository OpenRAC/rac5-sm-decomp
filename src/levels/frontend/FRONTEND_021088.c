extern char D_00032814[];

unsigned int func_021088(void)
{
    unsigned int *p = *(unsigned int **)D_00032814;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
