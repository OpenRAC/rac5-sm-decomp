extern void func_07BBC0(void);
extern void func_0807F0(void);
extern void func_07C318(void);
extern long long func_07B510(void);
extern long long func_080788(void);
extern long long func_07C518(void);

long long func_080E90(long long unused, int target)
{
    if (target == (int)(void *)func_07BBC0) {
        return func_07B510();
    }
    if (target == (int)(void *)func_0807F0) {
        return func_080788();
    }
    if (target == (int)(void *)func_07C318) {
        return func_07C518();
    }
    return 0;
}
