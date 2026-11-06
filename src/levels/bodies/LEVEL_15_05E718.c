extern void func_05D100(void);
extern void func_05E010(void);
extern void func_05D6C8(void);
extern void func_05C9D8(void);
extern void func_05DFC8(void);
extern void func_05D880(void);

void func_05E718(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_05D100) {
        func_05C9D8();
    } else if (target == (int)(void *)func_05E010) {
        func_05DFC8();
    } else if (target == (int)(void *)func_05D6C8) {
        func_05D880();
    }
}
