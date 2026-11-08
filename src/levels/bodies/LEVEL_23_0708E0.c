extern void func_06E7C8(void);
extern void func_070240(void);
extern void func_06EEF8(void);
extern int func_06E118(void *key);
extern int func_0701D8(void *key);
extern int func_06F0F8(void *key);

int func_0708E0(void *key, int target)
{
    if (target == (int)(void *)func_06E7C8) {
        return func_06E118(key);
    }
    if (target == (int)(void *)func_070240) {
        return func_0701D8(key);
    }
    if (target == (int)(void *)func_06EEF8) {
        return func_06F0F8(key);
    }
    return 0;
}
