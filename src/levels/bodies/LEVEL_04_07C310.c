extern void func_077068(void);
extern void func_07BC70(void);
extern void func_077798(void);
extern long long func_0769B8(void);
extern long long func_07BC08(void);
extern long long func_077998(void);

long long func_07C310(long long unused, int target)
{
    if (target == (int)(void *)func_077068) {
        return func_0769B8();
    }
    if (target == (int)(void *)func_07BC70) {
        return func_07BC08();
    }
    if (target == (int)(void *)func_077798) {
        return func_077998();
    }
    return 0;
}
