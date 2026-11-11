extern signed char D_00199BA0[];

int func_08D1C8(int index)
{
    signed char *row = D_00199BA0 + index * 0x10;
    return row[0xc] != -1;
}
