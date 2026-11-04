extern int D_00208258[];

int func_024F88(int x, int y)
{
    int k = y + 1;

    if ((unsigned int)x < 0x19 && k >= 0 && k < 2)
        return x * 0x58 + (int)D_00208258 + k * 0x58;
    return 0;
}
