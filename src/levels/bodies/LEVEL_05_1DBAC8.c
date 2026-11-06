extern int *func_1DA958(void);
extern void func_1DB7D8(void) __attribute__((noreturn));

void func_1DBAC8(void)
{
    int *slot = func_1DA958();
    int target = *slot;
    if (target == 0)
        func_1DB7D8();
    *(int *)(target + 0x14) = 0;
}
