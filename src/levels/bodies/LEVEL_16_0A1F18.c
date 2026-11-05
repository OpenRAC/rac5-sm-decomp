extern unsigned char D_00275F60[];

int func_0A1F18(int row, int offset)
{
    return D_00275F60[row * 0x200 - offset] != 0;
}
