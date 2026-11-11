extern char *func_0244F8(unsigned int owner, int selector);
extern void *func_024908(unsigned int index);

unsigned int func_024AE8(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_0244F8(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_024908(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
