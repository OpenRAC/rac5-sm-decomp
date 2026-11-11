/* LEVEL_18:0x114AA8 -- placement copy of LEVEL_16_115D00.c: looks up the two entries and resets each one that
   exists. */
extern void *func_111AA0(unsigned int index);
extern void func_0368E0(void *entry, int value);

void func_114AA8(void)
{
    unsigned int i;
    void *entry;

    for (i = 0; i < 2; i++) {
        entry = func_111AA0(i);
        if (entry)
            func_0368E0(entry, 0);
    }
}
