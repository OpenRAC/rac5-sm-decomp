extern char *D_0019BFD4;
extern char *D_001B5A20;
extern void *memset(void *, int, unsigned int);

void func_016B08(void)
{
    unsigned int count = (*(int *)(D_001B5A20 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_0019BFD4 + 0xc), 0, count >> 3);
}
