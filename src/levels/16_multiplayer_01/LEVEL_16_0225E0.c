extern char *func_0220C8(unsigned int owner, int selector);
extern void *func_022400(unsigned int index);

unsigned int func_0225E0(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_0220C8(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_022400(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
