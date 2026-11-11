/* LEVEL_01:0x025258 -- placement copy of LEVEL_02_025BB8.c. */
extern int func_024628(int category, int selector);
extern void func_025098(int category, int selector);

int func_025258(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_024628(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_025098(category, selector);
        return 1;
    }
    return 0;
}
