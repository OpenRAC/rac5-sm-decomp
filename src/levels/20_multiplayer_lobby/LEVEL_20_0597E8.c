extern void func_058288(void);
extern void func_059140(void);
extern void func_0588C8(void);
extern int func_057BD8(void *key);
extern int func_0590D8(void *key);
extern int func_058B10(void *key);

int func_0597E8(void *key, int target)
{
    if (target == (int)(void *)func_058288) {
        return func_057BD8(key);
    }
    if (target == (int)(void *)func_059140) {
        return func_0590D8(key);
    }
    if (target == (int)(void *)func_0588C8) {
        return func_058B10(key);
    }
    return 0;
}
