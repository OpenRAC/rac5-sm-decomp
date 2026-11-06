extern char *D_0019C2D4;
extern char *D_001B5D20;
extern void *memset(void *, int, unsigned int);

void func_016458(void)
{
    unsigned int count = (*(int *)(D_001B5D20 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_0019C2D4 + 0xc), 0, count >> 3);
}
