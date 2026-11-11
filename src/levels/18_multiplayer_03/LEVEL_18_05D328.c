extern char D_001EBCE0[];
extern void *memset(void *, int, unsigned int);

void func_05D328(void)
{
    char *entry;
    unsigned int index;

    memset(D_001EBCE0, 0, 0x9D8);
    entry = D_001EBCE0 + 0x30;
    index = 0;
    do {
        *entry = -2;
        ++index;
        entry += 0x3C;
    } while (index < 42);
}
