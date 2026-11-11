extern int func_095930(void);
extern void func_0958A0(void *, long long);
extern void func_095CC0(void);
extern void func_095EE8(long long);
extern void *D_001A48B0;

void func_095EA0(long long value)
{
    if (func_095930() != 0) {
        func_0958A0(D_001A48B0, value);
        func_095CC0();
        func_095EE8(value);
    }
}
