extern int *func_197000(void);
extern void func_197E80(void) __attribute__((noreturn));

void __uncatch_exception(void)
{
    int *slot = func_197000();
    int target = *slot;
    if (target == 0)
        func_197E80();
    *(int *)(target + 0x14) = 0;
}
