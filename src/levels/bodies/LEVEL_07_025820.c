extern int func_024BF0(int category, int selector);
extern void func_025660(int category, int selector);

int func_025820(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_024BF0(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_025660(category, selector);
        return 1;
    }
    return 0;
}
