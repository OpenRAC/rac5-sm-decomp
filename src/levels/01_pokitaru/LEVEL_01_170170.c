/* LEVEL_01:0x170170 -- applies the two blocks of the object's state with the global parameters and the object's position, and reports 1. */
typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x58 - 0x3C];
    char *state;
} Obj;

extern int D_002077E8;
extern float D_002077F0[];
extern void func_0ED158(void *a0, int a1, float *a2);
extern void func_171C08(void *a0, float *a1, float *a2);

int func_170170(Obj *o)
{
    char *state = o->state;
    char *first = state + 0x64;

    state = state + 0x80;
    func_0ED158(first, D_002077E8, D_002077F0);
    func_171C08(first, o->pos, (float *)o);
    func_0ED158(state, D_002077E8, D_002077F0);
    func_171C08(state, o->pos, (float *)o);
    return 1;
}
