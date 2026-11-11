extern int *func_1DA4A8(void);
extern void func_1DB328(void) __attribute__((noreturn));

void __uncatch_exception(void)
{
    int *slot = func_1DA4A8();
    int target = *slot;
    if (target == 0)
        func_1DB328();
    *(int *)(target + 0x14) = 0;
}
