extern void func_074AA8(void);
extern void func_078F68(void);
extern void func_075200(void);
extern long long func_0743F8(void);
extern long long func_078F00(void);
extern long long func_075400(void);

long long func_079608(long long unused, int target)
{
    if (target == (int)(void *)func_074AA8) {
        return func_0743F8();
    }
    if (target == (int)(void *)func_078F68) {
        return func_078F00();
    }
    if (target == (int)(void *)func_075200) {
        return func_075400();
    }
    return 0;
}
