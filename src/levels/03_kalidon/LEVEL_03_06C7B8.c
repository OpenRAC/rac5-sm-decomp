extern char D_00254110[];
extern void *memset(void *, int, unsigned int);

void func_06C7B8(void)
{
    char *entry;
    unsigned int index;

    memset(D_00254110, 0, 0x9D8);
    entry = D_00254110 + 0x30;
    index = 0;
    do {
        *entry = -2;
        ++index;
        entry += 0x3C;
    } while (index < 42);
}
