extern char *D_0018E454;
extern char *D_001A7EA0;
extern void *memset(void *, int, unsigned int);

void func_0167B8(void)
{
    unsigned int count = (*(int *)(D_001A7EA0 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_0018E454 + 0xc), 0, count >> 3);
}
