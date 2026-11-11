extern long long func_1331F0(void);
extern void func_133208(long long);
extern void func_0C4758(void);
extern void func_133550(int);
extern unsigned char D_001F3ED1;
extern char *D_001F3FAC;

void func_0C9620(void)
{
    long long value = func_1331F0();
    func_133208(0);
    if (D_001F3ED1 != 0) {
        func_0C4758();
    }
    func_133208(value);
    func_133550(*(int *)(D_001F3FAC + 0x3c));
}
