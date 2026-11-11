extern int func_02A1E8(int);
unsigned int func_0880B0(int value)
{
    if (func_02A1E8(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}