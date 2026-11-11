int func_0A60E8(void);
extern int DelayThread(int usec);

void func_0A60F8(void)
{
    int a = func_0A60E8();

    while (func_0A60E8() == a) {
        DelayThread(1000);
    }
}
