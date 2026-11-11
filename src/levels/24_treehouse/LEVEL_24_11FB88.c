/* LEVEL_24:0x11FB88 -- placement copy of LEVEL_01_12A088.c: unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_001D7B10;
extern int D_0031D750[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_11FB88(void)
{
    int i;
    int r;

    for (i = 0; i < D_001D7B10; i++) {
        snd_UnloadBank(D_0031D750[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_001D7B10 = 0;
}
