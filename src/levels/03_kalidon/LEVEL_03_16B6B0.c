/* LEVEL_03:0x16B6B0 -- placement copy of LEVEL_01_170170.c: applies the two blocks of the object's state with the global parameters and the object's position, and reports 1. */
typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x58 - 0x3C];
    char *state;
} Obj;

extern int D_0021FE78;
extern float D_0021FE80[];
extern void func_0EB9F0(void *a0, int a1, float *a2);
extern void func_16D148(void *a0, float *a1, float *a2);

int func_16B6B0(Obj *o)
{
    char *state = o->state;
    char *first = state + 0x64;

    state = state + 0x80;
    func_0EB9F0(first, D_0021FE78, D_0021FE80);
    func_16D148(first, o->pos, (float *)o);
    func_0EB9F0(state, D_0021FE78, D_0021FE80);
    func_16D148(state, o->pos, (float *)o);
    return 1;
}
