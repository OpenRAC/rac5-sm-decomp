extern int *func_18A648(void);
extern void func_18B4C8(void) __attribute__((noreturn));

void func_18B7B8(void)
{
    int *slot = func_18A648();
    int target = *slot;
    if (target == 0)
        func_18B4C8();
    *(int *)(target + 0x14) = 0;
}
