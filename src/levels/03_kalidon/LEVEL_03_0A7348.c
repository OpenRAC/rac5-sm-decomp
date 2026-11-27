extern long long func_0A6738(void);
extern void func_0A63F0(void *, void *);
extern void func_0A7168(void);
extern void func_0A7390(void *);
extern void *D_0020EF60;

void func_0A7348(void *value)
{
    if (func_0A6738() != 0) {
        func_0A63F0(D_0020EF60, value);
        func_0A7168();
        func_0A7390(value);
    }
}
