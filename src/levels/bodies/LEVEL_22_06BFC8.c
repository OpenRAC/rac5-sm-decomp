extern void func_06A338(void);
extern void func_06B928(void);
extern void func_06AA68(void);
extern long long func_069C88(void);
extern long long func_06B8C0(void);
extern long long func_06AC68(void);

long long func_06BFC8(long long unused, int target)
{
    if (target == (int)(void *)func_06A338) {
        return func_069C88();
    }
    if (target == (int)(void *)func_06B928) {
        return func_06B8C0();
    }
    if (target == (int)(void *)func_06AA68) {
        return func_06AC68();
    }
    return 0;
}
