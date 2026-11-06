extern int func_029E98(int);
unsigned int func_08B4F0(int value)
{
    if (func_029E98(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}