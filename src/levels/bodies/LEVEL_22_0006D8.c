extern char D_00168BE8[];

char *func_0006D8(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_00168BE8 + index * 0xc;
}
