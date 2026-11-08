extern int func_024628(int category, int selector);

int func_024EC8(int category, int selector)
{
    int address = func_024628(category, selector);
    return *(int *)(address + 0x54) != 0;
}
