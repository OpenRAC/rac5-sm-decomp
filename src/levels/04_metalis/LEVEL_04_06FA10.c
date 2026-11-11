extern char D_00253AA0[];
extern void *memset(void *, int, unsigned int);

void func_06FA10(void)
{
    char *entry;
    unsigned int index;

    memset(D_00253AA0, 0, 0x9D8);
    entry = D_00253AA0 + 0x30;
    index = 0;
    do {
        *entry = -2;
        ++index;
        entry += 0x3C;
    } while (index < 42);
}
