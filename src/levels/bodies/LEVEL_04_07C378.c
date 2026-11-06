extern void func_077068(void);
extern void func_07BC70(void);
extern void func_077798(void);
extern void func_076940(void);
extern void func_07BC28(void);
extern void func_077950(void);

void func_07C378(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_077068) {
        func_076940();
    } else if (target == (int)(void *)func_07BC70) {
        func_07BC28();
    } else if (target == (int)(void *)func_077798) {
        func_077950();
    }
}
