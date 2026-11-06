extern void func_05D100(void);
extern void func_05E010(void);
extern void func_05D6C8(void);
extern long long func_05CA50(void);
extern long long func_05DFA8(void);
extern long long func_05D8C8(void);

long long func_05E6B0(long long unused, int target)
{
    if (target == (int)(void *)func_05D100) {
        return func_05CA50();
    }
    if (target == (int)(void *)func_05E010) {
        return func_05DFA8();
    }
    if (target == (int)(void *)func_05D6C8) {
        return func_05D8C8();
    }
    return 0;
}
