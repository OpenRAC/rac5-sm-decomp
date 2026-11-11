extern char D_0024FF0C[];

unsigned int func_144C30(void)
{
    unsigned int *p = *(unsigned int **)D_0024FF0C;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xA8);
    }
    return 0xFFFFFFFF;
}
