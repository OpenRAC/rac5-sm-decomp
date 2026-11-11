/* LEVEL_16:0x13BDF8 -- placement copy of LEVEL_01_15F940.c: starts the positional sound once, when the pending state is 0 and the second value of the third argument has dropped below -0.1333, then marks the state 2. */
typedef struct {
    char pad_00[0x1208];
    void *snd_1208;
    int state_120C;
} Audio;

extern Audio D_002E2E88;
extern unsigned int D_001A1AE4;
extern int SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_13BDF8(void *self, float *pos, float *other)
{
    Audio *audio = &D_002E2E88;

    if (audio->state_120C == 0 && other[1] < -0.13333334f) {
        SND_PlayPositionalSound(audio->snd_1208, pos, 0.0f, 0, D_001A1AE4);
        audio->state_120C = 2;
    }
}
