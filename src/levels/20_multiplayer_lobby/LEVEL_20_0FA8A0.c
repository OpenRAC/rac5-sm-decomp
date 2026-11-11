extern int *func_0F9730(void);
extern void func_0FA5B0(void) __attribute__((noreturn));

void func_0FA8A0(void)
{
    int *slot = func_0F9730();
    int target = *slot;
    if (target == 0)
        func_0FA5B0();
    *(int *)(target + 0x14) = 0;
}
