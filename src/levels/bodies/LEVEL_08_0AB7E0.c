int func_0AB7D0(void);
extern int DelayThread(int usec);

void func_0AB7E0(void)
{
    int a = func_0AB7D0();

    while (func_0AB7D0() == a) {
        DelayThread(1000);
    }
}
