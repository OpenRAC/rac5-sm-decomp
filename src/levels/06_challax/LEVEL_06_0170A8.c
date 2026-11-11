extern char *D_001DE2CC;
extern char *D_001F5990;
extern void *memset(void *, int, unsigned int);

void func_0170A8(void)
{
    unsigned int count = (*(int *)(D_001F5990 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_001DE2CC + 0xc), 0, count >> 3);
}
