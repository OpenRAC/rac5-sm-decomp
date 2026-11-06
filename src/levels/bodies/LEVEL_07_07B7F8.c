extern void func_076CC0(void);
extern void func_07B158(void);
extern void func_0773F0(void);
extern long long func_076610(void);
extern long long func_07B0F0(void);
extern long long func_0775F0(void);

long long func_07B7F8(long long unused, int target)
{
    if (target == (int)(void *)func_076CC0) {
        return func_076610();
    }
    if (target == (int)(void *)func_07B158) {
        return func_07B0F0();
    }
    if (target == (int)(void *)func_0773F0) {
        return func_0775F0();
    }
    return 0;
}
