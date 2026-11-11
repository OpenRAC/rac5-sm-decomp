extern int func_024940(int);
unsigned int func_0674D8(int value)
{
    if (func_024940(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}