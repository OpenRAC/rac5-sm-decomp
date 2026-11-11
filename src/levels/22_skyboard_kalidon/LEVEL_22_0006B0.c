extern char D_00168C90[];

char *func_0006B0(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_00168C90 + index * 0x14;
}
