int func_0242E8(void);
void func_025168(void) __attribute__((noreturn));

void __uncatch_exception(void)
{
    int p = *(int *)func_0242E8();
    if (p == 0)
        func_025168();
    *(int *)(p + 0x14) = 0;
}
