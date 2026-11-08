extern void func_05D100(void);
extern void func_05E010(void);
extern void func_05D6C8(void);
extern void func_05C9D8(void *object, int value);
extern void func_05DFC8(void *object, int value);
extern void func_05D880(void *object, int value);

void func_05E718(void *object, int value, int target)
{
    if (target == (int)(void *)func_05D100) {
        func_05C9D8(object, value);
    } else if (target == (int)(void *)func_05E010) {
        func_05DFC8(object, value);
    } else if (target == (int)(void *)func_05D6C8) {
        func_05D880(object, value);
    }
}
