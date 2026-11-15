/* USA SCUS_976.15 boot: SND_Play__FP9GDE_SoundffPP14SND_PositionalUi,
 * 0x01E91890. Observed body: 172 bytes, followed by one zero alignment word.
 * Measured 15 November 2026: all 172 body bytes are exact after independent
 * SN linking at the retail address under gnu-ee-trial with -O2 -G0 and the
 * default GNU assembler. The rebuilt default route gives 140 of 172, first
 * differing byte +0x04: the prologue's save and move order, the measured
 * effect of that profile's save-order change. No division padding is needed.
 * The tools are rebuilt, not hash-qualified. This is an unaccepted witness:
 * complete-program integration, boundaries, types and a gnu-ee-trial
 * selector require separate review. No promotion or matching credit.
 * Reconstructed from the retail boot. Refuses a null sound or one without an
 * identifier, creates a positional record, links it back to the caller,
 * scales the sound's volume and pitch by the two float arguments and starts
 * it. Field names are placeholders; the 0x58-byte record size follows the
 * accepted positional-sound sources.
 */typedef struct {
    char _pad00[0x0C];
    int field_0C;
    char _pad10[0x04];
    float field_14;
    char _pad18[0x08];
    float field_20;
} GDE_Sound;

typedef struct { float x; float y; float z; } VEC3;
typedef struct SND_Positional {
    char _pad00[0x04];
    GDE_Sound *sound;
    char _pad08[0x0C];
    float field_14;
    float field_18;
    char _pad1C[0x04];
    unsigned char has_position;
    char _pad21[0x03];
    VEC3 position;
    char _pad30[0x28];
} SND_Positional;

extern SND_Positional *SND_CreatePositionalSound__FPP14SND_Positional(SND_Positional **link);
extern int SND_PlayPositionalSound__FP14SND_PositionalUi(SND_Positional *p, unsigned int flags);

int SND_Play__FP9GDE_SoundffPP14SND_PositionalUi(
    GDE_Sound *sound, float volume, float pitch, SND_Positional **link, unsigned int flags) {
    SND_Positional *p;

    if (sound == 0) {
        return 0;
    }
    if (sound->field_0C == 0) {
        return 0;
    }
    p = SND_CreatePositionalSound__FPP14SND_Positional(link);
    if (p == 0) {
        return 0;
    }
    if (link != 0) {
        *link = p;
    }
    p->sound = sound;
    p->field_14 = sound->field_14 * volume;
    p->field_18 = sound->field_20 * pitch;
    return SND_PlayPositionalSound__FP14SND_PositionalUi(p, flags);
}
