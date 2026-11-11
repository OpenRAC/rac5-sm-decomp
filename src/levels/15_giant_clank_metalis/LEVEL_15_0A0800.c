extern unsigned char D_001527E4;
extern char D_00240620[];
extern void func_0A06D0(void);
extern void *memset(void *, int, unsigned int);

void func_0A0800(void)
{
    D_001527E4 = 0;
    func_0A06D0();
    memset(D_00240620, 0, 0xff);
}
