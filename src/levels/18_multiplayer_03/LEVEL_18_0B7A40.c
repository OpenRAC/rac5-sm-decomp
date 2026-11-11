extern long long func_10EB60(void);
extern void func_10EB78(long long);
extern void func_0B2BE8(void);
extern void func_10EF68(int);
extern unsigned char D_001A2E59;
extern char *D_001A2F34;

void func_0B7A40(void)
{
    long long value = func_10EB60();
    func_10EB78(0);
    if (D_001A2E59 != 0) {
        func_0B2BE8();
    }
    func_10EB78(value);
    func_10EF68(*(int *)(D_001A2F34 + 0x3c));
}
