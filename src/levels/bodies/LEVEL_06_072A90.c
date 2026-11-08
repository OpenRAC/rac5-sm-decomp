extern void func_070978(void);
extern void func_0723F0(void);
extern void func_0710A8(void);
extern int func_0702C8(void *key);
extern int func_072388(void *key);
extern int func_0712A8(void *key);

int func_072A90(void *key, int target)
{
    if (target == (int)(void *)func_070978) {
        return func_0702C8(key);
    }
    if (target == (int)(void *)func_0723F0) {
        return func_072388(key);
    }
    if (target == (int)(void *)func_0710A8) {
        return func_0712A8(key);
    }
    return 0;
}
