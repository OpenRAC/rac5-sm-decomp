extern int func_024BF0(int category, int selector);

int func_025490(int category, int selector)
{
    int address = func_024BF0(category, selector);
    return *(int *)(address + 0x54) != 0;
}
