/* USA SCUS_976.15 boot: SND_CreatePositionalSound__FPP14SND_Positional,
 * 0x01E91940. Observed body: 132 bytes, followed by one zero alignment word.
 * Measured 15 November 2026: all 132 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Under the positional-array lock, takes
 * the first free record of the 64, marks it used, stores the caller's link
 * and writes the record back through it; returns the record or null.
 * The scan is an int-indexed loop: retail ends it with a signed comparison
 * of two addresses and has no entry test. A pointer walk compared with an
 * end pointer gives 140 bytes. Field names are placeholders; the 0x58-byte
 * record size follows the accepted positional-sound sources.
 */
typedef struct SND_Positional {
    int active;
    int f04;
    int f08;
    int f0C;
    struct SND_Positional **link;
    unsigned char rest[0x44];
} SND_Positional;

extern SND_Positional gSounds[];
extern void SND_LockPositionalArray__Fv(void);
extern void SND_UnlockPositionalArray__Fv(void);

SND_Positional *SND_CreatePositionalSound__FPP14SND_Positional(
    SND_Positional **link)
{
    SND_Positional *sound;
    int i;

    SND_LockPositionalArray__Fv();
    for (i = 0; i < 64; i++) {
        sound = &gSounds[i];
        if (sound->active == 0) {
            sound->active = 1;
            sound->link = link;
            if (link != 0)
                *link = sound;
            SND_UnlockPositionalArray__Fv();
            return sound;
        }
    }
    SND_UnlockPositionalArray__Fv();
    return 0;
}
