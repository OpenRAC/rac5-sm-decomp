extern int func_0A7AD0(void);
extern void func_0A7788(void *, void *);
extern void func_0A8500(void);
extern void func_0A8728(void *);
extern void *D_001FF8E0;

void func_0A86E0(void *value)
{
    if (func_0A7AD0() != 0) {
        func_0A7788(D_001FF8E0, value);
        func_0A8500();
        func_0A8728(value);
    }
}
