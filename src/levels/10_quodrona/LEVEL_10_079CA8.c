extern void func_075148(void);
extern void func_079608(void);
extern void func_0758A0(void);
extern int func_074A98(void *key);
extern int func_0795A0(void *key);
extern int func_075AA0(void *key);

int func_079CA8(void *key, int target)
{
    if (target == (int)(void *)func_075148) {
        return func_074A98(key);
    }
    if (target == (int)(void *)func_079608) {
        return func_0795A0(key);
    }
    if (target == (int)(void *)func_0758A0) {
        return func_075AA0(key);
    }
    return 0;
}
