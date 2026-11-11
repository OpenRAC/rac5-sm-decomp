/* LEVEL_17:0x115460 -- placement copy of LEVEL_16_115D00.c: looks up the two entries and resets each one that
   exists. */
extern void *func_112478(unsigned int index);
extern void func_0378F0(void *entry, int value);

void func_115460(void)
{
    unsigned int i;
    void *entry;

    for (i = 0; i < 2; i++) {
        entry = func_112478(i);
        if (entry)
            func_0378F0(entry, 0);
    }
}
