extern void func_066150(void);
extern void func_06A590(void);
extern void func_0668F8(void);
extern void func_065A28(void *object, int value);
extern void func_06A548(void *object, int value);
extern void func_066AF8(void *object, int value);

void func_06ACA0(void *object, int value, int target)
{
    if (target == (int)(void *)func_066150) {
        func_065A28(object, value);
    } else if (target == (int)(void *)func_06A590) {
        func_06A548(object, value);
    } else if (target == (int)(void *)func_0668F8) {
        func_066AF8(object, value);
    }
}
