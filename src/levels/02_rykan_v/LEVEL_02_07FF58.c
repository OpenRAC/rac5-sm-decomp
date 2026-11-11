extern void func_07B390(void);
extern void func_07F850(void);
extern void func_07BAE8(void);
extern void func_07AC68(void *object, int value);
extern void func_07F808(void *object, int value);
extern void func_07BCA0(void *object, int value);

void func_07FF58(void *object, int value, int target)
{
    if (target == (int)(void *)func_07B390) {
        func_07AC68(object, value);
    } else if (target == (int)(void *)func_07F850) {
        func_07F808(object, value);
    } else if (target == (int)(void *)func_07BAE8) {
        func_07BCA0(object, value);
    }
}
