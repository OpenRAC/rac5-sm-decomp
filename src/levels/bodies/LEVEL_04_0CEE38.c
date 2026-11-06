extern long long func_13F670(void);
extern void func_13F688(long long);
extern void func_0C9F70(void);
extern void func_13F9D0(int);
extern unsigned char D_0020D051;
extern char *D_0020D12C;

void func_0CEE38(void)
{
    long long value = func_13F670();
    func_13F688(0);
    if (D_0020D051 != 0) {
        func_0C9F70();
    }
    func_13F688(value);
    func_13F9D0(*(int *)(D_0020D12C + 0x3c));
}
