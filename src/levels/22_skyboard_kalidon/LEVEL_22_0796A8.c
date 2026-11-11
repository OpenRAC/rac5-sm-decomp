extern int func_024988(int);
unsigned int func_0796A8(int value)
{
    if (func_024988(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}