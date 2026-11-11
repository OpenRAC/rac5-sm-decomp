/* LEVEL_07:0x12D088 -- placement copy of LEVEL_01_12A088.c: unloads the registered sound banks, then flushes and waits for the queue. */

extern int D_0021B190;
extern int D_00367190[];

void snd_UnloadBank(int a0);
int snd_FlushSoundCommands(void);
void DelayThread(int a0);

void func_12D088(void)
{
    int i;
    int r;

    for (i = 0; i < D_0021B190; i++) {
        snd_UnloadBank(D_00367190[i]);
    }
    r = snd_FlushSoundCommands();
    while (r != 0) {
        DelayThread(0x320);
        r = snd_FlushSoundCommands();
    }
    D_0021B190 = 0;
}
