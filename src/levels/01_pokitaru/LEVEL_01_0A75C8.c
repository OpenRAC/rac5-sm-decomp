extern int func_0A69B8(void);
extern void func_0A6670(void *, long long);
extern void func_0A73E8(void);
extern void func_0A7610(long long);
extern void *D_001F68E0;

void func_0A75C8(long long value)
{
    if (func_0A69B8() != 0) {
        func_0A6670(D_001F68E0, value);
        func_0A73E8();
        func_0A7610(value);
    }
}
