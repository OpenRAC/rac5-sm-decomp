/* Boot 0x01E8FE80 -- unloads the transition sound bank and waits for the sound queue to drain. */
extern int g_TransitionBankPtr;
extern void snd_UnloadBank(int bank);
extern int snd_FlushSoundCommands(void);
extern void DelayThread(unsigned int micros);

int GLOBALWAD_ReleaseTransitionBank__Fv(void) {
    if (g_TransitionBankPtr != 0) {
        snd_UnloadBank(g_TransitionBankPtr);
        while (snd_FlushSoundCommands() != 0) {
            DelayThread(0x320);
        }
        g_TransitionBankPtr = 0;
    }
    return 1;
}
