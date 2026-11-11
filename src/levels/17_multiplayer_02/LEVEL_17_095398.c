extern int func_094E28(void);
extern void func_094D98(void *, long long);
extern void func_0951B8(void);
extern void func_0953E0(long long);
extern void *D_00197EB0;

void func_095398(long long value)
{
    if (func_094E28() != 0) {
        func_094D98(D_00197EB0, value);
        func_0951B8();
        func_0953E0(value);
    }
}
