extern int *func_1EB560(void);
extern void func_1EC3E0(void) __attribute__((noreturn));

void func_1EC6D0(void)
{
    int *slot = func_1EB560();
    int target = *slot;
    if (target == 0)
        func_1EC3E0();
    *(int *)(target + 0x14) = 0;
}
