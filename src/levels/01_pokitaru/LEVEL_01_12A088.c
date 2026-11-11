/* LEVEL_01:0x12A088 -- unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_00206E90;
extern int D_00351890[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_12A088(void)
{
    int i;
    int r;

    for (i = 0; i < D_00206E90; i++) {
        snd_UnloadBank(D_00351890[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_00206E90 = 0;
}
