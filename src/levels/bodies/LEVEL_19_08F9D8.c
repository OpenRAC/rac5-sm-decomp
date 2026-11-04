int func_08F9C8(void);
extern int DelayThread(int usec);

void func_08F9D8(void)
{
    int a = func_08F9C8();

    while (func_08F9C8() == a) {
        DelayThread(1000);
    }
}
