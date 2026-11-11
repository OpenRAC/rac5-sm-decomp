extern int func_02A968(int);

unsigned int func_0903F8(int value)
{
    if (func_02A968(4) != 0)
        return (value >> 8) & 1;
    return (value >> 9) & 1;
}
