extern int func_021A48(int category, int selector);
extern void func_0223C0(int category, int selector);

int func_022528(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_021A48(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_0223C0(category, selector);
        return 1;
    }
    return 0;
}
