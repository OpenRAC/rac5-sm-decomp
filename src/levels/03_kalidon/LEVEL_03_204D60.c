extern int *func_203BF0(void);
extern void func_204A70(void) __attribute__((noreturn));

void func_204D60(void)
{
    int *slot = func_203BF0();
    int target = *slot;
    if (target == 0)
        func_204A70();
    *(int *)(target + 0x14) = 0;
}
