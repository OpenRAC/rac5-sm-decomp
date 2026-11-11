extern char *D_001F83CC;
extern char *D_0020F9F0;
extern void *memset(void *, int, unsigned int);

void func_017E90(void)
{
    unsigned int count = (*(int *)(D_0020F9F0 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_001F83CC + 0xc), 0, count >> 3);
}
