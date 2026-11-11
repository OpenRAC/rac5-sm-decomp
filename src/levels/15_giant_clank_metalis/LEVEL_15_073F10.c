extern char D_001ACDE8[];
extern void *memset(void *, int, unsigned int);
extern void func_075290(void);

void func_073F10(void)
{
    memset(D_001ACDE8, 0, 0x3000);
    func_075290();
}
