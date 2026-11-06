extern char *D_0020854C;
extern char *D_002201B0;
extern void *memset(void *, int, unsigned int);

void func_018560(void)
{
    unsigned int count = (*(int *)(D_002201B0 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_0020854C + 0xc), 0, count >> 3);
}
