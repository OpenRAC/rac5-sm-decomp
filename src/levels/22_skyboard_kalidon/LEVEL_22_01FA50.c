extern char *func_01F460(unsigned int owner, int selector);
extern void *func_01F870(unsigned int index);

unsigned int func_01FA50(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_01F460(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_01F870(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
