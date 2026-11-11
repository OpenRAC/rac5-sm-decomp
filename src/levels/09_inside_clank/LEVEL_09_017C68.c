extern char *D_001D91CC;
extern char *D_001F0890;
extern void *memset(void *, int, unsigned int);

void func_017C68(void)
{
    unsigned int count = (*(int *)(D_001F0890 + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_001D91CC + 0xc), 0, count >> 3);
}
