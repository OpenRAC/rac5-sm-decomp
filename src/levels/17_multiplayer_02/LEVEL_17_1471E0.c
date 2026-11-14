/* LEVEL_17:0x1471E0 -- placement copy of LEVEL_01_170170.c: applies the two blocks of the object's state with the global parameters and the object's position, and reports 1. */
typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x58 - 0x3C];
    char *state;
} Obj;

extern int D_001B0FD0;
extern float D_001B0FD8[];
extern void func_0D8D88(void *a0, int a1, float *a2);
extern void func_148C70(void *a0, float *a1, float *a2);

int func_1471E0(Obj *o)
{
    char *state = o->state;
    char *first = state + 0x64;

    state = state + 0x80;
    func_0D8D88(first, D_001B0FD0, D_001B0FD8);
    func_148C70(first, o->pos, (float *)o);
    func_0D8D88(state, D_001B0FD0, D_001B0FD8);
    func_148C70(state, o->pos, (float *)o);
    return 1;
}
