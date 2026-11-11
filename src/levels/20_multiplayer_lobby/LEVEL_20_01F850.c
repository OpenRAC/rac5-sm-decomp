extern int func_01EDC8(int category, int selector);
extern void func_01F6E8(int category, int selector);

int func_01F850(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_01EDC8(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_01F6E8(category, selector);
        return 1;
    }
    return 0;
}
