extern int func_0273E8(int);
unsigned int func_0791E8(int value)
{
    if (func_0273E8(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}