/* LEVEL_22:0x100C78 -- placement copy of LEVEL_01_12A088.c: unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_00165E70;
extern int D_002A7280[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_100C78(void)
{
    int i;
    int r;

    for (i = 0; i < D_00165E70; i++) {
        snd_UnloadBank(D_002A7280[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_00165E70 = 0;
}
