/* LEVEL_20:0x0E8600 -- placement copy of LEVEL_16_115D00.c: looks up the two entries and resets each one that
   exists. */
extern void *func_0E5858(unsigned int index);
extern void func_032338(void *entry, int value);

void func_0E8600(void)
{
    unsigned int i;
    void *entry;

    for (i = 0; i < 2; i++) {
        entry = func_0E5858(i);
        if (entry)
            func_032338(entry, 0);
    }
}
