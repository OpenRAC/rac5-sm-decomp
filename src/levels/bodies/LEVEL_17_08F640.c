int func_08F630(void);
extern int DelayThread(int usec);

void func_08F640(void)
{
    int a = func_08F630();

    while (func_08F630() == a) {
        DelayThread(1000);
    }
}
