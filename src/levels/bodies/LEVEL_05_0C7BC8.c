extern long long func_12EB68(void);
extern void func_12EB80(long long);
extern void func_0C2D00(void);
extern void func_12EEC8(int);
extern unsigned char D_001E3251;
extern char *D_001E332C;

void func_0C7BC8(void)
{
    long long value = func_12EB68();
    func_12EB80(0);
    if (D_001E3251 != 0) {
        func_0C2D00();
    }
    func_12EB80(value);
    func_12EEC8(*(int *)(D_001E332C + 0x3c));
}
