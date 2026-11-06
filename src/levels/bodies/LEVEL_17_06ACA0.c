extern void func_066150(void);
extern void func_06A590(void);
extern void func_0668F8(void);
extern void func_065A28(void);
extern void func_06A548(void);
extern void func_066AF8(void);

void func_06ACA0(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_066150) {
        func_065A28();
    } else if (target == (int)(void *)func_06A590) {
        func_06A548();
    } else if (target == (int)(void *)func_0668F8) {
        func_066AF8();
    }
}
