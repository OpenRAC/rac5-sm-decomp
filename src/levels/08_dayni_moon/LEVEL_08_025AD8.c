extern int func_024EA8(int category, int selector);
extern void func_025918(int category, int selector);

int func_025AD8(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_024EA8(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_025918(category, selector);
        return 1;
    }
    return 0;
}
