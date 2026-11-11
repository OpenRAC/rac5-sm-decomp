extern char D_0020B768[];

char *func_0008D0(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_0020B768 + index * 0xc;
}
