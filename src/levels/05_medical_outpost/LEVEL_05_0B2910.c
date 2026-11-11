extern signed char D_00313B20[];

int func_0B2910(int index)
{
    signed char *row = D_00313B20 + index * 0x10;
    return row[0xc] != -1;
}
