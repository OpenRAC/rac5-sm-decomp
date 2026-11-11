extern int func_0244F8(int category, int selector);
extern void func_024F68(int category, int selector);

int func_025128(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_0244F8(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_024F68(category, selector);
        return 1;
    }
    return 0;
}
