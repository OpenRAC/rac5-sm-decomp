extern void func_065B80(void);
extern void func_069FC0(void);
extern void func_066328(void);
extern long long func_0654D0(void);
extern long long func_069F58(void);
extern long long func_066570(void);

long long func_06A668(long long unused, int target)
{
    if (target == (int)(void *)func_065B80) {
        return func_0654D0();
    }
    if (target == (int)(void *)func_069FC0) {
        return func_069F58();
    }
    if (target == (int)(void *)func_066328) {
        return func_066570();
    }
    return 0;
}
