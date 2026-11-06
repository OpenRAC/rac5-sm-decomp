extern char *D_002036CC;
extern char *D_0021B090;
extern void *memset(void *, int, unsigned int);

void func_018F68(void)
{
    unsigned int count = (*(int *)(D_0021B090 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_002036CC + 0xc), 0, count >> 3);
}
