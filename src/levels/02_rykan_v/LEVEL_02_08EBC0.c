extern int func_02ABB8(int);
unsigned int func_08EBC0(int value)
{
    if (func_02ABB8(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}