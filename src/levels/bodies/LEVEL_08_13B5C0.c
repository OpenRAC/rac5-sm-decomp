/* LEVEL_08:0x13B5C0 -- placement copy of LEVEL_01_12A088.c: unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_0024FD50;
extern int D_003A0B10[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_13B5C0(void)
{
    int i;
    int r;

    for (i = 0; i < D_0024FD50; i++) {
        snd_UnloadBank(D_003A0B10[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_0024FD50 = 0;
}
