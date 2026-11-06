extern int func_0A89B8(void);
extern void func_0A8670(void *, long long);
extern void func_0A93E8(void);
extern void func_0A9610(long long);
extern void *D_0020ABE0;

void func_0A95C8(long long value)
{
    if (func_0A89B8() != 0) {
        func_0A8670(D_0020ABE0, value);
        func_0A93E8();
        func_0A9610(value);
    }
}
