extern unsigned char D_00211E64;
extern char D_0033E6E0[];
extern void func_0C20E8(void);
extern void *memset(void *, int, unsigned int);

void func_0C2218(void)
{
    D_00211E64 = 0;
    func_0C20E8();
    memset(D_0033E6E0, 0, 0xff);
}
