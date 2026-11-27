/* USA SCUS_976.15 boot: MCPTRANS_SHRINK_StartSound__Fv, 0x01E6CD30.
 * Observed body: 180 bytes, followed by a padding word and unrelated code
 * inside the 240-byte interval.
 * Measured 17 November 2026: all 180 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. It looks up a sound by id, and when
 * found creates a positional sound in the module's sound slot, constructs it
 * with fixed volume/pitch style parameters and starts it using the global
 * frame counter as the play argument.
 * No unusual source shape was needed; the natural nested guards matched.
 * Remeasured 25 November 2026 on master ef75f8a07 with callee prototypes
 * taken from existing sources, still 180/180 on both routes:
 * GLOBALWAD_FindSound__FUi returns int as in src/boot; the two bool
 * parameters of SND_ConstructPositionalSound are unsigned char as in the
 * accepted level callers and the mangled name (the accepted src/boot
 * definition lists one parameter fewer, which needs its own review);
 * SND_CreatePositionalSound returns the record, as in its retained
 * nonmatching/boot definition.
 */
typedef struct SND_Positional SND_Positional;
typedef struct GDE_Sound GDE_Sound;
typedef struct { float x, y, z; } VEC3;
extern SND_Positional *mcptrans_shrink_sound;
extern int g_mcpFrameCount;
extern int GLOBALWAD_FindSound__FUi(unsigned int);
extern SND_Positional *SND_CreatePositionalSound__FPP14SND_Positional(SND_Positional **);
extern void SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc(SND_Positional *, GDE_Sound *, SND_Positional **, const VEC3 *, unsigned char, unsigned char, float, float, float, float, float, float, unsigned char);
extern int SND_PlayPositionalSound__FP14SND_PositionalUi(SND_Positional *, unsigned int);

void MCPTRANS_SHRINK_StartSound__Fv(void) {
    GDE_Sound *s = (GDE_Sound *)GLOBALWAD_FindSound__FUi(0x30594EC7);
    if (s != 0) {
        SND_CreatePositionalSound__FPP14SND_Positional(&mcptrans_shrink_sound);
        if (mcptrans_shrink_sound != 0) {
            SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc(mcptrans_shrink_sound, s, &mcptrans_shrink_sound, 0, 1, 0, 2.0f, 0.75f, 0.01f, 22.0f, 1.0f, 1.0f, 0);
            SND_PlayPositionalSound__FP14SND_PositionalUi(mcptrans_shrink_sound, g_mcpFrameCount);
        }
    }
}
