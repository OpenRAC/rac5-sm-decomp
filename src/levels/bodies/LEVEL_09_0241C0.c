extern int func_023920(int category, int selector);

int func_0241C0(int category, int selector)
{
    int address = func_023920(category, selector);
    return *(int *)(address + 0x54) != 0;
}
