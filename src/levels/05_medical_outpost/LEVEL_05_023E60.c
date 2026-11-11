extern int func_0235C0(int category, int selector);

int func_023E60(int category, int selector)
{
    int address = func_0235C0(category, selector);
    return *(int *)(address + 0x54) != 0;
}
