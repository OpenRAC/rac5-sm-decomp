/* LEVEL_20:0x0DEC00 -- placement copy of LEVEL_01_12A088.c: unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_00117080;
extern int D_001C2F80[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_0DEC00(void)
{
    int i;
    int r;

    for (i = 0; i < D_00117080; i++) {
        snd_UnloadBank(D_001C2F80[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_00117080 = 0;
}
