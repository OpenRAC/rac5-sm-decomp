/* LEVEL_04:0x085C30 -- locks the positional sound array, pauses matching entries, then unlocks it. */

struct SndPositional;

void SND_LockPositionalArray(void) __asm__("SND_LockPositionalArray__Fv");
void SND_UnlockPositionalArray(void) __asm__("SND_UnlockPositionalArray__Fv");
int SND_GetNumPositionalSounds(void) __asm__("SND_GetNumPositionalSounds__Fv");
struct SndPositional *SND_GetPositionalSoundAt(unsigned int i) __asm__("SND_GetPositionalSoundAt__FUi");
void SND_PausePositionalSound(struct SndPositional *p, int b) __asm__("SND_PausePositionalSound__FP14SND_Positionalb");

void func_085C30(int a, int b)
{
    unsigned int i;
    char *p;

    SND_LockPositionalArray();
    i = 0;
    while (i < (unsigned int)SND_GetNumPositionalSounds()) {
        p = (char *)SND_GetPositionalSoundAt(i);
        if (*(int *)(p + 0x4C) == a) {
            if (*(int *)(p + 0x50) != 0) {
                SND_PausePositionalSound((struct SndPositional *)p, b);
            }
        }
        i++;
    }
    SND_UnlockPositionalArray();
}
