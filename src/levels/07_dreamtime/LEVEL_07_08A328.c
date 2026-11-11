extern int func_02A730(int);
unsigned int func_08A328(int value)
{
    if (func_02A730(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}