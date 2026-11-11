extern int func_0235C0(int category, int selector);
extern void func_024030(int category, int selector);

int func_0241F0(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_0235C0(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_024030(category, selector);
        return 1;
    }
    return 0;
}
