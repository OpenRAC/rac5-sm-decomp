/* LEVEL_07:0x082B38 -- placement copy of LEVEL_08_088940.c: placement copy of LEVEL_01_0809D0.c: starts a positional sound for an object: resolves the sound (the helper may replace it), creates or reuses the voice, constructs it at the object's position with the given ratios and stamps the voice with its owner, loop flag and priority before playing it. */
typedef struct Voice {
    char pad_00[0x4C];
    int f_4C;
    int f_50;
    unsigned char b_54;
} Voice;

typedef struct Cfg {
    char pad_00[0x3F];
    unsigned char sel_3F;
} Cfg;

typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[4];
    Cfg *cfg_40;
} Obj;

extern unsigned int D_002082B8;
extern int func_02A730(unsigned int bit);
extern void func_084E28(int a0, int *a1);
extern int SND_CreatePositionalSound__FPP14SND_Positional(Voice **out);
extern void SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc(
    Voice *v, int sound, Voice **out, float *pos, int b0, int b1,
    float f0, float f1, float f2, float f3, float f4, float f5, unsigned char c);
extern void SND_PlayPositionalSound__FP14SND_PositionalUi(Voice *v, unsigned int a);

void func_082B38(Obj *o, int sound, Voice **handle, int loop, int c4, int b1, unsigned char prio, int b0,
                 float f0, float f1, float f2, float f3)
{
    Voice *v;

    if (func_02A730(10) != 0 && o->cfg_40->sel_3F == 1)
        func_084E28((int)o, &sound);
    v = 0;
    if (handle != 0) {
        SND_CreatePositionalSound__FPP14SND_Positional(handle);
        v = *handle;
    } else {
        SND_CreatePositionalSound__FPP14SND_Positional(&v);
    }
    if (v != 0) {
        SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc(
            v, sound, handle, o->pos, b0, b1, 1.0f, 0.5f, f1, f2, f0, f3, c4);
        v->f_4C = (int)o;
        if (loop != 0)
            v->f_50 = 1;
        v->b_54 = prio;
        SND_PlayPositionalSound__FP14SND_PositionalUi(v, D_002082B8);
    }
}
