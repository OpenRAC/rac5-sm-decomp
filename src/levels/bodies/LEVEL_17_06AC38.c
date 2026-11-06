extern void func_066150(void);
extern void func_06A590(void);
extern void func_0668F8(void);
extern long long func_065AA0(void);
extern long long func_06A528(void);
extern long long func_066B40(void);

long long func_06AC38(long long unused, int target)
{
    if (target == (int)(void *)func_066150) {
        return func_065AA0();
    }
    if (target == (int)(void *)func_06A590) {
        return func_06A528();
    }
    if (target == (int)(void *)func_0668F8) {
        return func_066B40();
    }
    return 0;
}
