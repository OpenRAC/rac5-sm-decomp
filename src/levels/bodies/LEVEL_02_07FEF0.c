extern void func_07B390(void);
extern void func_07F850(void);
extern void func_07BAE8(void);
extern long long func_07ACE0(void);
extern long long func_07F7E8(void);
extern long long func_07BCE8(void);

long long func_07FEF0(long long unused, int target)
{
    if (target == (int)(void *)func_07B390) {
        return func_07ACE0();
    }
    if (target == (int)(void *)func_07F850) {
        return func_07F7E8();
    }
    if (target == (int)(void *)func_07BAE8) {
        return func_07BCE8();
    }
    return 0;
}
