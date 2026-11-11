extern void func_06EAC8(void);
extern void func_0736D0(void);
extern void func_06F1F8(void);
extern void func_06E3A0(void *object, int value);
extern void func_073688(void *object, int value);
extern void func_06F3B0(void *object, int value);

void func_073DD8(void *object, int value, int target)
{
    if (target == (int)(void *)func_06EAC8) {
        func_06E3A0(object, value);
    } else if (target == (int)(void *)func_0736D0) {
        func_073688(object, value);
    } else if (target == (int)(void *)func_06F1F8) {
        func_06F3B0(object, value);
    }
}
