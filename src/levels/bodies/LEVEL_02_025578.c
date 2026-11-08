extern char *func_024F88(unsigned int owner, int selector);
extern void *func_025398(unsigned int index);

unsigned int func_025578(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_024F88(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_025398(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
