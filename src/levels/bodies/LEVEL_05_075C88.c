extern void func_073AE0(void);
extern void func_075580(void);
extern void func_074238(void);
extern void func_0733B8(void);
extern void func_075538(void);
extern void func_0743F0(void);

void func_075C88(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_073AE0) {
        func_0733B8();
    } else if (target == (int)(void *)func_075580) {
        func_075538();
    } else if (target == (int)(void *)func_074238) {
        func_0743F0();
    }
}
