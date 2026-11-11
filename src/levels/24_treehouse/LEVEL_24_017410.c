extern char *D_001C004C;
extern char *D_001D7A10;
extern void *memset(void *, int, unsigned int);

void func_017410(void)
{
    unsigned int count = (*(int *)(D_001D7A10 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_001C004C + 0xc), 0, count >> 3);
}
