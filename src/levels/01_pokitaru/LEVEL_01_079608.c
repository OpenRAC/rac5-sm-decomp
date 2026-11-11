extern void func_074AA8(void);
extern void func_078F68(void);
extern void func_075200(void);
extern int func_0743F8(void *key);
extern int func_078F00(void *key);
extern int func_075400(void *key);

int func_079608(void *key, int target)
{
    if (target == (int)(void *)func_074AA8)
        return func_0743F8(key);
    if (target == (int)(void *)func_078F68)
        return func_078F00(key);
    if (target == (int)(void *)func_075200)
        return func_075400(key);
    return 0;
}
