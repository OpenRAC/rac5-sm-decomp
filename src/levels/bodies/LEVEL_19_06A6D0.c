extern void func_065B80(void);
extern void func_069FC0(void);
extern void func_066328(void);
extern void func_065458(void);
extern void func_069F78(void);
extern void func_066528(void);

void func_06A6D0(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_065B80) {
        func_065458();
    } else if (target == (int)(void *)func_069FC0) {
        func_069F78();
    } else if (target == (int)(void *)func_066328) {
        func_066528();
    }
}
