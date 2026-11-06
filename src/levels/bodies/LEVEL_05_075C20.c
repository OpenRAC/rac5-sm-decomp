extern void func_073AE0(void);
extern void func_075580(void);
extern void func_074238(void);
extern long long func_073430(void);
extern long long func_075518(void);
extern long long func_074438(void);

long long func_075C20(long long unused, int target)
{
    if (target == (int)(void *)func_073AE0) {
        return func_073430();
    }
    if (target == (int)(void *)func_075580) {
        return func_075518();
    }
    if (target == (int)(void *)func_074238) {
        return func_074438();
    }
    return 0;
}
