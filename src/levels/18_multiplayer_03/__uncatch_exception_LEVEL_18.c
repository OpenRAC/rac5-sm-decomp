extern int *func_1984A0(void);
extern void func_199320(void) __attribute__((noreturn));

void __uncatch_exception(void)
{
    int *slot = func_1984A0();
    int target = *slot;
    if (target == 0)
        func_199320();
    *(int *)(target + 0x14) = 0;
}
