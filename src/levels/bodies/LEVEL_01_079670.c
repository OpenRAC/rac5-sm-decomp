extern void func_074AA8(void);
extern void func_078F68(void);
extern void func_075200(void);
extern void func_074380(void *object, int value);
extern void func_078F20(void *object, int value);
extern void func_0753B8(void *object, int value);

void func_079670(void *object, int value, int target)
{
    if (target == (int)(void *)func_074AA8) {
        func_074380(object, value);
    } else if (target == (int)(void *)func_078F68) {
        func_078F20(object, value);
    } else if (target == (int)(void *)func_075200) {
        func_0753B8(object, value);
    }
}
