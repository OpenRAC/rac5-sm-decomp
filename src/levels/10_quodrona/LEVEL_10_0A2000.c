int func_0A1FF0(void);
extern int DelayThread(int usec);

void func_0A2000(void)
{
    int a = func_0A1FF0();

    while (func_0A1FF0() == a) {
        DelayThread(1000);
    }
}
