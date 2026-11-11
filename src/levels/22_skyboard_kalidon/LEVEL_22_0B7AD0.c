extern long long func_10A6C0(void);
extern void func_10A6D8(long long);
extern void func_0B2C08(void);
extern void func_10AA20(int);
extern unsigned char D_00153251;
extern char *D_0015332C;

void func_0B7AD0(void)
{
    long long value = func_10A6C0();
    func_10A6D8(0);
    if (D_00153251 != 0) {
        func_0B2C08();
    }
    func_10A6D8(value);
    func_10AA20(*(int *)(D_0015332C + 0x3c));
}
