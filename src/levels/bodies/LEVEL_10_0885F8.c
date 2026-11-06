extern int func_02A1C8(int);
unsigned int func_0885F8(int value)
{
    if (func_02A1C8(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}