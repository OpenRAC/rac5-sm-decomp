/* LEVEL_16:0x115D00 -- looks up the two entries and resets each one that
   exists. */
extern void *func_112CE8(unsigned int index);
extern void func_038050(void *entry, int value);

void func_115D00(void)
{
    unsigned int i;
    void *entry;

    for (i = 0; i < 2; i++) {
        entry = func_112CE8(i);
        if (entry)
            func_038050(entry, 0);
    }
}
