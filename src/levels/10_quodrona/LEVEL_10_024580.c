extern char *func_023F90(unsigned int owner, int selector);
extern void *func_0243A0(unsigned int index);

unsigned int func_024580(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_023F90(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_0243A0(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
