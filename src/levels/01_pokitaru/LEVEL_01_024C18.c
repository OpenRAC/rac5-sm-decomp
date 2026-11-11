/* LEVEL_01:0x024C18 -- placement copy of LEVEL_02_025578.c. */
extern int func_024628(int owner, int selector);
extern void *func_024A38(unsigned int index);

unsigned int func_024C18(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        int record = func_024628(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_024A38(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
