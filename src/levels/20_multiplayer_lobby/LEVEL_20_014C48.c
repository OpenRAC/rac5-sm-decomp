extern char *D_000FD53C;
extern char *D_00116F80;
extern void *memset(void *, int, unsigned int);

void func_014C48(void)
{
    unsigned int count = (*(int *)(D_00116F80 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_000FD53C + 0xc), 0, count >> 3);
}
