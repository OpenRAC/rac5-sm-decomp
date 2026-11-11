extern char D_00121810[];

char *func_0005B0(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_00121810 + index * 0x14;
}
