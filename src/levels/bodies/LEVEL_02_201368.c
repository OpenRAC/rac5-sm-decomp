extern int *func_2001F8(void);
extern void func_201078(void) __attribute__((noreturn));

void func_201368(void)
{
    int *slot = func_2001F8();
    int target = *slot;
    if (target == 0)
        func_201078();
    *(int *)(target + 0x14) = 0;
}
