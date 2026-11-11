extern int D_0023C158[];

int func_024EA8(int x, int y)
{
    int k = y + 1;

    if ((unsigned int)x < 0x19 && k >= 0 && k < 2)
        return x * 0x58 + (int)D_0023C158 + k * 0x58;
    return 0;
}
