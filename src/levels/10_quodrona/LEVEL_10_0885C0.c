extern int func_02A1C8(int);
unsigned int func_0885C0(int value)
{
    if (func_02A1C8(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}