extern int D_002078D8[];

int func_024BF0(int x, int y)
{
    int k = y + 1;

    if ((unsigned int)x < 0x19 && k >= 0 && k < 2)
        return x * 0x58 + (int)D_002078D8 + k * 0x58;
    return 0;
}
