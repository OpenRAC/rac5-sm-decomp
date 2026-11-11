extern int func_094940(void);
extern void func_0948B0(void *, long long);
extern void func_094CD0(void);
extern void func_094EF8(long long);
extern void *D_001A5D30;

void func_094EB0(long long value)
{
    if (func_094940() != 0) {
        func_0948B0(D_001A5D30, value);
        func_094CD0();
        func_094EF8(value);
    }
}
