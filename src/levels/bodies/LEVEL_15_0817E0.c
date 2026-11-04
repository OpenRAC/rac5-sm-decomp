int func_0817D0(void);
extern int DelayThread(int usec);

void func_0817E0(void)
{
    int a = func_0817D0();

    while (func_0817D0() == a) {
        DelayThread(1000);
    }
}
