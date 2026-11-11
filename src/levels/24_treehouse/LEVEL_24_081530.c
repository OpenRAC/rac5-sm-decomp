extern int func_027930(int);
unsigned int func_081530(int value)
{
    if (func_027930(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}