extern int func_01E990(int category, int selector);

int func_01F230(int category, int selector)
{
    int address = func_01E990(category, selector);
    return *(int *)(address + 0x54) != 0;
}
