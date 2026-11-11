extern int func_024F88(int category, int selector);
extern void func_0259F8(int category, int selector);

int func_025BB8(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_024F88(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_0259F8(category, selector);
        return 1;
    }
    return 0;
}
