int func_0A60E8(void);
extern int DelayThread(int usec);

void sceDisplayWaitVblankStart__Fv(void)
{
    int a = func_0A60E8();

    while (func_0A60E8() == a) {
        DelayThread(1000);
    }
}
