extern void func_06A338(void);
extern void func_06B928(void);
extern void func_06AA68(void);
extern int func_069C88(void *key);
extern int func_06B8C0(void *key);
extern int func_06AC68(void *key);

int func_06BFC8(void *key, int target)
{
    if (target == (int)(void *)func_06A338) {
        return func_069C88(key);
    }
    if (target == (int)(void *)func_06B928) {
        return func_06B8C0(key);
    }
    if (target == (int)(void *)func_06AA68) {
        return func_06AC68(key);
    }
    return 0;
}
