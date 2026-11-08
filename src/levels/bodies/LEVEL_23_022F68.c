extern int func_0226C8(int category, int selector);

int func_022F68(int category, int selector)
{
    int address = func_0226C8(category, selector);
    return *(int *)(address + 0x54) != 0;
}
