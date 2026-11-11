extern int func_022D30(int category, int selector);
extern void func_0237A0(int category, int selector);

int func_023960(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_022D30(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_0237A0(category, selector);
        return 1;
    }
    return 0;
}
