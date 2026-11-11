/* LEVEL_19:0x05DC80 -- placement copy of LEVEL_01_06DE30.c. */
extern char D_001EBAE0[];
extern void *memset(void *, int, unsigned int);

void func_05DC80(void)
{
    char *entry;
    unsigned int index;

    memset(D_001EBAE0, 0, 0x9D8);
    entry = D_001EBAE0 + 0x30;
    index = 0;
    do {
        *entry = -2;
        ++index;
        entry += 0x3C;
    } while (index < 42);
}
