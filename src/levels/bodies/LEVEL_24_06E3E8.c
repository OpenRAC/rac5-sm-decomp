extern int func_06ED80(void);
extern void func_06EDD0(int);

void func_06E3E8(void)
{
    int value = func_06ED80();
    if (value != 0)
        func_06EDD0(value);
}
