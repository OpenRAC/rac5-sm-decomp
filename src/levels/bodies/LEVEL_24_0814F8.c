extern int func_027930(int);
unsigned int func_0814F8(int value)
{
    if (func_027930(4) != 0)
        return (value >> 5) & 1;
    return (value >> 7) & 1;
}