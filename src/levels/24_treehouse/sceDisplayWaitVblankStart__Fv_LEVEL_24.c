int func_09A750(void);
extern int DelayThread(int usec);

void sceDisplayWaitVblankStart__Fv(void)
{
    int a = func_09A750();

    while (func_09A750() == a) {
        DelayThread(1000);
    }
}
