extern int func_02A968(int);
unsigned int func_090350(int value)
{
    if (func_02A968(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}