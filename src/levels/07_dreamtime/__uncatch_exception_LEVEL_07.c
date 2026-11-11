extern int *func_1FF8D8(void);
extern void func_200758(void) __attribute__((noreturn));

void __uncatch_exception(void)
{
    int *slot = func_1FF8D8();
    int target = *slot;
    if (target == 0)
        func_200758();
    *(int *)(target + 0x14) = 0;
}
