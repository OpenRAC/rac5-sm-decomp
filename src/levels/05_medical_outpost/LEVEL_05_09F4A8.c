int func_09F498(void);
extern int DelayThread(int usec);

void func_09F4A8(void)
{
    int a = func_09F498();

    while (func_09F498() == a) {
        DelayThread(1000);
    }
}
