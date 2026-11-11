extern int func_027E38(int);
unsigned int func_079868(int value)
{
    if (func_027E38(4) != 0)
        return (value >> 7) & 1;
    return (value >> 5) & 1;
}