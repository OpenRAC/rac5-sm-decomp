extern int func_021710(int category, int selector);
extern void func_022088(int category, int selector);

int func_0221F0(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_021710(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_022088(category, selector);
        return 1;
    }
    return 0;
}
