extern void func_073AE0(void);
extern void func_075580(void);
extern void func_074238(void);
extern void func_0733B8(void *object, int value);
extern void func_075538(void *object, int value);
extern void func_0743F0(void *object, int value);

void func_075C88(void *object, int value, int target)
{
    if (target == (int)(void *)func_073AE0) {
        func_0733B8(object, value);
    } else if (target == (int)(void *)func_075580) {
        func_075538(object, value);
    } else if (target == (int)(void *)func_074238) {
        func_0743F0(object, value);
    }
}
