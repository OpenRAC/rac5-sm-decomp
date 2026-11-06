extern int D_001F6070;
extern char D_001F4A70[];
extern void *memset(void *, int, unsigned int);

void func_072590(void)
{
    D_001F6070 = 0;
    memset(D_001F4A70, 0, 0x1600);
}
