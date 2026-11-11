int func_090138(void);
extern int DelayThread(int usec);

void sceDisplayWaitVblankStart__Fv(void)
{
    int a = func_090138();

    while (func_090138() == a) {
        DelayThread(1000);
    }
}
