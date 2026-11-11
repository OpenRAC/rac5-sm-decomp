extern long long func_128CF0(void);
extern void func_128D08(long long);
extern void func_0BE020(void);
extern void func_129050(int);
extern unsigned char D_001C4B51;
extern char *D_001C4C2C;

void func_0C2EE8(void)
{
    long long value = func_128CF0();
    func_128D08(0);
    if (D_001C4B51 != 0) {
        func_0BE020();
    }
    func_128D08(value);
    func_129050(*(int *)(D_001C4C2C + 0x3c));
}
