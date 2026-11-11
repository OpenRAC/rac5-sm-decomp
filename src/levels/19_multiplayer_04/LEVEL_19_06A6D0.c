extern void func_065B80(void);
extern void func_069FC0(void);
extern void func_066328(void);
extern void func_065458(void *object, int value);
extern void func_069F78(void *object, int value);
extern void func_066528(void *object, int value);

void func_06A6D0(void *object, int value, int target)
{
    if (target == (int)(void *)func_065B80) {
        func_065458(object, value);
    } else if (target == (int)(void *)func_069FC0) {
        func_069F78(object, value);
    } else if (target == (int)(void *)func_066328) {
        func_066528(object, value);
    }
}
