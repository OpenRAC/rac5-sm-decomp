extern void func_06E7C8(void);
extern void func_070240(void);
extern void func_06EEF8(void);
extern void func_06E0A0(void *object, int value);
extern void func_0701F8(void *object, int value);
extern void func_06F0B0(void *object, int value);

void func_070948(void *object, int value, int target)
{
    if (target == (int)(void *)func_06E7C8) {
        func_06E0A0(object, value);
    } else if (target == (int)(void *)func_070240) {
        func_0701F8(object, value);
    } else if (target == (int)(void *)func_06EEF8) {
        func_06F0B0(object, value);
    }
}
