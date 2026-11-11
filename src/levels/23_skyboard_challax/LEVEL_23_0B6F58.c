extern unsigned char D_001D0F64;
extern char D_002FA220[];
extern void func_0B6E28(void);
extern void *memset(void *, int, unsigned int);

void func_0B6F58(void)
{
    D_001D0F64 = 0;
    func_0B6E28();
    memset(D_002FA220, 0, 0xff);
}
