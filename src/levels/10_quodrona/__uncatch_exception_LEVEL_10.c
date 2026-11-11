extern int *func_1F45B8(void);
extern void func_1F5438(void) __attribute__((noreturn));

void __uncatch_exception(void)
{
    int *slot = func_1F45B8();
    int target = *slot;
    if (target == 0)
        func_1F5438();
    *(int *)(target + 0x14) = 0;
}
