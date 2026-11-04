int func_07A830(void);
extern int DelayThread(int usec);

void func_07A840(void)
{
    int a = func_07A830();

    while (func_07A830() == a) {
        DelayThread(1000);
    }
}
