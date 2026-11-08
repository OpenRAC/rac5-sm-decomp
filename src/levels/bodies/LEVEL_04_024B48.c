extern int func_0242A8(int category, int selector);

int func_024B48(int category, int selector)
{
    int address = func_0242A8(category, selector);
    return *(int *)(address + 0x54) != 0;
}
