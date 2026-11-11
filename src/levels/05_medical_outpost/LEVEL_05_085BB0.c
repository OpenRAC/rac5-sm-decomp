extern int func_029068(int);
unsigned int func_085BB0(int value)
{
    if (func_029068(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}