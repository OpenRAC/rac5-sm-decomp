/* LEVEL_10:0x16D8A0 -- placement copy of LEVEL_01_170170.c: applies the two blocks of the object's state with the global parameters and the object's position, and reports 1. */
typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x58 - 0x3C];
    char *state;
} Obj;

extern int D_00210448;
extern float D_00210450[];
extern void func_0ECA98(void *a0, int a1, float *a2);
extern void func_16F338(void *a0, float *a1, float *a2);

int func_16D8A0(Obj *o)
{
    char *state = o->state;
    char *first = state + 0x64;

    state = state + 0x80;
    func_0ECA98(first, D_00210448, D_00210450);
    func_16F338(first, o->pos, (float *)o);
    func_0ECA98(state, D_00210448, D_00210450);
    func_16F338(state, o->pos, (float *)o);
    return 1;
}
