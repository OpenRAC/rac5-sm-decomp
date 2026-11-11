extern char D_00220468[];

char *func_0008D0(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_00220468 + index * 0xc;
}
