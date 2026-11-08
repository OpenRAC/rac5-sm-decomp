extern void func_06EAC8(void);
extern void func_0736D0(void);
extern void func_06F1F8(void);
extern int func_06E418(void *key);
extern int func_073668(void *key);
extern int func_06F3F8(void *key);

int func_073D70(void *key, int target)
{
    if (target == (int)(void *)func_06EAC8) {
        return func_06E418(key);
    }
    if (target == (int)(void *)func_0736D0) {
        return func_073668(key);
    }
    if (target == (int)(void *)func_06F1F8) {
        return func_06F3F8(key);
    }
    return 0;
}
