extern int *func_1BE9A0(void);
extern void func_1BF820(void) __attribute__((noreturn));

void func_1BFB10(void)
{
    int *slot = func_1BE9A0();
    int target = *slot;
    if (target == 0)
        func_1BF820();
    *(int *)(target + 0x14) = 0;
}
