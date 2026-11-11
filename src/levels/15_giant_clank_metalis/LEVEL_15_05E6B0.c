extern void func_05D100(void);
extern void func_05E010(void);
extern void func_05D6C8(void);
extern int func_05CA50(void *key);
extern int func_05DFA8(void *key);
extern int func_05D8C8(void *key);

int func_05E6B0(void *key, int target)
{
    if (target == (int)(void *)func_05D100) {
        return func_05CA50(key);
    }
    if (target == (int)(void *)func_05E010) {
        return func_05DFA8(key);
    }
    if (target == (int)(void *)func_05D6C8) {
        return func_05D8C8(key);
    }
    return 0;
}
