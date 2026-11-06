extern void func_07BBC0(void);
extern void func_0807F0(void);
extern void func_07C318(void);
extern void func_07B498(void);
extern void func_0807A8(void);
extern void func_07C4D0(void);

void func_080EF8(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_07BBC0) {
        func_07B498();
    } else if (target == (int)(void *)func_0807F0) {
        func_0807A8();
    } else if (target == (int)(void *)func_07C318) {
        func_07C4D0();
    }
}
