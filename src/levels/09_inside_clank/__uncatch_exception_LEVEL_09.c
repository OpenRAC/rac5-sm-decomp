extern int *func_1D53C8(void);
extern void func_1D6248(void) __attribute__((noreturn));

void __uncatch_exception(void)
{
    int *slot = func_1D53C8();
    int target = *slot;
    if (target == 0)
        func_1D6248();
    *(int *)(target + 0x14) = 0;
}
