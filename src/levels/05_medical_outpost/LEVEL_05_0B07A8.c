extern void func_0B08F0(void);
extern unsigned char D_001EB5D8;
extern char D_001EB558[];
extern void *memset(void *, int, unsigned int);

void func_0B07A8(void)
{
    func_0B08F0();
    D_001EB5D8 = 0;
    memset(D_001EB558, 0, 0x80);
}
