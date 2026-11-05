extern int func_06EA80(void);
extern void func_06EAD0(int);

void func_06E0E8(void)
{
    int value = func_06EA80();
    if (value != 0)
        func_06EAD0(value);
}
