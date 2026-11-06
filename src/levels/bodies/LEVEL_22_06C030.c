extern void func_06A338(void);
extern void func_06B928(void);
extern void func_06AA68(void);
extern void func_069C10(void);
extern void func_06B8E0(void);
extern void func_06AC20(void);

void func_06C030(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_06A338) {
        func_069C10();
    } else if (target == (int)(void *)func_06B928) {
        func_06B8E0();
    } else if (target == (int)(void *)func_06AA68) {
        func_06AC20();
    }
}
