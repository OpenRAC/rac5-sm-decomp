extern void func_0651E0(void);
extern void func_069620(void);
extern void func_065988(void);
extern void func_064AB8(void *object, int value);
extern void func_0695D8(void *object, int value);
extern void func_065B88(void *object, int value);

void func_069D30(void *object, int value, int target)
{
    if (target == (int)(void *)func_0651E0) {
        func_064AB8(object, value);
    } else if (target == (int)(void *)func_069620) {
        func_0695D8(object, value);
    } else if (target == (int)(void *)func_065988) {
        func_065B88(object, value);
    }
}
