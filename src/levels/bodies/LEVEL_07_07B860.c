extern void func_076CC0(void);
extern void func_07B158(void);
extern void func_0773F0(void);
extern void func_076598(void);
extern void func_07B110(void);
extern void func_0775A8(void);

void func_07B860(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_076CC0) {
        func_076598();
    } else if (target == (int)(void *)func_07B158) {
        func_07B110();
    } else if (target == (int)(void *)func_0773F0) {
        func_0775A8();
    }
}
