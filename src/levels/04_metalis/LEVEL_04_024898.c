extern char *func_0242A8(unsigned int owner, int selector);
extern void *func_0246B8(unsigned int index);

unsigned int func_024898(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_0242A8(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_0246B8(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
