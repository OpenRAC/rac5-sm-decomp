extern char D_00288520[];
extern void *memset(void *, int, unsigned int);

void func_073678(void)
{
    char *entry;
    unsigned int index;

    memset(D_00288520, 0, 0x9D8);
    entry = D_00288520 + 0x30;
    index = 0;
    do {
        *entry = -2;
        ++index;
        entry += 0x3C;
    } while (index < 42);
}
