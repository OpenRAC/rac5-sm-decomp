/* LEVEL_01.REL:0x080B70: reviewed 132-byte candidate, held for ABI review.
 * Walks the positional sound array under lock, dispatching entries that are
 * active and unflagged.
 * pinned C with gnu-ee-trial links 132/132 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void SND_LockPositionalArray(void) __asm__("SND_LockPositionalArray__Fv");
extern void SND_UnlockPositionalArray(void) __asm__("SND_UnlockPositionalArray__Fv");
extern unsigned int SND_GetNumPositionalSounds(void) __asm__("SND_GetNumPositionalSounds__Fv");
extern char *SND_GetPositionalSoundAt(unsigned int i) __asm__("SND_GetPositionalSoundAt__FUi");
extern void func_080750(void *a, char *b);

void func_080B70(void)
{
    unsigned int i;
    char *snd;

    SND_LockPositionalArray();
    i = 0;
    while (i < SND_GetNumPositionalSounds()) {
        snd = SND_GetPositionalSoundAt(i);
        if (*(void **)(snd + 0x4C) != 0 && ((snd[0x54] ^ 1) & 1) != 0) {
            func_080750(*(void **)(snd + 0x4C), snd + 0x24);
        }
        i++;
    }
    SND_UnlockPositionalArray();
}
