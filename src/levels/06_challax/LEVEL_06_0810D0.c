extern int func_0287D8(int);
unsigned int func_0810D0(int value)
{
    if (func_0287D8(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}