extern void func_075148(void);
extern void func_079608(void);
extern void func_0758A0(void);
extern long long func_074A98(void);
extern long long func_0795A0(void);
extern long long func_075AA0(void);

long long func_079CA8(long long unused, int target)
{
    if (target == (int)(void *)func_075148) {
        return func_074A98();
    }
    if (target == (int)(void *)func_079608) {
        return func_0795A0();
    }
    if (target == (int)(void *)func_0758A0) {
        return func_075AA0();
    }
    return 0;
}
