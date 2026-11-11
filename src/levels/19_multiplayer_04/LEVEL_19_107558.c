/* LEVEL_19:0x107558 -- placement copy of LEVEL_01_12A088.c: unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_001B5B20;
extern int D_0029F8C0[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_107558(void)
{
    int i;
    int r;

    for (i = 0; i < D_001B5B20; i++) {
        snd_UnloadBank(D_0029F8C0[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_001B5B20 = 0;
}
