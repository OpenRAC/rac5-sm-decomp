extern void func_065990(void);
extern void func_069EE8(void);
extern void func_066138(void);
extern int func_0652E0(void *key);
extern int func_069E80(void *key);
extern int func_066380(void *key);

int func_06A590(void *key, int target)
{
    if (target == (int)(void *)func_065990) {
        return func_0652E0(key);
    }
    if (target == (int)(void *)func_069EE8) {
        return func_069E80(key);
    }
    if (target == (int)(void *)func_066138) {
        return func_066380(key);
    }
    return 0;
}
