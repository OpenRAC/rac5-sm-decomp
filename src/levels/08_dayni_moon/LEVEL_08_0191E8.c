extern char *D_00237F4C;
extern char *D_0024FC50;
extern void *memset(void *, int, unsigned int);

void func_0191E8(void)
{
    unsigned int count = (*(int *)(D_0024FC50 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_00237F4C + 0xc), 0, count >> 3);
}
