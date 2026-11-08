extern int func_023F90(int category, int selector);

int func_024830(int category, int selector)
{
    int address = func_023F90(category, selector);
    return *(int *)(address + 0x54) != 0;
}
