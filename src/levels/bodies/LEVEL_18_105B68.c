/* LEVEL_18:0x105B68 -- placement copy of LEVEL_01_12A088.c: unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_001B5E20;
extern int D_0029FAC0[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_105B68(void)
{
    int i;
    int r;

    for (i = 0; i < D_001B5E20; i++) {
        snd_UnloadBank(D_0029FAC0[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_001B5E20 = 0;
}
