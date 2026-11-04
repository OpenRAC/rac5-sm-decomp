int func_0A0C58(void);
extern int DelayThread(int usec);

void func_0A0C68(void)
{
    int a = func_0A0C58();

    while (func_0A0C58() == a) {
        DelayThread(1000);
    }
}
