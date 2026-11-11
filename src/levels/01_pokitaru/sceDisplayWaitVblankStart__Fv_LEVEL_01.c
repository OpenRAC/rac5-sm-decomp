int func_0A0ED8(void);
extern int DelayThread(int usec);

void sceDisplayWaitVblankStart__Fv(void)
{
    int a = func_0A0ED8();

    while (func_0A0ED8() == a) {
        DelayThread(1000);
    }
}
