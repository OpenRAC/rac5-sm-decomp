int func_0A2ED8(void);
extern int DelayThread(int usec);

void func_0A2EE8(void)
{
    int a = func_0A2ED8();

    while (func_0A2ED8() == a) {
        DelayThread(1000);
    }
}
