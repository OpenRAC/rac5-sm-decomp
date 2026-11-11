int func_09B6A8(void);
extern int DelayThread(int usec);

void sceDisplayWaitVblankStart__Fv(void)
{
    int a = func_09B6A8();

    while (func_09B6A8() == a) {
        DelayThread(1000);
    }
}
