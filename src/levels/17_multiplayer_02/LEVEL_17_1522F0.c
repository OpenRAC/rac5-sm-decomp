/* LEVEL_17:0x1522F0 -- placement copy of LEVEL_16_159EF0.c: starts the positional sound for the object when none is playing yet, then runs the follow-up helper. */
typedef struct { char pad_00[0x14]; void *playing; } State;
typedef struct { char pad_00[0x30]; float pos[3]; char pad_3C[0x58 - 0x3C]; State *state; } Obj;

extern void *D_001B11EC;
extern unsigned int D_001950E4;
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");
extern void func_1523B0(Obj *o);

void func_1522F0(Obj *o)
{
    State *s = o->state;

    if (D_001B11EC != 0) {
        if (s->playing == 0) {
            SND_PlayPositionalSound(D_001B11EC, o->pos, 0.0f, &s->playing, D_001950E4);
        }
    }
    func_1523B0(o);
}
