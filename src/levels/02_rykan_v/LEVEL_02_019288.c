extern char *D_0020404C;
extern char *D_0021BD50;
extern void *memset(void *, int, unsigned int);

void func_019288(void)
{
    unsigned int count = (*(int *)(D_0021BD50 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_0020404C + 0xc), 0, count >> 3);
}
