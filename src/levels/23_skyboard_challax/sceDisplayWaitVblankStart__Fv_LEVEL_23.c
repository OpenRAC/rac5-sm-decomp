int func_097C18(void);
extern int DelayThread(int usec);

void sceDisplayWaitVblankStart__Fv(void)
{
    int a = func_097C18();

    while (func_097C18() == a) {
        DelayThread(1000);
    }
}
