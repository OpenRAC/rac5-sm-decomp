extern long long func_0E2C98(void);
extern void func_0E2CB0(long long);
extern void func_09E140(void);
extern void func_0E30A0(int);
extern unsigned char D_001040B9;
extern char *D_00104194;

void func_0A2F98(void)
{
    long long value = func_0E2C98();
    func_0E2CB0(0);
    if (D_001040B9 != 0) {
        func_09E140();
    }
    func_0E2CB0(value);
    func_0E30A0(*(int *)(D_00104194 + 0x3c));
}
