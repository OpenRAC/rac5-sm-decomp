extern signed char D_00342AE0[];

int func_0B4138(int index)
{
    signed char *row = D_00342AE0 + index * 0x10;
    return row[0xc] != -1;
}
