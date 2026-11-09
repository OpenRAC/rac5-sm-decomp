/* LEVEL_19:0x116478 -- placement copy of LEVEL_16_115D00.c: looks up the two entries and resets each one that
   exists. */
extern void *func_113490(unsigned int index);
extern void func_037330(void *entry, int value);

void func_116478(void)
{
    unsigned int i;
    void *entry;

    for (i = 0; i < 2; i++) {
        entry = func_113490(i);
        if (entry)
            func_037330(entry, 0);
    }
}
