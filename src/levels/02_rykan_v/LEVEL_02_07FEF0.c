extern void func_07B390(void);
extern void func_07F850(void);
extern void func_07BAE8(void);
extern int func_07ACE0(void *key);
extern int func_07F7E8(void *key);
extern int func_07BCE8(void *key);

int func_07FEF0(void *key, int target)
{
    if (target == (int)(void *)func_07B390) {
        return func_07ACE0(key);
    }
    if (target == (int)(void *)func_07F850) {
        return func_07F7E8(key);
    }
    if (target == (int)(void *)func_07BAE8) {
        return func_07BCE8(key);
    }
    return 0;
}
