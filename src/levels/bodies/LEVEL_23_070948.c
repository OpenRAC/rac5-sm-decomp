extern void func_06E7C8(void);
extern void func_070240(void);
extern void func_06EEF8(void);
extern void func_06E0A0(void);
extern void func_0701F8(void);
extern void func_06F0B0(void);

void func_070948(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_06E7C8) {
        func_06E0A0();
    } else if (target == (int)(void *)func_070240) {
        func_0701F8();
    } else if (target == (int)(void *)func_06EEF8) {
        func_06F0B0();
    }
}
