/* LEVEL_09:0x170D10 -- placement copy of LEVEL_01_17D280.c: starts the positional sound for the given row when its sound data is loaded, scaling the row's gain by the caller's factor. */
typedef struct SND_Positional SND_Positional;
typedef struct GDE_Sound GDE_Sound;
typedef struct VEC3 VEC3;
typedef struct SoundRow {
    float unused;
    float gain;
    float minimum;
    float maximum;
    float falloff;
    int tag;
} SoundRow;
typedef struct SoundState {
    unsigned char pad[0xA4];
    GDE_Sound *sounds[1];
} SoundState;

extern SoundState D_0037E158;
extern SoundRow D_0020B500[];
extern void SND_ConstructPositionalSound(SND_Positional *, GDE_Sound *, SND_Positional **, const VEC3 *, unsigned char, unsigned char, float, float, float, float, float, float, unsigned char) __asm__("SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc");

void func_170D10(SND_Positional *sound, int index, const VEC3 *position, SND_Positional **slot, float scale)
{
    SoundRow *row = &D_0020B500[index];
    GDE_Sound *data = D_0037E158.sounds[index];

    if (data)
        SND_ConstructPositionalSound(sound, data, slot, position, 1, 0, 1.0f, 0.5f, row->minimum, row->maximum, row->gain * scale, row->falloff, 0);
}
