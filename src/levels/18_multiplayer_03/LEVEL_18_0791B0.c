extern int func_0273E8(int);
unsigned int func_0791B0(int value)
{
    if (func_0273E8(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}