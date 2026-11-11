extern void func_0715D8(void);
extern void func_075A70(void);
extern void func_071D08(void);
extern void func_070EB0(void *object, int value);
extern void func_075A28(void *object, int value);
extern void func_071EC0(void *object, int value);

void func_076178(void *object, int value, int target)
{
    if (target == (int)(void *)func_0715D8) {
        func_070EB0(object, value);
    } else if (target == (int)(void *)func_075A70) {
        func_075A28(object, value);
    } else if (target == (int)(void *)func_071D08) {
        func_071EC0(object, value);
    }
}
