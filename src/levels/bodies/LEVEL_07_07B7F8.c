extern void func_076CC0(void);
extern void func_07B158(void);
extern void func_0773F0(void);
extern int func_076610(void *key);
extern int func_07B0F0(void *key);
extern int func_0775F0(void *key);

int func_07B7F8(void *key, int target)
{
    if (target == (int)(void *)func_076CC0) {
        return func_076610(key);
    }
    if (target == (int)(void *)func_07B158) {
        return func_07B0F0(key);
    }
    if (target == (int)(void *)func_0773F0) {
        return func_0775F0(key);
    }
    return 0;
}
