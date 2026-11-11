extern char D_00239290[];
extern void *memset(void *, int, unsigned int);

void func_06DE30(void)
{
    char *entry;
    unsigned int index;

    memset(D_00239290, 0, 0x9D8);
    entry = D_00239290 + 0x30;
    index = 0;
    do {
        *entry = -2;
        ++index;
        entry += 0x3C;
    } while (index < 42);
}
