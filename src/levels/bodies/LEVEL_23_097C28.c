int func_097C18(void);
extern int DelayThread(int usec);

void func_097C28(void)
{
    int a = func_097C18();

    while (func_097C18() == a) {
        DelayThread(1000);
    }
}
