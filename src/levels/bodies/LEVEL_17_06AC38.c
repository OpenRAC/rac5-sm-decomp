extern void func_066150(void);
extern void func_06A590(void);
extern void func_0668F8(void);
extern int func_065AA0(void *key);
extern int func_06A528(void *key);
extern int func_066B40(void *key);

int func_06AC38(void *key, int target)
{
    if (target == (int)(void *)func_066150) {
        return func_065AA0(key);
    }
    if (target == (int)(void *)func_06A590) {
        return func_06A528(key);
    }
    if (target == (int)(void *)func_0668F8) {
        return func_066B40(key);
    }
    return 0;
}
