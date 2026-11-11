int func_09A750(void);
extern int DelayThread(int usec);

void func_09A760(void)
{
    int a = func_09A750();

    while (func_09A750() == a) {
        DelayThread(1000);
    }
}
