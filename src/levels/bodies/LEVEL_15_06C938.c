extern int func_023BC8(int);
unsigned int func_06C938(int value)
{
    if (func_023BC8(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}