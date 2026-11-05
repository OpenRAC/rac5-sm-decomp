extern char D_001F5368[];

char *func_0008D0(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_001F5368 + index * 0xc;
}
