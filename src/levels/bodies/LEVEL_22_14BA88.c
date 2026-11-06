extern int *func_14A918(void);
extern void func_14B798(void) __attribute__((noreturn));

void func_14BA88(void)
{
    int *slot = func_14A918();
    int target = *slot;
    if (target == 0)
        func_14B798();
    *(int *)(target + 0x14) = 0;
}
