extern char D_001FA5E8[];

char *func_0008D0(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_001FA5E8 + index * 0xc;
}
