extern void func_06EAC8(void);
extern void func_0736D0(void);
extern void func_06F1F8(void);
extern long long func_06E418(void);
extern long long func_073668(void);
extern long long func_06F3F8(void);

long long func_073D70(long long unused, int target)
{
    if (target == (int)(void *)func_06EAC8) {
        return func_06E418();
    }
    if (target == (int)(void *)func_0736D0) {
        return func_073668();
    }
    if (target == (int)(void *)func_06F1F8) {
        return func_06F3F8();
    }
    return 0;
}
