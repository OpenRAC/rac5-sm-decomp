extern int func_029258(int);
unsigned int func_084C48(int value)
{
    if (func_029258(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}