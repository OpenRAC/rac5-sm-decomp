extern int D_001F35D8[];

int func_024628(int x, int y)
{
    int k = y + 1;

    if ((unsigned int)x < 0x19 && k >= 0 && k < 2)
        return x * 0x58 + (int)D_001F35D8 + k * 0x58;
    return 0;
}
