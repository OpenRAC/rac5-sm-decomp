extern char *D_001C27CC;
extern char *D_001DA190;
extern void *memset(void *, int, unsigned int);

void func_0175B8(void)
{
    unsigned int count = (*(int *)(D_001DA190 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_001C27CC + 0xc), 0, count >> 3);
}
