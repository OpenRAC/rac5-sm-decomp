extern int *func_1981C8(void);
extern void func_199048(void) __attribute__((noreturn));

void func_199338(void)
{
    int *slot = func_1981C8();
    int target = *slot;
    if (target == 0)
        func_199048();
    *(int *)(target + 0x14) = 0;
}
