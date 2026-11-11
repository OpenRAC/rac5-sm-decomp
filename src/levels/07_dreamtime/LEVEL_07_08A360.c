extern int func_02A730(int);
unsigned int func_08A360(int value)
{
    if (func_02A730(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}