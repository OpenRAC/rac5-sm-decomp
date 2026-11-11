extern void func_077068(void);
extern void func_07BC70(void);
extern void func_077798(void);
extern void func_076940(void *object, int value);
extern void func_07BC28(void *object, int value);
extern void func_077950(void *object, int value);

void func_07C378(void *object, int value, int target)
{
    if (target == (int)(void *)func_077068) {
        func_076940(object, value);
    } else if (target == (int)(void *)func_07BC70) {
        func_07BC28(object, value);
    } else if (target == (int)(void *)func_077798) {
        func_077950(object, value);
    }
}
