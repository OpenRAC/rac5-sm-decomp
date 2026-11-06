extern int func_02A968(int);

unsigned int func_0903C0(int value)
{
    if (func_02A968(4) != 0)
        return (value >> 9) & 1;
    return (value >> 8) & 1;
}
