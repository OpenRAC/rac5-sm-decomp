extern char *D_0019AE54;
extern char *D_001B48A0;
extern void *memset(void *, int, unsigned int);

void func_016D98(void)
{
    unsigned int count = (*(int *)(D_001B48A0 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_0019AE54 + 0xc), 0, count >> 3);
}
