extern void func_0715D8(void);
extern void func_075A70(void);
extern void func_071D08(void);
extern long long func_070F28(void);
extern long long func_075A08(void);
extern long long func_071F08(void);

long long func_076110(long long unused, int target)
{
    if (target == (int)(void *)func_0715D8) {
        return func_070F28();
    }
    if (target == (int)(void *)func_075A70) {
        return func_075A08();
    }
    if (target == (int)(void *)func_071D08) {
        return func_071F08();
    }
    return 0;
}
