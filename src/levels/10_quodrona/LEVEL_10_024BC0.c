extern int func_023F90(int category, int selector);
extern void func_024A00(int category, int selector);

int func_024BC0(unsigned int category, unsigned int slot,
                int selector, int update)
{
    if (category < 25 && slot < 8) {
        int address = func_023F90(category, selector);
        *(unsigned int *)(address + 0x3c) = slot;
        if (update != 0)
            func_024A00(category, selector);
        return 1;
    }
    return 0;
}
