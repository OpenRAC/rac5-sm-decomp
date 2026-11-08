extern int func_0220C8(int category, int selector);
extern void func_022A40(int category, int selector);

int func_022BA8(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_0220C8(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_022A40(category, selector);
        return 1;
    }
    return 0;
}
