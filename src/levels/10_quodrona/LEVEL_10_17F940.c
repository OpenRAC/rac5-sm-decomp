/* LEVEL_10:0x17F940 -- placement copy of LEVEL_01_17D300.c: creates a positional sound; when that succeeds, runs a helper on it and then plays it at a global volume word. */

struct SND_Positional;

void SND_CreatePositionalSound__FPP14SND_Positional(struct SND_Positional **out);
void SND_PlayPositionalSound__FP14SND_PositionalUi(struct SND_Positional *s, unsigned int v);
void func_17F8C0(struct SND_Positional *s, unsigned char *owner, unsigned int key, int z, float f);

extern unsigned int D_001FCFB8;

void func_17F940(unsigned char *owner, unsigned int key, float f)
{
    struct SND_Positional *snd;

    snd = 0;
    SND_CreatePositionalSound__FPP14SND_Positional(&snd);
    if (snd != 0) {
        func_17F8C0(snd, owner, key, 0, f);
        SND_PlayPositionalSound__FP14SND_PositionalUi(snd, D_001FCFB8);
    }
}
