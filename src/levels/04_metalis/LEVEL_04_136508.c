/* LEVEL_04:0x136508 -- placement copy of LEVEL_01_12A088.c: unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_002202B0;
extern int D_0036C090[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_136508(void)
{
    int i;
    int r;

    for (i = 0; i < D_002202B0; i++) {
        snd_UnloadBank(D_0036C090[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_002202B0 = 0;
}
