/*
 * Symbol:  SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi
 * Address: 0x01E91BB8
 * Body:    176 bytes
 *
 * Allocates a positional sound record for a sound, copies two of its float
 * parameters, stores the optional 3D position, then starts playback. Returns 0
 * if the sound is null or empty, or if no record is free. The float argument
 * of the mangled name is unused.
 *
 * Profile: pinned chain (cpp, cc1 -quiet -O2 -G0, as) built by
 * tools/compiler/build_gnu_ee.sh. Rebuilt binaries are not hash-identical to the pins.
 * Measured: 176/176 matched bytes (full body, relocations resolved at the
 * retail addresses), 1 compile; pre-screen only, not run through the official gate.
 * Exact but unaccepted witness (USA boot, SCUS_976.15). Missing: the campaign
 * integration and the qualifying gate with pinned tools. The record layout
 * names only the offsets this body uses, inside the 0x58-byte record that
 * src/boot/SND_PausePositionalSounds__Fb.c declares.
 */
typedef struct {
    float x;
    float y;
    float z;
} VEC3;

typedef struct {
    char _pad00[0x0C];
    int field_0C;
    char _pad10[0x04];
    float field_14;
    char _pad18[0x08];
    float field_20;
} GDE_Sound;

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

int SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi(
    GDE_Sound *sound, const VEC3 *position, float unused, SND_Positional **link, unsigned int flags) {
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
    p->sound = sound;
    p->field_14 = sound->field_14;
    p->field_18 = sound->field_20;
    if (position != 0) {
        p->has_position = 1;
        p->position.x = position->x;
        p->position.y = position->y;
        p->position.z = position->z;
    } else {
        p->has_position = 0;
    }
    return SND_PlayPositionalSound__FP14SND_PositionalUi(p, flags);
}
