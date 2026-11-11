extern char D_0016EA68[];
extern void *memset(void *, int, unsigned int);
extern void func_06FE60(void);

void func_06EAE0(void)
{
    memset(D_0016EA68, 0, 0x3000);
    func_06FE60();
}
