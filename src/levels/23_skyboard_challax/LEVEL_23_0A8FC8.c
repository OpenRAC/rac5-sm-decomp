extern void func_0A9110(void);
extern unsigned char D_001CF658;
extern char D_001CF5D8[];
extern void *memset(void *, int, unsigned int);

void func_0A8FC8(void)
{
    func_0A9110();
    D_001CF658 = 0;
    memset(D_001CF5D8, 0, 0x80);
}
