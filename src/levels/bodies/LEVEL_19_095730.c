extern int func_0951C0(void);
extern void func_095130(void *, long long);
extern void func_095550(void);
extern void func_095778(long long);
extern void *D_001A5A30;

void func_095730(long long value)
{
    if (func_0951C0() != 0) {
        func_095130(D_001A5A30, value);
        func_095550();
        func_095778(value);
    }
}
