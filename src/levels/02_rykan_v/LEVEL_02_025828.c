extern int func_024F88(int category, int selector);

int func_025828(int category, int selector)
{
    int address = func_024F88(category, selector);
    return *(int *)(address + 0x54) != 0;
}
