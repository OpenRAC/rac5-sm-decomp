extern long long func_1395A0(void);
extern void func_1395B8(long long);
extern void func_0CB068(void);
extern void func_139900(int);
extern unsigned char D_00208B51;
extern char *D_00208C2C;

void func_0CFF30(void)
{
    long long value = func_1395A0();
    func_1395B8(0);
    if (D_00208B51 != 0) {
        func_0CB068();
    }
    func_1395B8(value);
    func_139900(*(int *)(D_00208C2C + 0x3c));
}
