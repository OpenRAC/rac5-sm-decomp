extern char *func_023920(unsigned int owner, int selector);
extern void *func_023D30(unsigned int index);

unsigned int func_023F10(unsigned int owner, int slot)
{
    unsigned int index = 0;
    do {
        char *record = func_023920(owner, -1);
        void **table = (void **)(record + 0x30);
        void **entry = table + slot;
        void *expected = func_023D30(index);
        if (*entry != expected)
            index++;
        else
            return index;
    } while (index < 0x2b);
    return 0;
}
