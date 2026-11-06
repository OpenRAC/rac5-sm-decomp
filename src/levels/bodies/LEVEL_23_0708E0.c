extern void func_06E7C8(void);
extern void func_070240(void);
extern void func_06EEF8(void);
extern long long func_06E118(void);
extern long long func_0701D8(void);
extern long long func_06F0F8(void);

long long func_0708E0(long long unused, int target)
{
    if (target == (int)(void *)func_06E7C8) {
        return func_06E118();
    }
    if (target == (int)(void *)func_070240) {
        return func_0701D8();
    }
    if (target == (int)(void *)func_06EEF8) {
        return func_06F0F8();
    }
    return 0;
}
