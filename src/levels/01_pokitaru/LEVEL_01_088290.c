extern int func_02A3F0(int);
unsigned int func_088290(int value)
{
    if (func_02A3F0(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}