extern int func_09D728(void);
extern void func_09D3E0(void *, long long);
extern void func_09E158(void);
extern void func_09E380(long long);
extern void *D_001C9CE0;

void func_09E338(long long value)
{
    if (func_09D728() != 0) {
        func_09D3E0(D_001C9CE0, value);
        func_09E158();
        func_09E380(value);
    }
}
