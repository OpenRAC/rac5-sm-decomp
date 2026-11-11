extern char *D_0014E74C;
extern char *D_00165D70;
extern void *memset(void *, int, unsigned int);

void func_015440(void)
{
    unsigned int count = (*(int *)(D_00165D70 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_0014E74C + 0xc), 0, count >> 3);
}
