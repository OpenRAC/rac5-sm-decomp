/* LEVEL_10:0x0811A0 -- placement copy of LEVEL_01_080B70.c: walks the positional sound array under lock, dispatching entries that are active and unflagged. */
extern void SND_LockPositionalArray(void) __asm__("SND_LockPositionalArray__Fv");
extern void SND_UnlockPositionalArray(void) __asm__("SND_UnlockPositionalArray__Fv");
extern unsigned int SND_GetNumPositionalSounds(void) __asm__("SND_GetNumPositionalSounds__Fv");
extern char *SND_GetPositionalSoundAt(unsigned int i) __asm__("SND_GetPositionalSoundAt__FUi");
extern void func_080D80(void *a, char *b);

void func_0811A0(void)
{
    unsigned int i;
    char *snd;

    SND_LockPositionalArray();
    i = 0;
    while (i < SND_GetNumPositionalSounds()) {
        snd = SND_GetPositionalSoundAt(i);
        if (*(void **)(snd + 0x4C) != 0 && ((snd[0x54] ^ 1) & 1) != 0) {
            func_080D80(*(void **)(snd + 0x4C), snd + 0x24);
        }
        i++;
    }
    SND_UnlockPositionalArray();
}
