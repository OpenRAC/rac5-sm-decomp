extern char *func_0235C0(unsigned int owner, int selector);
extern void *func_0239D0(unsigned int index);

unsigned int func_023BB0(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_0235C0(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_0239D0(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
