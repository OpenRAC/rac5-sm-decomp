extern char *func_024BF0(unsigned int owner, int selector);
extern void *func_025000(unsigned int index);

unsigned int func_0251E0(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_024BF0(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_025000(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
