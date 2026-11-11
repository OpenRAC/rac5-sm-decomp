extern int *func_204720(void);
extern void func_2055A0(void) __attribute__((noreturn));

void __uncatch_exception(void)
{
    int *slot = func_204720();
    int target = *slot;
    if (target == 0)
        func_2055A0();
    *(int *)(target + 0x14) = 0;
}
