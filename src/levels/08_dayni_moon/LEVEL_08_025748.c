extern int func_024EA8(int category, int selector);

int func_025748(int category, int selector)
{
    int address = func_024EA8(category, selector);
    return *(int *)(address + 0x54) != 0;
}
