/* LEVEL_15:0x0245B0 -- placement copy of LEVEL_01_02AE38.c: starts the positional sound once, when the pending state is 0 and the second value of the third argument has dropped below -0.1333, then marks the state 1. */
typedef struct {
    char pad_00[0x150];
    void *snd_150;
    int state_154;
} Audio;

extern Audio D_001798F0;
extern unsigned int D_00148C38;
extern int SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_0245B0(void *self, float *pos, float *other)
{
    Audio *audio = &D_001798F0;

    if (audio->state_154 == 0 && other[1] < -0.13333334f) {
        SND_PlayPositionalSound(audio->snd_150, pos, 0.0f, 0, D_00148C38);
        audio->state_154 = 1;
    }
}
