extern void func_076CC0(void);
extern void func_07B158(void);
extern void func_0773F0(void);
extern void func_076598(void *object, int value);
extern void func_07B110(void *object, int value);
extern void func_0775A8(void *object, int value);

void func_07B860(void *object, int value, int target)
{
    if (target == (int)(void *)func_076CC0) {
        func_076598(object, value);
    } else if (target == (int)(void *)func_07B158) {
        func_07B110(object, value);
    } else if (target == (int)(void *)func_0773F0) {
        func_0775A8(object, value);
    }
}
