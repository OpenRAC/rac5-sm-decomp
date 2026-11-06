extern void func_070978(void);
extern void func_0723F0(void);
extern void func_0710A8(void);
extern void func_070250(void);
extern void func_0723A8(void);
extern void func_071260(void);

void func_072AF8(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_070978) {
        func_070250();
    } else if (target == (int)(void *)func_0723F0) {
        func_0723A8();
    } else if (target == (int)(void *)func_0710A8) {
        func_071260();
    }
}
