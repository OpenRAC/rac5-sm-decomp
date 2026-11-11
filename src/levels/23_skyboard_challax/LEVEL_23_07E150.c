extern int func_027F60(int);
unsigned int func_07E150(int value)
{
    if (func_027F60(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}