extern char *func_01E990(unsigned int owner, int selector);
extern void *func_01EDA0(unsigned int index);

unsigned int func_01EF80(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_01E990(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_01EDA0(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
