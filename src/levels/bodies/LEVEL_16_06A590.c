extern void func_065990(void);
extern void func_069EE8(void);
extern void func_066138(void);
extern long long func_0652E0(void);
extern long long func_069E80(void);
extern long long func_066380(void);

long long func_06A590(long long unused, int target)
{
    if (target == (int)(void *)func_065990) {
        return func_0652E0();
    }
    if (target == (int)(void *)func_069EE8) {
        return func_069E80();
    }
    if (target == (int)(void *)func_066138) {
        return func_066380();
    }
    return 0;
}
