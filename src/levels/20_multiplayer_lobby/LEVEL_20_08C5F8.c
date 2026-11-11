extern unsigned char D_001997A0[];

int func_08C5F8(int row, int offset)
{
    return D_001997A0[row * 0x200 - offset] != 0;
}
