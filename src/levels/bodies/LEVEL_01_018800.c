extern char *D_001EF3CC;
extern char *D_00206D90;
extern void *memset(void *, int, unsigned int);

void func_018800(void)
{
    unsigned int count = (*(int *)(D_00206D90 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_001EF3CC + 0xc), 0, count >> 3);
}
