extern int *func_140258(void);
extern void func_1410D8(void) __attribute__((noreturn));

void func_1413C8(void)
{
    int *slot = func_140258();
    int target = *slot;
    if (target == 0)
        func_1410D8();
    *(int *)(target + 0x14) = 0;
}
