extern void func_058288(void);
extern void func_059140(void);
extern void func_0588C8(void);
extern long long func_057BD8(void);
extern long long func_0590D8(void);
extern long long func_058B10(void);

long long func_0597E8(long long unused, int target)
{
    if (target == (int)(void *)func_058288) {
        return func_057BD8();
    }
    if (target == (int)(void *)func_059140) {
        return func_0590D8();
    }
    if (target == (int)(void *)func_0588C8) {
        return func_058B10();
    }
    return 0;
}
