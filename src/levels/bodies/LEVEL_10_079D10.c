extern void func_075148(void);
extern void func_079608(void);
extern void func_0758A0(void);
extern void func_074A20(void *object, int value);
extern void func_0795C0(void *object, int value);
extern void func_075A58(void *object, int value);

void func_079D10(void *object, int value, int target)
{
    if (target == (int)(void *)func_075148) {
        func_074A20(object, value);
    } else if (target == (int)(void *)func_079608) {
        func_0795C0(object, value);
    } else if (target == (int)(void *)func_0758A0) {
        func_075A58(object, value);
    }
}
