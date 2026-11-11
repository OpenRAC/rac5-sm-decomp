/* LEVEL_17:0x05E250 -- placement copy of LEVEL_01_06DE30.c. */
extern char D_001DCC60[];
extern void *memset(void *, int, unsigned int);

void func_05E250(void)
{
    char *entry;
    unsigned int index;

    memset(D_001DCC60, 0, 0x9D8);
    entry = D_001DCC60 + 0x30;
    index = 0;
    do {
        *entry = -2;
        ++index;
        entry += 0x3C;
    } while (index < 42);
}
