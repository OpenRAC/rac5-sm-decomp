extern char *func_021A48(unsigned int owner, int selector);
extern void *func_021D80(unsigned int index);

unsigned int func_021F60(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_021A48(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_021D80(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
