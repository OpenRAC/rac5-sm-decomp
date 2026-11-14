/* LEVEL_01:0x02AE38 -- starts the positional sound once, when the pending state is 0 and the second value of the third argument has dropped below -0.1333, then marks the state 1. */
typedef struct {
    char pad_00[0x150];
    void *snd_150;
    int state_154;
} Audio;

extern Audio D_00231770;
extern unsigned int D_001F3FB8;
extern int SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_02AE38(void *self, float *pos, float *other)
{
    Audio *audio = &D_00231770;

    if (audio->state_154 == 0 && other[1] < -0.13333334f) {
        SND_PlayPositionalSound(audio->snd_150, pos, 0.0f, 0, D_001F3FB8);
        audio->state_154 = 1;
    }
}
