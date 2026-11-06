extern void func_070978(void);
extern void func_0723F0(void);
extern void func_0710A8(void);
extern long long func_0702C8(void);
extern long long func_072388(void);
extern long long func_0712A8(void);

long long func_072A90(long long unused, int target)
{
    if (target == (int)(void *)func_070978) {
        return func_0702C8();
    }
    if (target == (int)(void *)func_0723F0) {
        return func_072388();
    }
    if (target == (int)(void *)func_0710A8) {
        return func_0712A8();
    }
    return 0;
}
