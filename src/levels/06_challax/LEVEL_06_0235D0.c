extern int func_022D30(int category, int selector);

int func_0235D0(int category, int selector)
{
    int address = func_022D30(category, selector);
    return *(int *)(address + 0x54) != 0;
}
