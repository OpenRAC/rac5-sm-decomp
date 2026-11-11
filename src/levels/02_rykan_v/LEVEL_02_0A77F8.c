int func_0A77E8(void);
extern int DelayThread(int usec);

void func_0A77F8(void)
{
    int a = func_0A77E8();

    while (func_0A77E8() == a) {
        DelayThread(1000);
    }
}
