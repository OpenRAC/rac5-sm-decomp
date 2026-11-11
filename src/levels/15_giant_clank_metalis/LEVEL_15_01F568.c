extern int func_01E990(int category, int selector);
extern void func_01F3A8(int category, int selector);

int func_01F568(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_01E990(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_01F3A8(category, selector);
        return 1;
    }
    return 0;
}
