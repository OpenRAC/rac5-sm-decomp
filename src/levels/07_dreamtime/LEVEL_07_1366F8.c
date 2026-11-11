extern char D_0021B34C[];

unsigned int func_1366F8(void)
{
    unsigned int *p = *(unsigned int **)D_0021B34C;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
