extern unsigned char D_00206B64;
extern char D_003321E0[];
extern void func_0C13D8(void);
extern void *memset(void *, int, unsigned int);

void func_0C1508(void)
{
    D_00206B64 = 0;
    func_0C13D8();
    memset(D_003321E0, 0, 0xff);
}
