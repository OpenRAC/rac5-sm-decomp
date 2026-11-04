int func_0A0ED8(void);
extern int DelayThread(int usec);

void func_0A0EE8(void)
{
    int a = func_0A0ED8();

    while (func_0A0ED8() == a) {
        DelayThread(1000);
    }
}
