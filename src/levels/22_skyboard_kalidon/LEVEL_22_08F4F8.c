int func_08F4E8(void);
extern int DelayThread(int usec);

void func_08F4F8(void)
{
    int a = func_08F4E8();

    while (func_08F4E8() == a) {
        DelayThread(1000);
    }
}
