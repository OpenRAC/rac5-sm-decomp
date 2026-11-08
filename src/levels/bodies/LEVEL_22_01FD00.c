extern int func_01F460(int category, int selector);

int func_01FD00(int category, int selector)
{
    int address = func_01F460(category, selector);
    return *(int *)(address + 0x54) != 0;
}
