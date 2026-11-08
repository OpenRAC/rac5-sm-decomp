extern char D_0018AE90[];
extern void *memset(void *, int, unsigned int);

void func_063148(void)
{
    char *entry;
    unsigned int index;

    memset(D_0018AE90, 0, 0x9D8);
    entry = D_0018AE90 + 0x30;
    index = 0;
    do {
        *entry = -2;
        ++index;
        entry += 0x3C;
    } while (index < 42);
}
