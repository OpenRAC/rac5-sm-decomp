/* USA LEVEL_01.REL:0x0809D0 (21 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_1C5638.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
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

extern unsigned int D_001F3FB8;
extern int func_02A3F0(unsigned int bit);
extern void func_082CD8(int a0, int *a1);
extern int SND_CreatePositionalSound__FPP14SND_Positional(Voice **out);
extern void SND_ConstructPositionalSound__FP14SND_PositionalP9GDE_SoundPP14SND_PositionalPC4VEC3bT4ffffffUc(
    Voice *v, int sound, Voice **out, float *pos, int b0, int b1,
    float f0, float f1, float f2, float f3, float f4, float f5, unsigned char c);
extern void SND_PlayPositionalSound__FP14SND_PositionalUi(Voice *v, unsigned int a);

void func_0809D0(Obj *o, int sound, Voice **handle, int loop, int c4, int b1, unsigned char prio, int b0,
                 float f0, float f1, float f2, float f3)
{
    Voice *v;

    if (func_02A3F0(10) != 0 && o->cfg_40->sel_3F == 1)
        func_082CD8((int)o, &sound);
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
        SND_PlayPositionalSound__FP14SND_PositionalUi(v, D_001F3FB8);
    }
}
