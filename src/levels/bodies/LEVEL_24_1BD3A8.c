extern int *func_1BC238(void);
extern void func_1BD0B8(void) __attribute__((noreturn));

void func_1BD3A8(void)
{
    int *slot = func_1BC238();
    int target = *slot;
    if (target == 0)
        func_1BD0B8();
    *(int *)(target + 0x14) = 0;
}
