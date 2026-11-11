int func_08F148(void);
extern int DelayThread(int usec);

void sceDisplayWaitVblankStart__Fv(void)
{
    int a = func_08F148();

    while (func_08F148() == a) {
        DelayThread(1000);
    }
}
