extern int func_0277B8(int);
unsigned int func_07A2A8(int value)
{
    if (func_0277B8(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}