extern char D_002507A0[];
extern void *memset(void *, int, unsigned int);

void func_0732B0(void)
{
    char *entry;
    unsigned int index;

    memset(D_002507A0, 0, 0x9D8);
    entry = D_002507A0 + 0x30;
    index = 0;
    do {
        *entry = -2;
        ++index;
        entry += 0x3C;
    } while (index < 42);
}
