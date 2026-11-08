extern int func_0244F8(int category, int selector);

int func_024D98(int category, int selector)
{
    int address = func_0244F8(category, selector);
    return *(int *)(address + 0x54) != 0;
}
