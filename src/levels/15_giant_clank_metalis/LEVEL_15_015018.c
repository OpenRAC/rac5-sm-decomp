extern char *D_00144034;
extern char *D_0015B710;
extern void *memset(void *, int, unsigned int);

void func_015018(void)
{
    unsigned int count = (*(int *)(D_0015B710 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_00144034 + 0xc), 0, count >> 3);
}
