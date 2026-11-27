extern long long func_087280(void);
extern void func_086F38(void *, void *);
extern void func_087CB0(void);
extern void func_087ED8(void *);
extern void *D_0014B560;

void func_087E90(void *value)
{
    if (func_087280() != 0) {
        func_086F38(D_0014B560, value);
        func_087CB0();
        func_087ED8(value);
    }
}
