/* LEVEL_06:0x1206E0 -- placement copy of LEVEL_01_12A088.c: unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_001F5A90;
extern int D_0033E610[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_1206E0(void)
{
    int i;
    int r;

    for (i = 0; i < D_001F5A90; i++) {
        snd_UnloadBank(D_0033E610[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_001F5A90 = 0;
}
