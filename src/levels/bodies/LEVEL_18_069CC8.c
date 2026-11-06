extern void func_0651E0(void);
extern void func_069620(void);
extern void func_065988(void);
extern long long func_064B30(void);
extern long long func_0695B8(void);
extern long long func_065BD0(void);

long long func_069CC8(long long unused, int target)
{
    if (target == (int)(void *)func_0651E0) {
        return func_064B30();
    }
    if (target == (int)(void *)func_069620) {
        return func_0695B8();
    }
    if (target == (int)(void *)func_065988) {
        return func_065BD0();
    }
    return 0;
}
