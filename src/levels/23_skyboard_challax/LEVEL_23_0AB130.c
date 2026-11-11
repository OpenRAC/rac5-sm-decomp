extern signed char D_002F90A0[];

int func_0AB130(int index)
{
    signed char *row = D_002F90A0 + index * 0x10;
    return row[0xc] != -1;
}
