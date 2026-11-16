/* USA SCUS_976.15 boot: SND_PlayPositionalSound__FP14SND_PositionalUi,
 * 0x01E91A30. Observed body: 392 bytes; it fills its interval.
 * Measured 14 November 2026: all 392 body bytes are exact after independent
 * SN linking at the retail address under gnu-ee-trial with -O2 -G0 and the
 * default GNU assembler. The rebuilt default route gives 380 of 392, first
 * differing byte +0x08 (prologue save order), as for the accepted-profile
 * question recorded for SND_Play__FP9GDE_SoundffPP14SND_PositionalUi.
 * The tools are rebuilt, not hash-qualified. This is an unaccepted witness:
 * complete-program integration, boundaries, types and a gnu-ee-trial
 * selector require separate review. No promotion or matching credit.
 * Reconstructed from the retail boot. Refuses a null record or sound, and a
 * replay sooner than the sound's minimum interval (default 0.1 s), in which
 * case it detaches and releases the record. Otherwise it computes volume,
 * pan and pitch and starts the sound with the record as callback context.
 * The sound identifier is read before the volume; the opposite order swaps
 * their two saved registers (386 of 392). Field names are placeholders and
 * the 0x60-byte record size is provisional.
 */
typedef struct {
    char _pad00[0x0C];
    int field_0C;
    char _pad10[0x04];
    float field_14;
    char _pad18[0x08];
    float field_20;
    float field_24;
    float field_28;
    int field_2C;
} GDE_Sound;

typedef struct SND_Positional {
    int state;
    GDE_Sound *sound;
    unsigned int soundID;
    char _pad0C[0x04];
    struct SND_Positional **link;
    char _pad14[0x4C];
} SND_Positional;

extern void func_1E92AB0(SND_Positional *p);
extern void func_1E92FC0(SND_Positional *p, int *out0, int *out1);
extern int func_1E92F40(float pitch);
extern void func_1E92D78(void);
extern void snd_PlaySoundVolPanPMPB_CB(int sound, int volume, int pan, int pitch,
                                       int pitchMod, int pitchBend, int pmpb,
                                       int callback);

int SND_PlayPositionalSound__FP14SND_PositionalUi(SND_Positional *p, unsigned int flags) {
    GDE_Sound *sound;
    float t;
    float tol;
    int a;
    int b;
    int id;
    int vol;
    int pitch;

    if (p == 0) {
        return 0;
    }
    sound = p->sound;
    if (sound == 0) {
        return 0;
    }
    t = (float)flags * (1.0f / 30.0f);
    tol = sound->field_28;
    if (tol == 0.0f) {
        tol = 0.1f;
    }
    if (t > 0.001f && tol >= 0.0f && t - sound->field_24 < tol) {
        if (p->link != 0) {
            *p->link = 0;
            p->link = 0;
        }
        func_1E92AB0(p);
        return 0;
    }
    id = p->sound->field_0C;
    vol = p->sound->field_2C;
    a = 0;
    b = 0;
    func_1E92FC0(p, &a, &b);
    pitch = func_1E92F40(sound->field_20);
    p->soundID = 0xFFFFFFFFu;
    snd_PlaySoundVolPanPMPB_CB(id, vol, a, b, pitch, 0,
                               (int)func_1E92D78, (int)p);
    p->state = 2;
    sound->field_24 = t;
    return p->soundID;
}
