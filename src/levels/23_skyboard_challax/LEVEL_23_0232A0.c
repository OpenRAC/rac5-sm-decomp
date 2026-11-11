extern int func_0226C8(int category, int selector);
extern void func_0230E0(int category, int selector);

int func_0232A0(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_0226C8(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_0230E0(category, selector);
        return 1;
    }
    return 0;
}
