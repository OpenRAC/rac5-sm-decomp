/* LEVEL_24:0x1564F0 -- placement copy of LEVEL_01_170170.c: applies the two blocks of the object's state with the global parameters and the object's position, and reports 1. */
typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x58 - 0x3C];
    char *state;
} Obj;

extern int D_001D86F0;
extern float D_001D86F8[];
extern void func_0E3030(void *a0, int a1, float *a2);
extern void func_157F88(void *a0, float *a1, float *a2);

int func_1564F0(Obj *o)
{
    char *state = o->state;
    char *first = state + 0x64;

    state = state + 0x80;
    func_0E3030(first, D_001D86F0, D_001D86F8);
    func_157F88(first, o->pos, (float *)o);
    func_0E3030(state, D_001D86F0, D_001D86F8);
    func_157F88(state, o->pos, (float *)o);
    return 1;
}
