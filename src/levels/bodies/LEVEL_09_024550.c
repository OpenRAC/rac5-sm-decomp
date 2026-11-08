extern int func_023920(int category, int selector);
extern void func_024390(int category, int selector);

int func_024550(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_023920(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_024390(category, selector);
        return 1;
    }
    return 0;
}
