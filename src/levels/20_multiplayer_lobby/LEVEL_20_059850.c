extern void func_058288(void);
extern void func_059140(void);
extern void func_0588C8(void);
extern void func_057B60(void *object, int value);
extern void func_0590F8(void *object, int value);
extern void func_058AC8(void *object, int value);

void func_059850(void *object, int value, int target)
{
    if (target == (int)(void *)func_058288) {
        func_057B60(object, value);
    } else if (target == (int)(void *)func_059140) {
        func_0590F8(object, value);
    } else if (target == (int)(void *)func_0588C8) {
        func_058AC8(object, value);
    }
}
