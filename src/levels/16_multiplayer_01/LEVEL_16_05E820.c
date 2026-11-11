extern char D_001EB960[];
extern void *memset(void *, int, unsigned int);

void func_05E820(void)
{
    char *entry;
    unsigned int index;

    memset(D_001EB960, 0, 0x9D8);
    entry = D_001EB960 + 0x30;
    index = 0;
    do {
        *entry = -2;
        ++index;
        entry += 0x3C;
    } while (index < 42);
}
