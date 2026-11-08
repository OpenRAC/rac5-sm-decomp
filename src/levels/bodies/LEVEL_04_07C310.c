extern void func_077068(void);
extern void func_07BC70(void);
extern void func_077798(void);
extern int func_0769B8(void *key);
extern int func_07BC08(void *key);
extern int func_077998(void *key);

int func_07C310(void *key, int target)
{
    if (target == (int)(void *)func_077068) {
        return func_0769B8(key);
    }
    if (target == (int)(void *)func_07BC70) {
        return func_07BC08(key);
    }
    if (target == (int)(void *)func_077798) {
        return func_077998(key);
    }
    return 0;
}
