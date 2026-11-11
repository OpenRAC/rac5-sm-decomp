int func_07A830(void);
extern int DelayThread(int usec);

void sceDisplayWaitVblankStart__Fv(void)
{
    int a = func_07A830();

    while (func_07A830() == a) {
        DelayThread(1000);
    }
}
