int func_09E188(void);
extern int DelayThread(int usec);

void func_09E198(void)
{
    int a = func_09E188();

    while (func_09E188() == a) {
        DelayThread(1000);
    }
}
