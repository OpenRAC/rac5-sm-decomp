extern char *D_001DE74C;
extern char *D_001F5E10;
extern void *memset(void *, int, unsigned int);

void func_017EC8(void)
{
    unsigned int count = (*(int *)(D_001F5E10 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_001DE74C + 0xc), 0, count >> 3);
}
