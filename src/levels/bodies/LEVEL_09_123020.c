/* LEVEL_09:0x123020 -- placement copy of LEVEL_01_12A088.c: unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_001F0990;
extern int D_00339010[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_123020(void)
{
    int i;
    int r;

    for (i = 0; i < D_001F0990; i++) {
        snd_UnloadBank(D_00339010[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_001F0990 = 0;
}
