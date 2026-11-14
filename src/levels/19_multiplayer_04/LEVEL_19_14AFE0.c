/* LEVEL_19:0x14AFE0 -- placement copy of LEVEL_01_170170.c: applies the two blocks of the object's state with the global parameters and the object's position, and reports 1. */
typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x58 - 0x3C];
    char *state;
} Obj;

extern int D_001BEB70;
extern float D_001BEB78[];
extern void func_0D8520(void *a0, int a1, float *a2);
extern void func_14CA70(void *a0, float *a1, float *a2);

int func_14AFE0(Obj *o)
{
    char *state = o->state;
    char *first = state + 0x64;

    state = state + 0x80;
    func_0D8520(first, D_001BEB70, D_001BEB78);
    func_14CA70(first, o->pos, (float *)o);
    func_0D8520(state, D_001BEB70, D_001BEB78);
    func_14CA70(state, o->pos, (float *)o);
    return 1;
}
