extern char D_0020FCAC[];

unsigned int func_131578(void)
{
    unsigned int *p = *(unsigned int **)D_0020FCAC;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
