extern int *func_2340E8(void);
extern void func_234F68(void) __attribute__((noreturn));

void func_235258(void)
{
    int *slot = func_2340E8();
    int target = *slot;
    if (target == 0)
        func_234F68();
    *(int *)(target + 0x14) = 0;
}
