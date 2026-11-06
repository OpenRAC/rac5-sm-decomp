extern int func_0279E0(int);
unsigned int func_079D18(int value)
{
    if (func_0279E0(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}