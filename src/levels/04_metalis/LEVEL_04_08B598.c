extern int func_029E98(int);

unsigned int func_08B598(int value)
{
    if (func_029E98(4) != 0)
        return (value >> 8) & 1;
    return (value >> 9) & 1;
}
