extern void func_06EAC8(void);
extern void func_0736D0(void);
extern void func_06F1F8(void);
extern void func_06E3A0(void);
extern void func_073688(void);
extern void func_06F3B0(void);

void func_073DD8(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_06EAC8) {
        func_06E3A0();
    } else if (target == (int)(void *)func_0736D0) {
        func_073688();
    } else if (target == (int)(void *)func_06F1F8) {
        func_06F3B0();
    }
}
