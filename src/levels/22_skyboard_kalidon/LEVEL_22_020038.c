extern int func_01F460(int category, int selector);
extern void func_01FE78(int category, int selector);

int func_020038(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_01F460(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_01FE78(category, selector);
        return 1;
    }
    return 0;
}
