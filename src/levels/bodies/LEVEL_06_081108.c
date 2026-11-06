extern int func_0287D8(int);
unsigned int func_081108(int value)
{
    if (func_0287D8(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}