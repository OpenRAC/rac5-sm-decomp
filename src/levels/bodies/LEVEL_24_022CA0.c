extern int func_022400(int category, int selector);

int func_022CA0(int category, int selector)
{
    int address = func_022400(category, selector);
    return *(int *)(address + 0x54) != 0;
}
