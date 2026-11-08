extern void func_06A338(void);
extern void func_06B928(void);
extern void func_06AA68(void);
extern void func_069C10(void *object, int value);
extern void func_06B8E0(void *object, int value);
extern void func_06AC20(void *object, int value);

void func_06C030(void *object, int value, int target)
{
    if (target == (int)(void *)func_06A338) {
        func_069C10(object, value);
    } else if (target == (int)(void *)func_06B928) {
        func_06B8E0(object, value);
    } else if (target == (int)(void *)func_06AA68) {
        func_06AC20(object, value);
    }
}
