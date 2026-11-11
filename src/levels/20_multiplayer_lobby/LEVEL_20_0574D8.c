/* LEVEL_20:0x0574D8 -- placement copy of LEVEL_01_06DE30.c. */
extern char D_00143290[];
extern void *memset(void *, int, unsigned int);

void func_0574D8(void)
{
    char *entry;
    unsigned int index;

    memset(D_00143290, 0, 0x9D8);
    entry = D_00143290 + 0x30;
    index = 0;
    do {
        *entry = -2;
        ++index;
        entry += 0x3C;
    } while (index < 42);
}
