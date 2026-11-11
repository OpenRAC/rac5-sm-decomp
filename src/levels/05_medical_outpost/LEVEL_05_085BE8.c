extern int func_029068(int);
unsigned int func_085BE8(int value)
{
    if (func_029068(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}