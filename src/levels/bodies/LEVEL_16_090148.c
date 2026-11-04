int func_090138(void);
extern int DelayThread(int usec);

void func_090148(void)
{
    int a = func_090138();

    while (func_090138() == a) {
        DelayThread(1000);
    }
}
