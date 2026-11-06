extern char *D_00207A4C;
extern char *D_0021F410;
extern void *memset(void *, int, unsigned int);

void func_018608(void)
{
    unsigned int count = (*(int *)(D_0021F410 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_00207A4C + 0xc), 0, count >> 3);
}
