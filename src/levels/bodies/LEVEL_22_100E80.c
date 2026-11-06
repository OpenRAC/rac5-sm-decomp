extern int D_00165E78[];
extern void snd_UnloadBank(int bank);
extern int snd_FlushSoundCommands(void);
extern void DelayThread(unsigned int micros);

void func_100E80(void)
{
    int i;
    int j;

    for (i = 0; i < 2; i++) {
        int *p = (int *)((char *)D_00165E78 + i * 8);

        for (j = 1; j >= 0; j--) {
            if (*p != 0) {
                snd_UnloadBank(*p);
            }
            p++;
        }
    }

    while (snd_FlushSoundCommands() != 0) {
        DelayThread(800);
    }
}
