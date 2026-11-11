extern void func_070978(void);
extern void func_0723F0(void);
extern void func_0710A8(void);
extern void func_070250(void *object, int value);
extern void func_0723A8(void *object, int value);
extern void func_071260(void *object, int value);

void func_072AF8(void *object, int value, int target)
{
    if (target == (int)(void *)func_070978) {
        func_070250(object, value);
    } else if (target == (int)(void *)func_0723F0) {
        func_0723A8(object, value);
    } else if (target == (int)(void *)func_0710A8) {
        func_071260(object, value);
    }
}
