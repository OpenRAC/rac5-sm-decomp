/* LEVEL_05:0x125A00 -- placement copy of LEVEL_01_12A088.c: unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_001F5F10;
extern int D_0033D750[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_125A00(void)
{
    int i;
    int r;

    for (i = 0; i < D_001F5F10; i++) {
        snd_UnloadBank(D_0033D750[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_001F5F10 = 0;
}
