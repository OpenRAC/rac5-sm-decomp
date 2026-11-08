extern void func_0651E0(void);
extern void func_069620(void);
extern void func_065988(void);
extern int func_064B30(void *key);
extern int func_0695B8(void *key);
extern int func_065BD0(void *key);

int func_069CC8(void *key, int target)
{
    if (target == (int)(void *)func_0651E0) {
        return func_064B30(key);
    }
    if (target == (int)(void *)func_069620) {
        return func_0695B8(key);
    }
    if (target == (int)(void *)func_065988) {
        return func_065BD0(key);
    }
    return 0;
}
