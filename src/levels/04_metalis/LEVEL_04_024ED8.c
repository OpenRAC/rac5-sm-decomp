extern int func_0242A8(int category, int selector);
extern void func_024D18(int category, int selector);

int func_024ED8(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_0242A8(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_024D18(category, selector);
        return 1;
    }
    return 0;
}
