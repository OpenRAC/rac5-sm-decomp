extern void func_065990(void);
extern void func_069EE8(void);
extern void func_066138(void);
extern void func_065268(void *object, int value);
extern void func_069EA0(void *object, int value);
extern void func_066338(void *object, int value);

void func_06A5F8(void *object, int value, int target)
{
    if (target == (int)(void *)func_065990) {
        func_065268(object, value);
    } else if (target == (int)(void *)func_069EE8) {
        func_069EA0(object, value);
    } else if (target == (int)(void *)func_066138) {
        func_066338(object, value);
    }
}
